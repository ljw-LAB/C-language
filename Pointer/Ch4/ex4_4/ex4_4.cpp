#include <stdio.h>

// void main()
// {
//     char c = 'A';

//     char (*ap1)[2] = (char (*)[2])&c;
//     char (*ap2)[4] = (char (*)[4])&c;
//     char (*ap3)[3][3] = (char (*)[3][3])&c;

//     printf("%c %c %c \n", **ap1, **ap2, ***ap3);
//     printf("%c %c %c \n", ap1[0][0], ap2[0][0], ap3[0][0][0]);
    
//     printf("%x %x %x \n", ap1, ap1+1, ap1[0], ap1[1]);
//     printf("%x %x %x \n", ap2, ap2+1, ap2[0], ap2[1]);
//     printf("%x %x %x \n", ap3, ap3+1, ap3[0], ap3[1]);
    
//     printf("%x %x %x \n", ap3[0], ap3[0]+1, ap3[0][0], ap3[0][1]);   
// }

// void main()
// {
//     int n = 100;
//     int (*ap1)[2] = (int (*)[2])&n;
//     int (*ap2)[4] = (int (*)[4])&n;
//     int (*ap3)[3][3] = (int (*)[3][3])&n;

//     printf("%d %d %d \n", **ap1, **ap2, ***ap3);
//     printf("%d %d %d \n", ap1[0][0], ap2[0][0], ap3[0][0][0]);

//     printf("%x %x %x \n", ap1, ap1+1, ap1[0], ap1[1]);
//     printf("%x %x %x \n", ap2, ap2+1, ap2[0], ap2[1]);
//     printf("%x %x %x \n", ap3, ap3+1, ap3[0], ap3[1]);
    
//     printf("%x %x %x \n", ap3[0], ap3[0]+1, ap3[0][0], ap3[0][1]);
// }

// void main()
// {
//     char a = 'A', b = 'B', c = 'C', d = 'D', e = 'E';
//     char *ap = &a, *bp = &b, *cp = &c, *dp = &d, *ep = &e;

//     printf("%x %x %x %x %x \n", &a, &b, &c, &d, &e);
//     printf("%x %x %x %x %x \n", ap, bp, cp, dp, ep);
    
//     printf("%c %c %c %c %c \n", a, b, c, d, e);
//     printf("%c %c %c %c %c \n", *ap, *bp, *cp, *dp, *ep);

// }

// void main()
// {
//     char a = 'A', b = 'B', c = 'C', d = 'D', e = 'E';
//     char *carr[5] = {&a, &b, &c, &d, &e};

//     printf("%x %x %x %x %x \n", &a, &b, &c, &d, &e);
//     printf("%x %x %x %x %x \n", carr[0], carr[1], carr[2], carr[3], carr[4]);
    
//     printf("%c %c %c %c %c \n", a, b, c, d, e);
//     printf("%c %c %c %c %c \n", *carr[0], *carr[1], *carr[2], *carr[3], *carr[4]);
// }

// void main()
// {
//     char a = 'A', b = 'B', c = 'C', d = 'D', e = 'E';
//     char *carr[5] = {&a, &b, &c, &d, &e};
//     printf("%d %d %d \n", sizeof(carr), sizeof(carr[0]), sizeof(*carr[0]));
// }

// void main()
// {
//     int a = 10, b = 20, c = 30, d = 40, e = 50;
//     int *iarr[5] = {&a, &b, &c, &d, &e};

//     printf("%x %x %x %x %x \n", &a, &b, &c, &d, &e);
//     printf("%x %x %x %x %x \n", iarr[0], iarr[1], iarr[2], iarr[3], iarr[4]);

//     printf("%d %d %d %d %d \n", a, b, c, d, e);
//     printf("%d %d %d %d %d \n", *iarr[0], *iarr[1], *iarr[2], *iarr[3], *iarr[4]);

// }

void main()
{
    int a = 10, b = 20, c = 30, d = 40, e = 50;
    int *iarr[5] = {&a, &b, &c, &d, &e};

    printf("%d %d %d \n", sizeof(iarr), sizeof(iarr[0]), sizeof(*iarr[0]));
}