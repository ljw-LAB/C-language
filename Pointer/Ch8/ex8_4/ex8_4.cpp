#include <stdio.h>

//int n=0;

// void Print()
// {
//     printf("사용자 입력");
// }

// int* func()
// {
//     //int n;
//     static int n;
//     scanf_s("%d", &n);

//     return &n;
// }

// void main()
// {
//     int *ip;

//     ip = func();
//     Print();
//     //printf("한글");

//     printf("%d \n", *ip);
// }

// const char* func(const char *s)
// {
//     puts(s);
//     return s;
// }


// void main()
// {
//     const char *str;

//     str = func("ABC");
//     puts(str);
// }

char* func()
{
    static char carr[100];

    gets_s(carr);
    return carr;
}

void main()
{
    char *str;
    str = func();
    puts(str);
}