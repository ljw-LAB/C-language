#include <stdio.h>

// void ustrcpy(char *str1, char *str2)
// {
//     int i;
//     for(i = 0; str1[i] = str2[i]; i++)
//         ;
// }

// void main()
// {
//     char *str1 = "ABCD";
//     char temp[100];

//     ustrcpy(temp, str1);

//     puts(str1);
//     puts(temp);
// }

// void ustrcat(char *str1, char *str2)
// {
//     int i, j;
//     for(i = 0; str1[i]; i++)
//     {
//         //;
//         printf("i :%d, str1[%d] : %c \n",i, i, str1[i]);
//     }
    
    
//     for(j = 0; str1[i] = str2[j]; i++, j++)
//     {
//         //;
//         printf("i :%d, str1[%d] : %c, j :%d, str2[%d] : %c \n", i, i, str1[i], j, j, str2[j]);
//     }
    
// }

// void main()
// {
//     char *str1 ="ABCD";
//     char temp[100] = "123";
    
//     ustrcat(temp, str1);
    
//     puts(str1);
//     puts(temp);
// }

// int ustrlen(char *str)
// {
//     int i;
//     for(i=0;str[i];i++)
//     {
//         //;
//         printf("i : %d, str[%d]: %c \n", i, i, str[i]);
//     }
//     return i;
// }

// void main()
// {
//     char *str = "ABCDE";
//     printf("ustrlen = %d \n", ustrlen(str));
// }

// int ustrcmp(char *str1, char *str2)
// {
//     int i;

//     for(i=0;str1[i]||str2[i];i++)
//     {
//         if(str1[i] > str2[i])
//             return 1;
//         else if(str1[i] < str2[i])
//             return -1;
//     }
//     return 0;
// }

// void main()
// {
//     char *str1 = "ABCD";
//     char *str2 = "ABCD";
//     //char* str2 = "ABDD";
//     //char* str2 = "ABBD";

//     printf("%d \n", ustrcmp(str1, str2));

//     if(ustrcmp(str1, str2) == 0 )
//         puts("TRUE");
//     else
//         puts("FALSE");
// }

#include <time.h>
#include <stdlib.h>
#include <conio.h>

char AlphaRand()
{
    return rand()%26+'A';
}

void StrRand(int n)
{
    char temp[20] = {0};
    int i;
    for(i = 0; i < n; i++)
    {
        temp[i] = AlphaRand();
    }
    puts(temp);
}

void main()
{
    int c;
    
    srand((unsigned)time(NULL));

    while(1)
    {
        c = _getch();
        if( c >= '1' && c<= '9')
            StrRand(c - '0');
        else
            break;
    }
}

