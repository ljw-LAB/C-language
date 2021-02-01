#include <stdio.h>

// void main()
// {
//     char carr[4] = {'A', 'B', 'C', 'D'};
//     printf("%c %c %c %c \n", carr[0], carr[1], carr[2], carr[3]);
// }

// void main()
// {
//     char carr[4] = {'A', 'B', 'C', 'D'};
//     char (*ap)[2] =  (char(*)[2]) carr;

//     printf("%c %c %c %c \n", carr[0], carr[1], carr[2], carr[3]);
//     printf("%c %c %c %c \n", ap[0][0], ap[0][1], ap[1][0], ap[1][1]);
    
// }

// void main()
// {
//     char carr[4] = {'A', 'B', 'C', 'D'};
//     char (*ap)[2] =  (char(*)[2]) carr;

//     printf("%d %d \n", sizeof(carr), sizeof(ap));
//     printf("%x %x \n", carr, ap);
//     printf("%x %x \n", ap, ap[0]);
//     printf("%x %x \n", ap+1, ap[0]+1);
    
// }

// void main()
// {
//     int iarr[4] = {1, 2, 3, 4};
//     int (*ap)[2] = (int(*)[2]) iarr;

//     printf("%d %d %d %d \n", iarr[0], iarr[1], iarr[2], iarr[3]);
//     printf("%d %d %d %d \n", ap[0][0], ap[0][1], ap[1][0], ap[1][1]);

// }

// void main()
// {
//     int iarr[4] = {1, 2, 3, 4};
//     int (*ap)[2] = (int(*)[2]) iarr;

//     printf("%d %d \n", sizeof(iarr), sizeof(ap));
//     printf("%x %x \n", iarr, ap);

//     printf("%x %x \n", ap, ap[0]);
//     printf("%x %x \n", ap+1, ap[0]+1);

// }

// void main()
// {
//     char carr2[2][2] = {'A', 'B', 'C', 'D'};
//     char (*ap)[2] = (char(*)[2]) carr2;

//     printf("%c %c %c %c \n", carr2[0][0], carr2[0][1], carr2[1][0], carr2[1][1]);
//     printf("%c %c %c %c \n", ap[0][0], ap[0][1], ap[1][0], ap[1][1]);
// }

// void main()
// {
//     int iarr2[2][2] = { 1, 2, 3, 4};
//     int (*ap)[2] = iarr2;

//     printf("%d %d %d %d \n", iarr2[0][0], iarr2[0][1], iarr2[1][0] , iarr2[1][1]);
//     printf("%d %d %d %d \n", ap[0][0], ap[0][1], ap[1][0] , ap[1][1]);

// }

// void main()
// {
//     char carr[12] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'};
//     char (*ap1)[4] = (char (*)[4])carr;
//     char (*ap2)[3] = (char (*)[3])carr;
//     char (*ap3)[2][3] = (char (*)[2][3])carr;

//     printf("%c %c %c %c %c %c %c %c %c %c %c %c \n", ap1[0][0], ap1[0][1], ap1[0][2], ap1[0][3], ap1[1][0], ap1[1][1], ap1[1][2], ap1[1][3], ap1[2][0], ap1[2][1], ap1[2][2], ap1[2][3]);
//     printf("%c %c %c %c %c %c %c %c %c %c %c %c \n", ap2[0][0], ap2[0][1], ap2[0][2], ap2[1][0], ap2[1][1], ap2[1][2], ap2[2][0], ap2[2][1], ap2[2][2], ap2[3][0], ap2[3][1], ap2[3][2]);
//     printf("%c %c %c %c %c %c %c %c %c %c %c %c \n", ap3[0][0][0], ap3[0][0][1], ap3[0][0][2], ap3[0][1][0], ap3[0][1][1], ap3[0][1][2], ap3[1][0][0], ap3[1][0][1], ap3[1][0][2], ap3[1][1][0], ap3[1][1][1], ap3[1][1][2]);

// }

void main()
{
    char carr[12] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'};
    
    char (*ap1)[4] = (char (*)[4])carr;
    char (*ap2)[3] = (char (*)[3])carr;
    char (*ap3)[2][3] = (char (*)[2][3])carr;

    printf("%d %d %d %d \n", sizeof(carr), sizeof(ap1), sizeof(ap2), sizeof(ap3));
    
}