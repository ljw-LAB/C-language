#include <stdio.h>

// void CallbackClient();
// /*    서버    */
// void PrintInt(int data)
// {
//     printf("정수 : %d \n", data);
//     CallbackClient();
// }

// void CallbackClient()
// {
//     printf("클라이언트 코드!");
// }

// /*    클라이언트    */
// void main()
// {
//     PrintInt(10);
// }

//////////////////////////////////////////

// //void CallbackClient();

// /*    서버    */
// void PrintInt(int data, void (*pf)())
// {
//     printf("정수 : %d \n", data);
//     pf();
// }

// /*    클라이언트    */

// void Callback1()
// {
//     printf("클라이언트 코드!");
// }

// void Callback2()
// {
//     printf("==================");
// }

// void Callback3()
// {
//     printf("*****************");
//     printf("예쁜 별로 장식!");
//     printf("*****************");
// }

// void main()
// {
//     PrintInt(10,Callback1);
//     PrintInt(10,Callback2);
//     PrintInt(10,Callback3);
// }

///////////////////////////

// void Sort(int list[], int size)
// {
//     int i, j, min;
//     for(i = 0; i < size-1; i++)
//     {
//         for(min = i, j = i+1; j < size; j++)
//         {
//             if(list[j] < list[min])
//                 min = j;
//         }

//         {
//             int temp = list[i];
//             list[i] = list[min];
//             list[min] = temp;
//         }
//     }
// }

// void Sort(int list[], int size, int (*pred)(int, int))
// {
//     int i, j, min;
//     for (i = 0; i < size - 1; i++)
//     {
//         for (min = i, j = i + 1; j < size; j++)
//         {
//             if (pred(list[j], list[min]))
//                 min = j;
//         }

//         {
//             int temp = list[i];
//             list[i] = list[min];
//             list[min] = temp;
//         }
//     }
// }
// int Less(int a, int b)
// {
//     return a < b;
// }

// int Greater(int a, int b)
// {
//     return a > b;
// }
// void main()
// {
//     int list[5] = {50, 20, 90, 10, 30};
    
//     printf("시작 : %d %d %d %d %d \n", list[0], list[1], list[2], list[3], list[4]);
//     Sort(list, 5, Less);
//     printf("내림 : %d %d %d %d %d \n", list[0], list[1], list[2], list[3], list[4]);
//     Sort(list, 5, Greater);
//     printf("올림 : %d %d %d %d %d \n", list[0], list[1], list[2], list[3], list[4]);
// }

//////////////////////////////////////////////////////////////////////////////////////
#include <stdlib.h>
void Sort(void* list[], int size, int (*pred)(void*, void*))
{
    int i, j, min;
    for (i = 0; i < size - 1; i++)
    {
        for (min = i, j = i + 1; j < size; j++)
        {
            if (pred(list[j], list[min]))
                min = j;
        }

        {
            void* temp = list[i];
            list[i] = list[min];
            list[min] = temp;
        }
    }
}

 int LessInt(void *a, void *b)
 {
     return *(int *)a < *(int *)b;
 }

 int GreaterDouble(void* a, void* b)
 {
     return *(double*)a > *(double*)b;
 }

 void main()
 {
     void* listInt[5] = { 0 };
     void* listDbl[5] = { 0 };
     int i;

     /* 정수 Sort */
     listInt[0] = malloc(sizeof(int)); *(int *)listInt[0] = 50;
     listInt[1] = malloc(sizeof(int)); *(int *)listInt[1] = 20;
     listInt[2] = malloc(sizeof(int)); *(int *)listInt[2] = 90;
     listInt[3] = malloc(sizeof(int)); *(int *)listInt[3] = 10;
     listInt[4] = malloc(sizeof(int)); *(int *)listInt[4] = 00;

    printf("시작 : %d %d %d %d %d \n", *(int *)listInt[0], *(int *)listInt[1], *(int *)listInt[2], *(int *)listInt[3], *(int *)listInt[4]);
    Sort(listInt, 5, LessInt);
    printf("오름차순 정렬 : %d %d %d %d %d \n", *(int *)listInt[0], *(int *)listInt[1], *(int *)listInt[2], *(int *)listInt[3], *(int *)listInt[4]);

    for(i = 0; i < 5; i++)
        free(listInt[i]);

    listDbl[0] = malloc(sizeof(double)); *(double *)listDbl[0] = 5.5;
    listDbl[1] = malloc(sizeof(double)); *(double *)listDbl[1] = 2.2;
    listDbl[2] = malloc(sizeof(double)); *(double *)listDbl[2] = 9.9;
    listDbl[3] = malloc(sizeof(double)); *(double *)listDbl[3] = 1.1;
    listDbl[4] = malloc(sizeof(double)); *(double *)listDbl[4] = 3.3;
    
    printf("시작 : %g %g %g %g %g \n", *(double *)listDbl[0], *(double *)listDbl[1], *(double *)listDbl[2], *(double *)listDbl[3], *(double *)listDbl[4]);
    Sort(listDbl, 5, GreaterDouble);
    printf("내림차순 : %g %g %g %g %g \n", *(double *)listDbl[0], *(double *)listDbl[1], *(double *)listDbl[2], *(double *)listDbl[3], *(double *)listDbl[4]);
    
    for(i = 0; i < 5; i++)
        free(listDbl[i]);
}