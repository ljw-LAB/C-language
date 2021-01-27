#include <stdio.h>

// void main()
// {
// 	char c = 'Z';
// 	char *cp = &c;
	
//     int n = 100;
// 	int *np = &n;
	
//     printf("%c %d \n", c , n);
//     printf("%c %d \n", *cp , *np);
    
// }

// void main()
// {
//     char c = 'Z';
// 	char *cp = &c;
	
//     int n = 100;
// 	int *np = &n;

//     printf("%d %d %d\n", sizeof(c), sizeof(*cp), sizeof(cp));
//     printf("%d %d %d\n", sizeof(n), sizeof(*np), sizeof(np));
    
// }

// void main()
// {
//     int n = 10;
//     int *np = &n;
//     int **npp = &np;

//     printf("%d %d %d \n", n, *np, **npp);
//     printf("%d %d %d\n", sizeof(n), sizeof(*np), sizeof(**npp));
//     printf("%d %d %d\n", sizeof(n), sizeof(np), sizeof(npp));
    
// }

void main()
{
    int n = 0x10;
    int *np = &n;
    int **npp = &np;
    printf("%x %x %x \n", n, np, *npp);
}