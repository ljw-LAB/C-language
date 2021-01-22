#include <stdio.h>

void main()
{
	char c = 'A';

	int n = 100;
	double d = 100;

	printf("%d \n", sizeof(c));
	printf("%c \n", c);
	printf("%d %x", &c, &c); 

	printf("%d \n", sizeof(n));
	printf("%d \n", n);

	printf("%d \n", sizeof(d));
	printf("%g \n", d);


}