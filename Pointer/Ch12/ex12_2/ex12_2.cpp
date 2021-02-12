#include <stdio.h>
#include <string.h>

// void main()
// {
//     char c = 'A';
//     char *cp = &c;

//     printf("%c \n", *cp++);
//     printf("%c \n", *--cp);
//     printf("%c \n", (*cp)++);
//     printf("%c \n", ++(*cp));

// }

//void main()
//{
//    int arr[5] = {10, 20, 30, 40, 50};
//    int *ap =arr;
//    int i;
//
//    for(i = 0; i < 5 ;i++)
//    {
//        printf("%d \n", *ap++);
//    }
//    puts("============");
//    printf("%x %x \n", arr, ap);
//}

 //void main()
 //{
 //    int arr[5] = {10, 20, 30, 40, 50};
 //    int *ap =arr;
 //    int i;

 //    for(i=0; i < 5; i++, ap++)
 //    {
 //        printf("%d \n", *ap);
 //    }
 //    puts("============");
 //    printf("%x %x \n", arr, ap);
 //}

 //void main()
 //{
 //    int arr[5] = {10, 20, 30, 40, 50};
 //    int *ap = arr;

 //    printf("%x %x \n", ap, arr);
 //    printf("%x %x \n", *ap, *arr);
 //    //printf("%x %x \n", *ap++, *arr++);

 //}

//  void main()
//  {
//     char c = 'A';
//     int n = 100;
//     double d = 80000.123;
//     char *str = "ABCDEF";
 
//     char temp[100];
//     char *p = temp;
 
//     memcpy(p, &c, sizeof(char));
//     memcpy(p += sizeof(char),   &n, sizeof(int));
//     memcpy(p += sizeof(int),    &d, sizeof(double));
//     memcpy(p += sizeof(double), &str, sizeof(char *));

//     printf("%s \n", *(char**)p);
//     p -= sizeof(double);
//     printf("%.3lf \n", *(double*)p);
//     p -= sizeof(int);
//     printf("%d \n", *(int*)p);
//     p -= sizeof(char);
//     printf("%c \n", *p);
    
// }

// void main()
// {
//     char arr[5] = {'A','B','C','D','E'};
    
//     printf("%x %x \n", &arr[0], &arr[2]);
//     printf("%d \n", &arr[2]-&arr[0]); //2
//     printf("%d \n", &arr[0]-&arr[2]); // -2
//     printf("%x %x \n", &arr[5], &arr[0]);
//     printf("%d \n", &arr[5]-&arr[0]); //5
//     printf("%d \n", &arr[0]-&arr[5]); //-5

// }

void main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    
    printf("%x %x \n", &arr[0], &arr[2]);
    printf("%d \n", &arr[2]-&arr[0]); //2
    printf("%d \n", &arr[0]-&arr[2]); // -2
    printf("%x %x \n", &arr[5], &arr[0]);
    printf("%d \n", &arr[5]-&arr[0]); //5
    printf("%d \n", &arr[0]-&arr[5]); //-5
    /*
    산술 연산을 기준으로 생각하면 각 변수의 주소 값이 104와 100이면 4가 나와야하지만
    포인터와 포인터를 빼는 행위는 두 주소사이에 대상이 몇개 있는지를 계산하기때문에 4가 아닌 1이 나옴
    */
}