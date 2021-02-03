#include <stdio.h>
#include <string.h>

// void main()
// {
//     char c = 'A';
//     wchar_t wc = L'A';
//     //wchar_t wc = L'��'; // you must 'Save As' => HANGUL 20949 Wansung If it is not, will occur compile error
//     //setlocale(LC_ALL, "KOREAN"); 


//     printf("ASCII : %c \n", c);
//     wprintf(L"UNICODE : %c \n", wc);

//     printf("ASCII : %d \n", sizeof(c));
//     printf("UNICODE : %d \n", sizeof(wc));

// }

// void main()
// {
//     char* s = "ABC";
//     wchar_t* ws = L"ABC";

//     printf("ASCII : %s \n", s);
//     wprintf(L"UNICODE : %s \n", ws);

// }

// void main()
// {
//     char s[] = "ABC";
//     wchar_t ws[] = L"ABC";

//     printf("ASCII : %s \n", s);
//     wprintf(L"UNICODE : %s \n", ws);

//     printf("ASCII : %d \n", sizeof(s));
//     printf("UNICODE : %d \n", sizeof(ws));

// }

void main()
{
	char s[100] = "ABC";
	wchar_t ws[100] = L"ABC";

	printf("ASCII : %s \n", s);
	wprintf(L"UNICODE : %s \n", ws);

	strcpy_s(s, "Hello!");
	wcscpy_s(ws, L"Hello!");
	printf("ASCII : %s \n", s);
	wprintf(L"UNICODE : %s \n", ws);

	strcat_s(s, "+String");
	wcscat_s(ws, L"+String");
	printf("ASCII : %s \n", s);
	wprintf(L"UNICODE : %s \n", ws);

	printf("s length : %d \n", strlen(s));
	wprintf(L"ws length : %d \n", wcslen(ws));
}