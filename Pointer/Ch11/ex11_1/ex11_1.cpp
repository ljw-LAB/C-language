#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>


// void main()
// {
//     int c;
//     printf("한 문자를 키보드에서 입력 받음 : ");
//     c = _getch();
//     _putch(c);
// }

// void main()
// {
//     int c;
//     printf("한 문자를 키보드에서 입력 받음 : ");
//     c = _getche();
//     _putch(c);
// }

// void main()
// {
//     int c;
//     printf("버퍼에 문자를 입력 받아 한 문자를 리턴 : ");
//     c = getchar();
//     putchar(c);
// }

// void main()
// {
//     int c;
    
//     printf("버퍼에 문자를 입력 받아 한 문자를 리턴 : ");
//     c = getchar();
//     putchar(c);
//     c = getchar();
//     putchar(c);
//     c = getchar();
//     putchar(c);
// }

// void main()
// {
//     int c;
//     while((c=getchar())!= '\n')
//         putchar(c);
// }

// void main()
// {
//     int c;

//     printf("버퍼에 문자를 입력 받아 한 문자를 리턴 : ");
//     c = fgetc(stdin);
//     fputc(c, stdout);
// }

// void main()
// {
//     int c;
//     printf("가변 인자를 사용한 문자 입력 : ");
//     scanf_s("%c", &c);
//     printf("%c", c);
// }

// void main()
// {
//     int c;
//     printf("가변 인자를 사용한 문자 입력 : ");
//     fscanf_s(stdin,"%c",&c);
//     fprintf(stdout,"%c",c);
// }

// void main()
// {
//     char temp[20];

//     printf("문자열 입력:");
//     gets_s(temp);
//     puts(temp);
// }

// void main()
// {
//     char temp[20];

//     printf("문자열 입력: ");
//     fgets(temp, 20, stdin);
//     fputs(temp, stdout);
// }

// void main()
// {
//     char temp[20];

//     printf("가변 인자를 이용한 문자열 입력 : ");
//     scanf("%s", temp);
//     printf("%s \n", temp);
//}

// void main()
// {
//     char temp[20];

//     printf("가변 인자를 이용한 문자열 입력 : ");
//     fscanf(stdin, "%s", temp);
//     fprintf(stdout, "%s\n", temp);
// }

// void main()
// {
//     int c1, c2;
//     char temp1[20] = "a A";
//     char temp2[20];

//     printf("문자열에서 문자 입력 : ");
//     sscanf(temp1,"%c %c", &c1, &c2);
//     printf("%c %c \n", c1, c2);

//     printf("버퍼에 문자 출력: ");
//     sprintf(temp2, "%c %c", c1, c2);
// 	printf("%s \n", temp2);
// }

// void main()
// {
//     char c;
//     int n;
//     double d;
//     char *temp = "A 200 255.123";
    
//     sscanf(temp, "%c %d %lf", &c, &n, &d);
//     printf("%c %d %g \n", c, n, d);
// }

void main()
{
    char c = 'A';
    int n = 10;

    double d = 255.123;
    char temp[20];

    sprintf(temp, "%c %d %g", c, n, d);
    puts(temp);
}