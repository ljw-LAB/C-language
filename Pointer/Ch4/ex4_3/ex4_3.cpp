#include <stdio.h>

// void main()
// {
//     char carr2[2][2] = {'A', 'B', 'C', 'D'};
//     char *ap = (char *)carr2;
//     printf("%c %c %c %c \n", carr2[0][0], carr2[0][1], carr2[1][0], carr2[1][1]);
//     printf("%c %c %c %c \n", ap[0], ap[1], ap[2], ap[3]);
    
// }

// void main()
// {
//     int iarr2[2][2] = {10, 20, 30, 40};
//     int *ap = (int *)iarr2;
//     //int* ap = iarr2;


//     printf("%d %d %d %d \n", iarr2[0][0], iarr2[0][1], iarr2[1][0], iarr2[1][1]);
//     printf("%d %d %d %d \n", ap[0], ap[1],ap[2],ap[3]);
// }

void main()
{
    int iarr2[2][2] = {10, 20, 30, 40};
    int *ap = (int *)iarr2;

    printf("%d %d \n", sizeof(iarr2), sizeof(ap));
}