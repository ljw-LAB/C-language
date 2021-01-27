#include <stdio.h>

// void main()
// {
//     char c = 'A';
//     char *cp;
//     char **cpp;

//     cp = &c;
//     cpp = &cp;

//     printf("%c %c %c \n", c, *cp, **cpp);
//     printf("%x %x %x \n", &c, cp, *cpp);
// }

// void main()
// {
//     int n = 20;
//     int *np;
//     int **npp;

//     np = &n;
//     npp = &np;
    
//     printf("%d %d %d \n", n, *np, **npp);
//     printf("%x %x %x \n", &n, np, *npp);
    
// }

void main()
{
    int n = 20;
    int *np;
    int **npp;
    int ***nppp;
    
    np = &n;
    npp = &np;
    nppp = &npp;

    printf("%d %d %d %d \n", n, *np, **npp, ***nppp);
    printf("%x %x %x %x \n", &n, np, *npp, **nppp);
    printf("%x %x %x \n", &np, npp, *nppp);
    printf("%d %d %d %d \n", sizeof(int), sizeof(int*), sizeof(int***), sizeof(int****));
    printf("%d %d %d %d \n", sizeof(n), sizeof(np), sizeof(npp), sizeof(nppp));
}