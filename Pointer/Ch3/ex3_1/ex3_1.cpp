#include <stdio.h>

// void main()
// {
//     char carr[5] = {1,2,3,4,5};

//     printf("%x %x \n", carr, &carr[0]);
// }

// void main()
// {
//     int iarr[5] = {1,2,3,4,5};

//     printf("%x %x \n", iarr, &iarr[0]);
// }

// void main()
// {
//     char carr[5] = {1,2,3,4,5};
//     int iarr[5] = { 1,2,3,4,5 };

//     printf("%d %d \n", sizeof(carr), sizeof(iarr));
// }

// void main()
// {
//     char carr[5] = {'A','B','C','D','E'};
//     printf("%c %c %c %c %c \n", carr[0], carr[1], carr[2], carr[3], carr[4]);

// }

// void main()
// {
//     char carr[5] = {'A','B','C','D','E'};
//     printf("%c %c %c %c %c \n", *carr, *(carr+1), *(carr+2), *(carr+3), *(carr+4));
    
// }

// void main()
// {
//     char carr[5] = {'A','B','C','D','E'};
//     printf("%c %c %c %c %c \n", *&carr[0], *&carr[1], *&carr[2], *&carr[3], *&carr[4]);

// }

// void main()
// {
//     char carr[5] = {'A','B','C','D','E'};
//     printf("%x %x %x %x %x \n", carr, carr+1, carr+2, carr+3, carr+4);

// }

// void main()
// {
//     int iarr[5] = {10, 20, 30, 40 ,50};

//     printf("%d %d %d %d %d \n", iarr[0], iarr[1], iarr[2], iarr[3], iarr[4]);
//     printf("%d %d %d %d %d \n", *(iarr+0), *(iarr+1), *(iarr+2), *(iarr+3), *(iarr+4));
//     printf("%d %d %d %d %d \n", *&iarr[0], *&iarr[1], *&iarr[2], *&iarr[3], *&iarr[4]);
    
// }

void main()
{
    int iarr[5] = {10, 29 ,30 , 40, 50};
    printf("%x %x %x %x %x \n", iarr, iarr+1, iarr+2, iarr+3, iarr+4);
}