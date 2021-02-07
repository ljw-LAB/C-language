#include <stdio.h>

// void main()
// {
//     printf("%x \n", main);
// }

// void main()
// {
//     //void (*fp)();
//     int (*fp)();

//     fp = main;

//     printf("%x %x \n", main , fp);
// }

// int func(int n1, int n2)
// {
//     printf("%d %d \n", n1, n2);
//     return n1 + n2;
// }

// void main()
// {
//     int (*fp)(int, int);

//     fp = func;
//     printf("%x %x \n", fp, func);
// }

// int func(int n1, int n2)
// {
//     printf("%d %d \n", n1, n2);
//     return n1 + n2;
// }

// void main()
// {
//     int (*fp)(int, int);
//     fp = func;
//     func(5, 5);
//     fp(5,5);
// }

void fplus(int n1, int n2)
{
    printf("%d + %d = %d \n", n1, n2, n1+n2);
}

void fminus(int n1, int n2)
{
    printf("%d - %d = %d \n", n1, n2, n1-n2);
}

void main()
{
    void (*fp)(int, int);

    fp = fplus;
    fp(10, 10);
    fp = fminus;
    fp(10, 10);
}