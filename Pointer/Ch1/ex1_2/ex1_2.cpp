#include <stdio.h>

void main()
{
	char c1 = 'A';
	char c2 = 'B';

	int n1 = 100;
	int n2 = 200;

	printf("%d \n", &c1);
	printf("%d \n", &c2);

	printf("%d \n", &n1);
	printf("%d \n", &n2);

	printf("%d \n", &c1+1);
	printf("%d \n", &c2+1);
	printf("%d \n", &n1+1);
	printf("%d \n", &n2+1);

	
}