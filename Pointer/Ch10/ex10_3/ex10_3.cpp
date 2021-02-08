#include <stdio.h>

// void main()
// {
// 	const int n = 10;
// 	printf("%d \n", n);
// }

// void main()
// {
// 	int n = 10;
// 	const int *np = &n;
// 	n = 20;
// 	//*np = 30;
// 	printf("%d %d \n", n, *np);
// }

// void main()
// {
// 	int n = 10;
// 	int* const np = &n;
// 	int m = 100;
	
// 	n = 20;
// 	*np = 30;
// 	//np = &m;

// 	printf("%d %d \n", n, *np);
// }

// void main()
// {
// 	int n = 10;
// 	const int *const np = &n;
// 	int m = 100;
// 	n = 20;
	
// 	printf("%d %d \n", n, *np);
// }

void strprint(const char *str)
{
	int i;
	for(i=0; str[i]; i++)
	{
		printf("%c", str[i]);
	}
	puts("");
}

void arrprint(const int *arr)
{
	int i;
	for(i=0; i < 5; i++)
	{
		printf("%d", arr[i]);
	}
	puts("");	
}

void main()
{
	const char *str1 = "ABCDEF";
	int arr1[5] ={10, 20, 30, 40, 50};
	strprint(str1);
	arrprint(arr1);
}