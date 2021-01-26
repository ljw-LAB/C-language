#include <stdio.h>

//void main()
//{
    //char c = 'A';

    //printf("%x \n", &c);
    //printf("%c %c\n", c, *&c);

    //int n = 100;

    //printf("%x \n", &n);
    //printf("%d %d\n", n, *&n);
    
//}

// void main()
// {
//     int n = 0x44434241;

//     printf("%d %c \n", *(char*)&n, *(char*)&n);
//     printf("%d %c \n", *((char*)&n+1), *((char*)&n+1));
//     printf("%d %c \n", *((char*)&n+2), *((char*)&n+2));
//     printf("%d %c \n", *((char*)&n+3), *((char*)&n+3));
 
// }

// void main()
// {
//     char c = 10;

//     printf("%d \n", c);
//     printf("%d \n", *&c);
//     printf("%d \n", *(int*)&c);

// }

// void main()
// {
//     char c;
//     c = 321;

//     int n = 321;

//     printf("%x %c \n", c, c);
//     printf("%x %c \n", n, n);
// }

// void main()
// {
//     int n;

//     *((char*)&n) = 4;
//     *((char*)&n+1) = 3;
//     *((char*)&n+2) = 2;
//     *((char*)&n+3) = 1;

//     printf("%0.8x %d \n", n, n);

//}

void main()
{
    int n = 0x44434241;
    printf("%d %c \n", ((char*)&n)[0], ((char*)&n)[0]);
    printf("%d %c \n", ((char*)&n)[1], ((char*)&n)[1]);
    printf("%d %c \n", ((char*)&n)[2], ((char*)&n)[2]);
    printf("%d %c \n", ((char*)&n)[3], ((char*)&n)[3]);
    
}