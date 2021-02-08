#include <stdio.h>
#include <stdlib.h>

// void main()
// {
//     char *cp;
//     cp = (char*)malloc(1);
//     *cp = 'A';
//     printf("%c \n", *cp);
//     free(cp);
// }

// void main()
// {
//     int *ip;
//     ip = (int*)malloc(4);
//     *ip =500;
//     printf("%d \n",*ip);
//     free(ip);
// }

// void main()
// {
//     char *cp;
//     cp = (char*)malloc(sizeof(char));
//     *cp ='A';
//     printf("%c \n", *cp);
//     free(cp);
// }

// void main()
// {
//     int *ip;
//     ip = (int*)malloc(sizeof(int));
//     *ip =500;
//     printf("%d \n", *ip);
//     free(ip);
// }

// void main()
// {
//     char *cp;
//     cp = (char *)malloc(sizeof(char)*5);
//     cp[0] = 10, cp[1] = 20, cp[2] = 30, cp[3] = 40, cp[4] = 50;
//     printf("%d %d %d %d %d \n", cp[0], cp[1], cp[2], cp[3], cp[4]);
//     free(cp); 
// }

// void main()
// {
//     int *ip;
//     ip = (int *)malloc(sizeof(int)*5);
//     ip[0] = 10; ip[1] = 20; ip[2] = 30; ip[3] = 40; ip[4] = 50;

//     printf("%d %d %d %d %d \n", ip[0], ip[1], ip[2], ip[3], ip[4]);
//     free(ip);
// }

// void main()
// {
//     int (*arr)[3];

//     arr = (int (*)[3])malloc(sizeof(int)*3*3);
//     arr[0][0] = 10; arr[0][1] = 20; arr[0][2] = 30;
//     arr[1][0] = 40; arr[1][1] = 50; arr[1][2] = 60;
//     arr[2][0] = 70; arr[2][1] = 80; arr[2][2] = 90;

//     printf("%d %d %d \n", arr[0][0], arr[0][1], arr[0][2]);
//     printf("%d %d %d \n", arr[1][0], arr[1][1], arr[1][2]);
//     printf("%d %d %d \n", arr[2][0], arr[2][1], arr[2][2]);

//}

// void main()
// {
//     int* ip;
//     ip = (int*)malloc(sizeof(int)*5);
//     if(NULL == ip)
//     {
//         printf("메모리 할당 실패 \n");
//         return;
//     }

//     printf("메모리 할당 성공 \n");
//     free(ip);
// }

void main()
{
    int *ip;
    ip = (int *)malloc(sizeof(int)*5);

    ip[0] = 10; ip[1] = 20; ip[2] = 30; ip[3] = 40; ip[4] = 50;
    printf("%d %d %d %d %d \n", ip[0], ip[1], ip[2], ip[3], ip[4]);
    free(ip);
    
    ip = (int *)calloc(5, sizeof(int));
    printf("%d %d %d %d %d \n", ip[0], ip[1], ip[2], ip[3], ip[4]);
    ip = (int *)realloc(ip, sizeof(int)*4);
    printf("%d %d %d %d \n", ip[0], ip[1], ip[2], ip[3]);
    free(ip);
}