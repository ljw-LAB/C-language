#include <stdio.h>

// int Add(int n1, int n2)
// {
//     printf("%d %d \n", n1, n2);
//     return n1+n2;
// }
// void main()
// {
//     printf("10 + 20 = %d \n", Add(10, 20));
// }

// int __cdecl Add_cdecl(int n1, int n2)
// {
//     return n1+n2;
// }

// int __stdcall Add_stdcall(int n1, int n2)
// {
//     return n1+n2;
// }

// void main()
// {
//     printf("10 + 20 = %d \n", Add_cdecl(10, 20));
//     printf("10 + 20 = %d \n", Add_stdcall(10, 20));

// }

int __cdecl Add_cdecl(int n1, int n2)
{
    return n1+n2;
}

int __stdcall Add_stdcall(int n1, int n2)
{
    return n1+n2;
}

void main()
{
    int (__cdecl *pFunc_cdecl)(int, int);
    int (__stdcall *pFunc_stdcall)(int, int);

    pFunc_cdecl = Add_cdecl;
    pFunc_stdcall = Add_stdcall;

    printf("10+20 = %d \n", pFunc_cdecl(10,20));
    printf("10+20 = %d \n", pFunc_stdcall(10,20));

}