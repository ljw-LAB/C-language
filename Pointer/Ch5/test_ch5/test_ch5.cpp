#include <stdio.h>

// void main()
// {
//     printf("%d %d %d \n", '0', 'A', 'a'); // 48 65 97
//     printf("%c %c %c \n", 48, 65, 97); // 0 A a
// }

// void main()
// {
//     //char *str = "ABCDEF";
// 	const char *str = "ABCDEF";
	
//     printf("%c %c %c \n", str[0], str[1], str[2]); // A B C
//     puts("================");
//     printf("%s \n", str); // ABCDEF
//     printf("%s \n", str+1); // BCDEF
//     puts(str+2); // CDEF
//     puts(str+3); // DEF
// }

// void main()
// {
//     char arr[20] = "ABCDEF";
//     printf("%c %c %c \n", arr[0], arr[1], arr[2]); // A B C
//     puts("================");
//     printf("%s \n", arr); // ABCDEF
//     printf("%s \n", arr+1); // BCDEF
//     puts(arr+2); // CDEF
//     puts(arr+3); // DEF

// }

// void main()
// {
// 	const char *str = "ABCDEF";
//  	//char *str = "ABCDEF";
//     char arr[] = "ABCDEF";

//     printf("%d %d \n", sizeof(str), sizeof(arr)); // 4 7
//     printf("%c %c \n", str[0], arr[0]); // A A
//     printf("%c %c \n", *str, *arr); // A A

// }

void main()
{
    const char *str = "ABCDEF";
	//char *str = "ABCDEF";
	char arr[] = "ABCDEF";

   // str[0] = 'Z'; 포인터 변수에는 상수가 들어 갈 수 없음 
   // str[1] = 'Z';

    printf("%c %c \n", str[0], str[1]);

}