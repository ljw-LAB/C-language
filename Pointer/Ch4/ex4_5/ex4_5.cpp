#include <stdio.h>

// void main()
// {
//     int iarr[4] = {0x1011, 0x2022, 0x3033, 0x4044};
//     char *ap = (char *) iarr;

//     printf("%x %x %x %x \n", iarr[0] , iarr[1] , iarr[2] , iarr[3]);
//     printf("%x %x %x %x \n", ap[0] , ap[1] , ap[2] , ap[3]);
//     printf("%x %x %x %x \n", ap[4] , ap[5] , ap[6] , ap[7]);
//     printf("%x %x %x %x \n", ap[8] , ap[9] , ap[10] , ap[11]);
//     printf("%x %x %x %x \n", ap[12] , ap[13] , ap[14] , ap[15]);
    
// }

// void main()
// {
//     int iarr[4] = {0x1011, 0x2022, 0x3033, 0x4044};
//     char *ap = (char *) iarr;

//     printf("%x %x %x %x\n", iarr, iarr+1, iarr+2, iarr+3);
//     printf("%x %x %x %x\n", ap, ap+4, ap+8, ap+12);

// }

// void main()
// {
//     char carr[16] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'};
//     int *ap = (int *) carr;

//     printf("%c %c %c %c \n", carr[0], carr[1], carr[2], carr[3]);
//     printf("%c %c %c %c \n", carr[4], carr[5], carr[6], carr[7]);
//     printf("%c %c %c %c \n", carr[8], carr[9], carr[10], carr[11]);
//     printf("%c %c %c %c \n", carr[12], carr[13], carr[14], carr[15]);
    
//     printf("%x %x %x %x  \n", ap[0], ap[1], ap[2], ap[3]);
// }

// void main()
// {
//     char carr[16] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'};
//     int *ap = (int *) carr;

//     printf("%c %c %c %c \n", carr[0], carr[1], carr[2], carr[3]);
//     printf("%c %c %c %c \n", carr[4], carr[5], carr[6], carr[7]);
//     printf("%c %c %c %c \n", carr[8], carr[9], carr[10], carr[11]);
//     printf("%c %c %c %c \n", carr[12], carr[13], carr[14], carr[15]);
    
//     printf("%x %x %x %x  \n", ap[0], ap[1], ap[2], ap[3]);
// }

void main()
{
    char carr[16] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'};
    int *ap = (int *) carr;

    printf("%x %x %x %x \n", &carr[0], &carr[4], &carr[8], &carr[12]);
    printf("%x %x %x %x  \n", ap, ap+1, ap+2, ap+3);

}