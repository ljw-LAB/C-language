#include <stdio.h>
#include <stdlib.h>

//  void main()
//  {
//      int *np;
//      np = (int *)malloc(sizeof(int));
// 	 *np = 10;
//      printf("%d \n", *np);
//      free(np);
//  }

// void main()
// {
//     int *ap;
//     int i;

//     ap = (int *)malloc(sizeof(int)*10);

//     for(i=0; i < 10; i++)
//         ap[i] = i;
//     for(i=0; i < 10; i++)
//         printf("%5d", ap[i]);
//     puts("");

//     free(ap);
// }

// char* inputStr()
// {
//     char *str;
// 	str = (char *)malloc(sizeof(char*)*3);
// 	scanf_s("%s", str);
// 	return str;
// }

// void main()
// {
//     char *str;

//     str =inputStr();
//     printf("%s \n", str);
//     free(str);
// }

//void print(int n, ...)
//{
//    int *np = &n+1;
//    switch(n)
//    {
//        case 1:
//            printf("%d \n", np[0]);
//            break;
//        case 2:
//            printf("%d %d \n", np[0], np[1]);
//            break;
//        case 3:
//            printf("%d %d %d \n", np[0], np[1] , np[2]);
//            break;        
//        default :
//            printf("변수 값 초과하였습니다 \n");
//    }
//}
//
//void main()
//{
//    int n1 = 10, n2 =20, n3 = 30;
//    //int n4 =40;
//    print(1, n1);
//    print(2, n1, n2);
//    print(2, n2, n3);
//    print(3, n1, n2, n3);
//    print(3, n3, n2, n1);
//    //print(4, n1, n2, n3, n4);
//}

 void arrPrint(const int *const arr)
 {
     printf("%d %d %d %d %d \n", arr[0], arr[1], arr[2], arr[3], arr[4]);
     //arr[0] = 100;
     //arr = &arr[4];
 }

 void main()
 {
     int arr[5] = {10, 20, 30, 40, 50};
     arrPrint(arr);
 }