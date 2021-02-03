#include <stdio.h>

//  void main()
//  {
//      int arr[5] = {10, 20, 30, 40 ,50};
//      //int *ap = arr;
// 	 int *ap = &arr[0];

//      printf("%d %d %d %d %d \n", arr[0], arr[1], arr[2], arr[3], arr[4]);
//      printf("%d %d %d %d %d \n", ap[0], ap[1], ap[2], ap[3], ap[4]);
    
//  }

// void main()
// {
//     int arr[2][2] = {{10,20},{100,200}};
//     int (*ap)[2] = arr; 

//     printf("%d %d %d %d \n", arr[0][0], arr[0][1], arr[1][0], arr[1][1]);
//     printf("%d %d %d %d \n", ap[0][0], ap[0][1], ap[1][0], ap[1][1]);
    
// }


// void main()
// {
//     int arr[2][3] = {{10,20,30},{100,200,300}};
//     int (*ap)[3] = arr; 

//     printf("%d %d %d %d %d %d \n", arr[0][0], arr[0][1], arr[0][2], arr[1][0], arr[1][1], arr[1][2]);
//     printf("%d %d %d %d %d %d \n", ap[0][0], ap[0][1], ap[0][2], ap[1][0], ap[1][1] , ap[1][2]);
    
// }

//void main()
//{
//    int arr[2][3] = {{10,20,30},{100,200,300}};
//    int *ap = (int *)arr; 
//
//    printf("%d %d %d %d %d %d \n", arr[0][0], arr[0][1], arr[0][2], arr[1][0], arr[1][1], arr[1][2]);
//    printf("%d %d %d %d %d %d \n", ap[0], ap[1], ap[2], ap[3], ap[4], ap[5]);
//}

 void main()
 {
     int arr[6] = {10, 20, 100, 200, 1000, 2000};
	 int(*ap)[2] = (int(*) [2])arr;
     printf("%d %d %d %d %d %d \n", arr[0], arr[1], arr[2], arr[3], arr[4],  arr[5]);
     printf("%d %d %d %d %d %d \n", ap[0][0], ap[0][1], ap[1][0], ap[1][1], ap[2][0], ap[2][1]);

 }