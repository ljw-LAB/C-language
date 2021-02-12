#include <stdio.h>

// void main()
// {
//     char carr2[2][3] = {{'A', 'B', 'C'}, {'1', '2', '3'}};
//     printf("%x %x %x \n", carr2, carr2[0], &carr2[0][0]);
//     printf("%x %x %x \n", carr2+1, carr2[0]+1, &carr2[0][0]+1);
//     printf("%x %x \n", &carr2, &carr2+1);

// }

// void main()
// {
//     int iarr2[2][3] = {{10, 20, 30}, {100, 200, 300}};
//     printf("%x %x %x \n", iarr2, iarr2[0], &iarr2[0][0]);
//     printf("%x %x %x \n", iarr2+1, iarr2[0]+1, &iarr2[0][0]+1);
//     printf("%x %x \n", &iarr2, &iarr2+1);

// }

 #include <string.h>

// void main()
// {
//     int arr1[25];
//     int arr2[5][5];
//     int i, j;

//     for(i = 0; i < 25; i++)
//         arr1[i] = (i+1)*10;
//     memcpy(arr2, arr1, sizeof(int)*25);
    
//     for(i = 0; i < 25; i++)
//     {
//         printf("%5d", arr1[i]);
//         if((i+1) % 5 == 0)
//             puts(""); // \n
//     }
//     puts("===============");
//     for(i = 0; i < 5; i++)
//     {
//         for(j = 0; j < 5; j++)
//             printf("%5d", arr2[i][j]);
//         puts(""); // \n
//     }

// }

// void main()
// {
//     int arr1[25];
//     int arr2[5][5];
//     int i, j;

//     for(i = 0; i < 25; i++)
//         arr1[i] =(i+1)*10;
//     memcpy(arr2, arr1, sizeof(int)*25);

//     for(i = 0; i < 5; i++)
//         arr1[i*5+i] = 0;
//     for(i=0; i < 25; i++)
//     {
//         printf("%5d", arr1[i]);
//         if((i+1) % 5 == 0)
//             puts(""); // \n
//     }
//     puts("===============");
//     for(i = 0; i < 5; i++)
//     {
//         for(j = 0; j < 5; j++)
//             printf("%5d", arr2[i][j]);
//         puts(""); // \n
//     }

// }

// void main()
// {
//     int arr[25];
//     int (*ap)[5] = (int (*)[5])arr;
//     int i, j;

//     for(i = 0; i < 25; i++)
//         arr[i] =(i+1)*10;
//     for(i = 0; i < 5; i++)
//         ap[i][i] = 0;
    
//     for(i = 0; i < 5; i++)
//     {
//         for(j = 0; j < 5; j++)
//             printf("%5d", ap[i][j]);
//         puts(""); // \n
//     }
//     puts("===============");
//     for(i = 0; i < 25; i++)
//     {
//         printf("%5d", arr[i]);
//         if((i+1) % 5 == 0)
//             puts(""); // \n
//     }
// }

typedef int (*ARR3)[3][3];
typedef int (*ARR9)[9];

void ArrPoint(ARR9 arr)
{
    int i, j;

    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9; j++)
            printf("%3d", arr[i][j]);
        puts("");
    }
    puts("==================");
}

void main()
{
    int arr[9][9];

    ARR3 ap;
    int i, j;

    memset(arr, 0, sizeof(int)*9*9);
    ArrPoint(arr);

    ap = (ARR3)arr;

    for(i = 0; i < 9; i++)
        for(j = 0; j < 3; j++)
            ap[i][1][j] = 1;
    ArrPoint(arr);

    for(i = 0; i < 9; i++)
        for(j = 0; j < 3; j++)
            ap[3][i][j] = 1;
    ArrPoint(arr);

    for(i = 3; i < 6; i++)
        for(j = 0; j < 3; j++)
            ap[3][i][j] = 3;
    ArrPoint(arr);

}
