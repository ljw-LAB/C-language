#include <stdio.h>

// void main()
// {
//     char c = 'A';
//     char *cp = &c;
//     printf("%c %c %c \n", c , *cp, cp[0]);      
// }

// void main()
// {
//     char carr[3] ={'A', 'B', 'C'};
//     char *cp = carr;

//     printf("%c %c %c \n", carr[0], carr[1], carr[2]);
//     printf("%c %c %c \n", *carr, *(carr+1), *(carr+2));

//     printf("%c %c %c \n", cp[0], cp[1], cp[2]);
//     printf("%c %c %c \n", *cp, *(cp+1), *(cp+2));
    
// }

// void main()
// {
//     char carr[3] = {'A', 'B', 'C'};
//     char *cp = carr;
    
//     printf("%d %d \n", sizeof(cp), sizeof(carr));

//     cp = NULL;
//     //carr = NULL;
// }

// void main()
// {
//     int iarr[4] = {10, 20, 30, 40};
//     int *ip = iarr;
    
//     printf("%d %d %d %d \n", iarr[0], iarr[1], iarr[2], iarr[3]);
//     printf("%d %d %d %d \n", ip[0], ip[1], ip[2], ip[3]);
    
// }

// void main()
// {
//     int iarr[4] = {10, 20, 30, 40};
//     int *ip = iarr;

//     printf("%d %d \n", sizeof(iarr), sizeof(ip));

// }

// void main()
// {
//     char carr[6] = {'A','B','C','D','E','F'};
//     char *cp = carr;

//     printf("%c %c %c %c %c %c \n", cp[0], cp[1], cp[2], cp[3], cp[4], cp[5]);

//     cp = carr+5;
//     printf("%c %c %c %c %c %c \n", cp[0], cp[-1], cp[-2], cp[-3], cp[-4], cp[-5]);

//     cp = carr+3;
//     printf("%c %c %c %c %c %c \n", cp[-3], cp[-2], cp[-1], cp[0], cp[1], cp[2]);

// }

// void main()
// {
//     char carr[6] = {'A','B','C','D','E','F'};

//     printf("%c %c %c %c %c %c \n", carr[0], carr[1], carr[2], carr[3], carr[4], carr[5]);
//     printf("%c %c %c %c %c %c \n", (carr+5)[0], (carr+5)[-1], (carr+5)[-2], (carr+5)[-3], (carr+5)[-4], (carr+5)[-5]);
//     printf("%c %c %c %c %c %c \n", (carr+3)[-3], (carr+3)[-2], (carr+3)[-1], (carr+3)[0], (carr+3)[1], (carr+3)[2]);
// }

void main()
{
    char carr[6] = {'A','B','C','D','E','F'};
    char *cp = carr;

    printf("%c %c %c %c %c %c \n", cp[0], cp[1], cp[2], cp[3], cp[4], cp[5]);

    cp = &carr[5];
    printf("%c %c %c %c %c %c \n", cp[0], cp[-1], cp[-2], cp[-3], cp[-4], cp[-5]);

     cp = &carr[3];
     printf("%c %c %c %c %c %c \n", cp[-3], cp[-2], cp[-1], cp[0], cp[1], cp[2]);

}