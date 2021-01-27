#include <stdio.h>

// void main()
// {
//     char c = 'A';
//     char *cp ;
//     char **cpp;
//     cp = &c;
//     cpp = &cp;
//     printf("%x %x %x \n", &c, &cp, &cpp);
//     printf("%x %x %x \n", &c+1, &cp+1, &cpp+1);
    
// }

// void main()
// {
//     char c = 'A';
//     char *cp;
//     char **cpp;
//     cp = &c;
//     cpp = &cp;
//     printf("%x %x %x \n", &c, &cp, &cpp);
//     printf("%x %x %x \n", &c+1, &cp+1, &cpp+1);     
// }

// void main()
// {
//     char c = 'A';
//     char *cp;
//     char **cpp;
//     cp = &c;
//     cpp = &cp;
//     printf("%x %x %x \n", c, cp, cpp);
//     printf("%x %x %x \n", c+1, cp+1, cpp+1);     
// }

// void main()
// {
//     int n = 20;
//     int *np;
//     int **npp;
//     np = &n;
//     npp = &np;
//     printf("%x %x %x \n", &n, &np, &npp);
//     printf("%x %x %x \n", &n+1, &np+1, &npp+1);     
// }

void main()
{
    int n = 20;
    int *np;
    int **npp;
    np = &n;
    npp = &np;
    printf("%x %x %x \n", n, np, npp);
    printf("%x %x %x \n", n+1, np+1, npp+1);     
}