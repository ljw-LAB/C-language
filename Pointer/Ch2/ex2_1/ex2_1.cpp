#include <stdio.h>

// void main()
// {
//     char c = 'A';
//     char *cp = &c;
//     printf("%c %c \n", c, *cp);
//     printf("%d %d \n", sizeof(char), sizeof(char*));
//     printf("%d %d \n", sizeof(c), sizeof(cp));
     
// }

// void main()
// {
//     int n = 20;
//     int *np = &n;
//     printf("%d %d \n", n, *np);
//     printf("%d %d \n", sizeof(int), sizeof(int*));
//     printf("%d %d \n", sizeof(n), sizeof(np)); 
// }

// void main()
// {
//     char c = 'A';
//     char *cp = &c;
//     *cp = 'B';
//     printf("%c %c", c, *cp);
// }

void main()
{
    int n = 20;
    int *np = &n;
    *np = 30;
    printf("%d %d \n", n, *np);
}