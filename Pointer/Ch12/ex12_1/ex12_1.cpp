#include <stdio.h>
#include <string.h>

// void main()
// {
//     char c1;
//     char c2 = 'A';

//     memcpy(&c1, &c2, sizeof(char));
//     printf("%c %c \n", c1, c2);
// }

// void main()
// {
//     int n1;
//     int n2 = 20;
    
//     memcpy(&n1, &n2, sizeof(int));
//     printf("%d %d \n", n1, n2);

// }

// void main()
// {
//     char arr[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
//     char temp[10];

//     int i;

//     memcpy(temp, arr, sizeof(char)*10);
//     for(i = 0; i < 10; i++)
//     {
//         printf("%c %c \n", arr[i], temp[i]);
//     }

//     puts("=============");
//     memcpy(temp, arr+5, sizeof(char)*5);
//     memcpy(temp+5, arr, sizeof(char) * 5);
    
//     for (i = 0; i < 10; i++)
//     {
//         printf("%c %c \n", arr[i], temp[i]);
//     }
// }

// void main()
// {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int temp[10];
//     int i;

//     memcpy(temp, arr, sizeof(int)*10);
    
//     for(i = 0; i < 10; i++)
//     {
//         printf("%d %d \n", arr[i], temp[i]);
//     }
//     puts("=============");
//     memcpy(temp, arr+5, sizeof(int)*5);
//     memcpy(temp+5, arr, sizeof(int)*5);
    
//     for (i = 0; i < 10; i++)
//     {
//         printf("%d %d \n", arr[i], temp[i]);
//     }
// }

// void main()
// {
//     int n = 0x44434241;
//     char c;
//     int i;
//     for(i = 0 ;i < 4 ; i++)
//     {
//         memcpy(&c, (char*)&n+i, sizeof(char));
//         printf("%c %x \n", c, c);
//     }
// }

// void main()
// {
//     char c = 'A';
    
//     memset(&c, 0, sizeof(char));
//     printf("%c %d \n", c, c);
// }

// void main()
// {
//     int n =10;
//     memset(&n, 0, sizeof(int));
//     printf("%d %x \n", n, n);

// }

// void main()
// {
//     int n = 10;

//     memset(&n, 1, sizeof(int)); // 각바이트를 1로 초기화시키는것  저 변수 자체를 1로 초기화 하는 것이 아님
//     printf("%d %x \n", n, n);
//     memset(&n, 0xf, sizeof(int));
//     printf("%d %x \n", n, n);
//     memset(&n, 0xff, sizeof(int));
//     printf("%d %x \n", n, n);
// }

// #include <stdlib.h>

// void main()
// {
//     int arr[10];
//     int i;

//     for (i = 0; i < 10; i++)
//     {
//         arr[i] = rand()%100;
//         printf("%5d", arr[i]);
//     }
//     puts("");
    
//     memset(arr, 0, sizeof(int)*10);
    
//     for (i = 0; i < 10; i++)
//     {
//         arr[i] = rand()%100;
//         printf("%5d", arr[i]);
//     }
//     puts("");
// }

// void main()
// {
//     char c1 = 'A';
//     char c2 = 'A';
    
//     if(c1 == c2)
//     {
//         puts("TRUE");
//     }
//     else
//     {
//         puts("FALSE");
//     }
    
//     if(memcmp(&c1, &c2, 1) == 0)
//     {
//         puts("TRUE");
//     }
//     else
//     {
//         puts("FALSE");
//     }
// }

// void main()
// {
//     int n1 = 10, n2 =10;
    
//     if(memcmp(&n1, &n2, sizeof(int)) == 0)
//     {
//         puts("TRUE");
//     }
//     else
//     {
//         puts("FALSE");
//     }
// }

// void main()
// {
//     int n1 = 0x2010, n2 = 0x40302010;
//     int i;

//     for(i=0; i < 4 ; i++)
//     {
//         if(memcmp((char *)&n1+i, (char *)&n2+i, 1) == 0)
//         {
//             puts("TRUE");
//         }
//         else
//         {
//             puts("FALSE");
//         }    
//     }
// }

// void main()
// {
//     const char *str1 = "ABCDEFGHI";
//     const char *str2 = "AB12EFG3I";
//     int i;

//     for(i=0 ; str1[i] ; i++)
//     {
//         if(memcmp(str1+i, str2+i, 1) == 0)
//         {
//             puts("TRUE");
//         }
//         else
//         {
//             puts("FALSE");
//         }
//     }
// }

void main()
{
    const char *str1 = "ABCDEFGHI";
    const char *str2 = "AB12EFG3I";
    int i;

    for(i=0 ; i < 10 ; i+=2)
    {
        if(memcmp(str1 + i, str2 + i, 2) == 0)
        {
            puts("TRUE");
        }
        else
        {
            puts("FALSE");
        }
    }
}