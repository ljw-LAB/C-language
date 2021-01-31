#include <stdio.h>

// void main()
// {
// 	int arr[5] = {10, 20, 30, 40, 50};

//     printf("%d %d %d %d %d \n", arr[0], arr[1], arr[2], arr[3], arr[4]);
//     printf("%d %d %d %d %d \n", *arr, *(arr+1), *(arr+2), *(arr+3), *(arr+4));
// }

// void main()
// {
// 	int arr[5] = {10, 20, 30, 40, 50};

//     printf("%d %d %d \n", sizeof(arr), sizeof(arr[0]), sizeof(&arr[0]));
// }

// void main()
// {
// 	int arr[5] = {10, 20, 30, 40, 50};

//     printf("%x \n", arr);
//     puts("=================");
//     printf("%x %x \n", arr, &arr[0]);
//     printf("%x %x \n", arr+1, &arr[1]);
//     printf("%x %x \n", arr+2, &arr[2]);
//     printf("%x %x \n", arr+3, &arr[3]);
//     printf("%x %x \n", arr+4, &arr[4]);    
// }

// void main()
// {
//     int arr[2][3] = {{10, 20, 30}, {40, 50, 60}};

//     printf("%d %d %d \n", sizeof(arr), sizeof(arr[0]), sizeof(arr[1]));
//     printf("%d %d %d \n", sizeof(arr[0][0]), sizeof(arr[1][0]), sizeof(&arr[0][0]));
       
// }

// void main()
// {
//     int arr[2][3] = {{10, 20, 30}, {40, 50, 60}};
//     printf("%x \n", arr);
//     printf("%x %x %x %x %x %x\n", &arr[0][0], &arr[0][1], &arr[0][2], &arr[1][0], &arr[1][1], &arr[1][2]);

//     puts("=================");
//     printf("%x %x %x\n", arr+1, arr[0]+1, arr[1]+1); // 10 01 02111
//     printf("%x %x %x\n", arr+2, arr[0]+2, arr[1]+2); // 10+12  10 12
//     printf("%x %x %x\n", arr+3, arr[0]+3, arr[1]+3);//  10+24 11 12+4

// }

void main()
{
    int arr[2][3] = {{10, 20, 30}, {40, 50, 60}};
    printf("%d %d %d \n", arr[0][0], *arr[0], **arr); // 10 10 10 
    printf("%d %d %d \n", arr[0][1], *(arr[0]+1), *(*arr+1)); // 20 20 40 
    printf("%d %d %d \n", arr[1][0], *arr[1], **(arr+1)); // 40 40 40 
    printf("%d %d %d \n", arr[1][1], *(arr[1]+1), *(*(arr+1)+1)); // 50 50 50
    
}