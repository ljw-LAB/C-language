#include <stdio.h>

// struct _sData
// {
//     int n1;
//     int n2;
// };

// union _uData
// {
//     int n1;
//     int n2;
// };

// void main()
// {
//     struct _sData s1 = {10, 20};
//     union _uData u1 = {10};

//     printf("%d %d \n", sizeof(s1), sizeof(u1));
//     printf("%d %d \n", s1.n1, s1.n2); 
//     printf("%d %d \n", u1.n1, u1.n2);
// }

union _data
{
    char carr[4];
    int n;
};

void main()
{
    union _data u;
    u.n = 0x44434241;

    printf("%x %c \n", u.n, u.n);
    printf("%c %c %c %c \n", u.carr[0], u.carr[1], u.carr[2], u.carr[3]);
    
}