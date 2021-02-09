
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

// void main()
// {
//     int n1 = 5, n2 =2;
//     double d;

//     d = n1 / n2;

//     printf("%lf", d);
// }

// void main()
// {
//     int n1 = 5, n2 =2;
//     double d;

//     d = (double) n1 / n2;

//     printf("%lf", d);
// }

// void main()
// {
//     int n1, n2;
//     double d;

//     printf("두 정수를 입력하세요 : ");
//     scanf("%d %d", &n1, &n2);
//     if(n2)
//         d = (double) n1 / n2;
//     else
//     {
//         puts("n2는 0이 될 수 없습니다 \n");
//         return;
//     }
//     printf("%lf", d);
// }

// void menu()
// {
//     puts("=================");
//     puts("1. 두 정수의 덧셈");
//     puts("2. 두 정수의 뺄셈");
//     puts("3. 두 정수의 곱셈");
//     puts("4. 두 정수의 나눗셈");

// }

// void main()
// {
//     int n1, n2;

//     printf("두 정수를 입력하세요 : \n");
//     scanf("%d %d", &n1, &n2);
    
//     menu();
//     switch (_getch())
//        {
//         case '1':
//             printf("%d + %d = %d", n1, n2, n1 + n2);
//             break;
//         case '2':
//             printf("%d - %d = %d", n1, n2, n1 - n2);
//             break;
//         case '3':
//             printf("%d * %d = %d", n1, n2, n1 * n2);
//             break;
//         case '4':
//             if (n2)
//                 printf("%d / %d = %g", n1, n2, (double)n1 / n2);
//             else
//                 puts("분모가 0입니다.");
//             break;
//         default :
//             puts("1~4까지 입력 가능합니다");
//     }
// }

// void main()
// {
//     int i;

//     for(i=0; i< 100; i++)
//     {
//         printf("%2d", i/50);
//     }
// }

void main()
{
    int i;

    for(i=0; i< 100; i++)
    {
        printf("%2d", i/10);
    }
}