#include <stdio.h>

// void main()
// {
//     char c = 'A';
//     int n = 10;
//     void *vp;

//     vp = &c;
 
//     printf("%x %x\n", &c, vp);
//     vp = &n;
    
//     printf("%x %x \n", &n, vp);
// }

// void main()
// {
//     char c = 'A';
//     int n = 10;
//     void *vp;

//     vp = &c;

//     printf("%c %c \n", c, *(char *)vp);
    
//     vp = &n;
//     printf("%d %d \n", n, *(int *)vp);

// }

void main()
{
    int n = 10;
    int *np;
    void *vp;

    vp = &n;
    printf("%d %d \n", n, *(int *)vp);
    
    np = (int *)vp;
    printf("%d %d \n", n, *np);

}