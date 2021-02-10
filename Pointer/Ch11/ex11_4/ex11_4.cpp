#include <stdio.h>

// void main()
// {
//     printf("== : %d \n", 10 == 20);
//     printf("!= : %d \n", 10 != 20);
//     printf("< : %d \n", 10 < 20);
//     printf("> : %d \n", 10 > 20);
//     printf("<= : %d \n", 10 <= 20);
//     printf(">= : %d \n", 10 >= 20);
// }

// void main()
// {
//     printf("&& : %d \n", 0 && 1);
//     printf("&& : %d \n", 1 && 1);
//     printf("&& : %d \n", 10 && 20);
//     printf("&& : %d \n", 100 && 200);
//     puts("=================");
//     printf("|| : %d \n", 0 || 1);
//     printf("|| : %d \n", 1 || 1);
//     printf("|| : %d \n", 10 || 20);
//     printf("|| : %d \n", 100 || 200);
//     puts("=================");
//     printf("! : %d \n", !0);
//     printf("! : %d \n", !1);
//     printf("! : %d \n", !100);
//     printf("! : %d \n", !-100);
//     puts("=================");
// }

// void main()
// {
//     int n1 =0, n2 =0;

//     n2 = n1++;

//     printf("%d, %d \n",n1, n2);

// }

// void main()
// {
//     int n1 =0, n2 =0;

//     n2 = ++n1;

//     printf("%d, %d \n",n1, n2);
    
// }

// void main()
// {
//     int n1 =1, n2 =0;

//     if(n1++ || n2++)
//         puts("참");
//     else
//         puts("거짓");
//     printf("%d %d \n", n1, n2); //  1 || 2  -> 1이 참이면 2까지 가지 않고 바로 결과값 출력, 따라서 2는 거치지 않기때문에 n2 =0  
// }

// void main()
// {
//     int n1 =0, n2 =0;

//     if(n1++ || n2++)
//         puts("참");
//     else
//         puts("거짓");
//     printf("%d %d \n", n1, n2); // 1 || 2  -> 1이 거짓이므로, 2까지 가지 가서 결과값 출력, 따라서 2까지 거치지 때문에 1 1
// }

// void main()
// {
//     int n1 =0, n2 =0;

//     if(n1++ && n2++)
//         puts("참");
//     else
//         puts("거짓");
//     printf("%d %d \n", n1, n2); //  1 && 2  -> &&는 1이 거짓이면 2까지 가지 않고 바로 결과값 출력, 1, 0
// }

// void main()
// {
//     int n1 =1, n2 =0;

//     if(n1++ && n2++)
//         puts("참");
//     else
//         puts("거짓");
//     printf("%d %d \n", n1, n2); //  1 && 2  -> &&는 1이 참이더라도 2까지 가지 가게됨 그 후 결과값 출력, 2, 1
// }

// void main()
// {
//     printf("& : %d \n", 0 & 1);
//     printf("& : %d \n", 1 & 1);
//     printf("& : %d \n", 2 & 3);
//     printf("& : %d \n", 5 & 7);
//     puts("=================");
//     printf("| : %d \n", 0 | 1);
//     printf("| : %d \n", 1 | 1);
//     printf("| : %d \n", 2 | 3);
//     printf("| : %d \n", 5 | 7);
//     puts("=================");
//     printf("^ : %d \n", 0 ^ 1);
//     printf("^ : %d \n", 1 ^ 1);
//     printf("^ : %d \n", 2 ^ 3);
//     printf("^ : %d \n", 5 ^ 7);
//     puts("=================");
//     printf("~ : %d \n", ~0);
//     printf("~ : %d \n", ~1);
//     printf("~ : %d \n", ~2);
//     printf("~ : %d \n", ~~2);
// }

// void main()
// {
//     int a = 10, b = 20;
//     int F;
    
//     F = a^b;

//     printf("a = %d \n", F ^ b);
//     printf("b = %d \n", F ^ b);

// }

// void main()
// {
//     int a =10, b= 20;
    
//     printf("a = %d \n", a);
//     printf("b = %d \n", b);

//     a ^= b;
//     b ^= a;
//     a ^= b;
//     puts("===========");
    
//     printf("a = %d \n", a);
//     printf("b = %d \n", b);

// }

// void swap(int *a, int *b)
// {
//     *a ^= *b;
//     *b ^= *a;
//     *a ^= *b;
// }

// void main()
// {
//     int a = 10, b =20;
    
//     printf("a = %d \n", a);
//     printf("b = %d \n", b);

//     swap(&a, &b);

//     puts("===========");
//     printf("a = %d \n", a);
//     printf("b = %d \n", b);

// }

// #define SWAP(a, b) {a^=b,b^=a,a^=b;}

// void main()
// {
//     int a = 10, b = 20;

//     printf("a = %d \n", a);
//     printf("b = %d \n", b);

//     SWAP(a,b);

//     puts("=============");
//     printf("a = %d \n", a);
//     printf("b = %d \n", b);
    
// }

// void main()
// {
//     int n = 1;

//     printf("%x %d \n", n << 0, n << 0);
//     printf("%x %d \n", n << 1, n << 1);
//     printf("%x %d \n", n << 2, n << 2);
//     printf("%x %d \n", n << 4, n << 4);
//     printf("%x %d \n", n << 8, n << 8);

// }

// void main()
// {
//     int n = 256;

//     printf("%x %d \n", n >> 0, n >> 0);
//     printf("%x %d \n", n >> 1, n >> 1);
//     printf("%x %d \n", n >> 2, n >> 2);
//     printf("%x %d \n", n >> 4, n >> 4);
//     printf("%x %d \n", n >> 8, n >> 8);
// }

// void main()
// {
//     int n = 4;

//     printf("%x %d \n", n >> 0, n >>0);
//     printf("%x %d \n", n >> 1, n >>1);
//     printf("%x %d \n", n >> 2, n >>2);
//     printf("%x %d \n", n >> 3, n >>3);
//     printf("%x %d \n", n >> 4, n >>4);
//     printf("%x %d \n", n >> 5, n >>5);

// }

// void main()
// {
//     int n = -4;

//     printf("%x %d \n", n >> 0, n >> 0);
//     printf("%x %d \n", n >> 1, n >> 1);
//     printf("%x %d \n", n >> 2, n >> 2);
//     printf("%x %d \n", n >> 3, n >> 3);
//     printf("%x %d \n", n >> 4, n >> 4);
//     printf("%x %d \n", n >> 5, n >> 5);

// }

// void main()
// {
//     int n = 0x4241;
    
//     printf("%x \n", (unsigned char ) n); // 0100 0010 0100 0001
//     printf("%x \n", (unsigned short ) n >> 8 & 0xFF ); // 1111 1111 0100 0010 & 1111 1111 1111 1111
// }

// #define LOBYTE(x) ((unsigned char )x)
// #define HIBYTE(x) ((unsigned short )x >> 8 & 0xFF)

// void main()
// {
//     int n = 0x4241;

//     printf("%x \n", LOBYTE(n));
//     printf("%x \n", HIBYTE(n));

// }

// #define LOWORD(x) ((unsigned short )x)
// #define HIWORD(x) ((unsigned int )x >> 16 & 0xFFFF)

// void main()
// {
//     int n = 0x44434241;

//     printf("%x \n", LOWORD(n));
//     printf("%x \n", HIWORD(n));
// }

typedef unsigned char   BYTE;
typedef unsigned short  WORD;
typedef unsigned long   DWORD;

#define MAKEWORD(x, y) ((BYTE)x | (WORD)y << 8)
#define MAKEDWORD(x, y) ((WORD)x | (DWORD)y << 16)

void main()
{
    int n = 0;
    n = MAKEDWORD(MAKEWORD(0x41, 0x42), MAKEWORD(0x43, 0x44));
    printf("%x \n", n);
}