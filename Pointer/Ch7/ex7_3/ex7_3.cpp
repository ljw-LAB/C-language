#include <stdio.h>

// struct _string
// {
//     const char *str1;
// 	//char *str1;
// 	char str2[8];
// };

// void main()
// {
//     struct _string s1 = {"ABC", "ABC"};
//     printf("%s %s \n",s1.str1, s1.str2);
//     printf("%d %d %d \n",sizeof(s1), sizeof(s1.str1), sizeof(s1.str2));
    
// }

// struct _pData
// {
//     int *ip;
//     int **ipp;

// };

// void main()
// {
//     int n =10;
//     struct _pData s1;

//     s1.ip = &n;
//     s1.ipp = &s1.ip;

//     printf("%d %d\n", *s1.ip, **s1.ipp);
//     printf("%x %x\n", s1.ip, *s1.ipp);
//     printf("%x %x\n", &s1.ip, s1.ipp);
//     printf("%x %x %x \n", &s1, &s1.ip, &s1.ipp);

    
// }

struct _aData
{
    char *pcarr;
    int *piarr;
};

void main()
{
    char carr[4] = {'A','B','C','D'};
    int iarr[4] = {10, 20, 30, 40};
    struct _aData s1 = {carr, iarr};

    printf("%c %c %c %c \n", carr[0], carr[1], carr[2], carr[3]);
    printf("%c %c %c %c \n", s1.pcarr[0], s1.pcarr[1], s1.pcarr[2], s1.pcarr[3]);

    printf("%d %d %d %d \n", iarr[0], iarr[1], iarr[2], iarr[3]);
    printf("%d %d %d %d \n", s1.piarr[0], s1.piarr[1], s1.piarr[2], s1.piarr[3]);
}