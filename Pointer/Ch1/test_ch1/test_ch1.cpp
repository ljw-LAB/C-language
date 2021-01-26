#include <stdio.h>

// void main()
// {
// 	char c = 'A';
// 	int n = 10;
// 	long l = 10l;
// 	float f = 5.25;
// 	double 	d = 5.25;

// 	printf("%d \n", sizeof(c));
// 	printf("%d \n", sizeof(n));
// 	printf("%d \n", sizeof(l));
// 	printf("%d \n", sizeof(f));
// 	printf("%d \n", sizeof(d));
// 	puts("=====================");
// 	printf("%d \n", sizeof(&c));
// 	printf("%d \n", sizeof(&n));
// 	printf("%d \n", sizeof(&l));
// 	printf("%d \n", sizeof(&f));
// 	printf("%d \n", sizeof(&d));
// }

// void main()
// {
// 	printf("%d \n", sizeof(char));
// 	printf("%d \n", sizeof(int));
// 	printf("%d \n", sizeof(long));
// 	printf("%d \n", sizeof(float));
// 	printf("%d \n", sizeof(double));
// 	puts("=====================");
// 	printf("%d \n", sizeof(char*));
// 	printf("%d \n", sizeof(int*));
// 	printf("%d \n", sizeof(long*));
// 	printf("%d \n", sizeof(float*));
// 	printf("%d \n", sizeof(double*));
// }

// void main()
// {
// 	char c = 'A';
// 	int n = 10;
// 	long l = 10l;
// 	float f = 5.25;
// 	double 	d = 5.25;
	
// 	printf("%x \n", &c);
// 	printf("%x \n", &n);
// 	printf("%x \n", &l);
// 	printf("%x \n", &f);
// 	printf("%x \n", &d);
// 	puts("=====================");
// 	printf("%x \n", &c+1);
// 	printf("%x \n", &n+1);
// 	printf("%x \n", &l+1);
// 	printf("%x \n", &f+1);
// 	printf("%x \n", &d+1);
// }

void main()
{
	int n = 0x11223344;

	printf("%x \n", *(char*)&n);
 	printf("%x \n", *(short*)&n);
 	printf("%x \n", *(int*)&n);

}