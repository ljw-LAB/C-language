#include <stdio.h>
#include<stdarg.h>
// void main()
// {
//     char c = 'A';
//     const char *str = "ABCD";
//     int n = 10;
//     double d = 250.12;

//     printf("%c \n", c);
//     printf("%c %d \n", c, n);
//     printf("%c %s %d \n", c, str, n);
//     printf("%c %s %d %f \n", c, str, n, d);   
// }

// void print(...)
// {

// }

// void main()
// {
//     int a = 10, b = 20, c = 30;
//     print(a);
//     print(a, b); 
//     print(a, b, c); 

// }

// void print(int n, ...)
// {
//     if(n == 1)
//     {
//         printf("%d \n", *(&n+1));
//     }
//     else if(n == 2)
//     {
//         printf("%d %d \n", *(&n+1), *(&n+2));
//     }
//     else if(n == 3)
//     {
//         printf("%d %d %d \n", *(&n+1), *(&n+2), *(&n+3));
//     }
//     else
//     {
//         puts("인자에 개수가 1~3까지 출력 가능합니다.");
//     }
// }

// void main()
// {
//     int a =10, b =20, c =30;

//     print(1, a);
//     print(2, a, b);
//     print(3, a,b, c);

// }

// void print(int n, ...)
// {
//     int *ap = &n+1;

//     if( n == 1)
//     {
//         printf("%d \n", ap[0]);
//     }
//     else if( n == 2)
//     {
//         printf("%d %d\n", ap[0], ap[1]);
//     }
//     else if( n == 3)
//     {
//         printf("%d %d %d \n", ap[0], ap[1], ap[2]);
//     }
//     else
//     {
//         puts("인자에 개수가 1~3까지 출력 가능 합니다.");
//     }
// }

// void main()
// {
//     int a =10, b =20, c =30;

//     print(1, a);
//     print(2, a, b);
//     print(3, a,b, c);

// }

// void print(int n, ...)
// {
//     int i;
//     int *ap = &n+1;

//     for(i=0;i<n;i++)
//     {
//         printf("%d ", ap[i]);
//     }
//     printf("\n");
// }

// void main()
// {
//     int a = 10, b = 20, c = 30;

//     print(1, a);
//     print(2, a, b);
//     print(3, a, b, c);

// }

// void print(int n, ...)
// {
//     int i;
//     va_list ap;
//     va_start(ap, n);

//     for(i = 0; i < n; i++)
//     {
// 		printf("%d ", va_arg(ap, int));
//     }
//     printf("\n");
//     va_end(ap);
// }

// void main()
// {
//     int a = 10, b = 20, c = 30;

//     print(1, a);
//     print(2, a, b);
//     print(3, a, b, c);   
// }

void minprintf(const char *fmt, ...)
{
    int i;
    va_list ap;

    va_start(ap, fmt);
    for(i=0;fmt[i];i++)
    {
        if(fmt[i] != '%')
            putchar(fmt[i]);
        else
            switch(fmt[++i])
            {
                case 'c':
                    printf("%c", va_arg(ap, char));
                    break;
                
                case 'd':
                    printf("%d", va_arg(ap, int));
                    break;
                
                case 's':
                    printf("%s", va_arg(ap, char*));
                    break;
                default:
                    puts("자료형을 잘못 입력하셨습니다.");
            }
    }
    va_end(ap);
}

void main()
{
    char c = 'A';
    const char *str = "ABC";
    int a =10, b =10;

    minprintf("%d + %d = %d \n", a, b, a+b);
    minprintf("%s = ABC \n", str);
    minprintf("%c %c %c \n", c, c, c);

}