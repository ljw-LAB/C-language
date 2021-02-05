#include <stdio.h>

// void func(int *ip)
// {
// 	printf("%x %d \n", ip, *ip);
// }
// void main()
// {
// 	int n = 10;
// 	func(&n);
// }

// void func(double *dp)
// {
// 	printf("%x %g \n", dp, *dp);
// }

// void main()
// {
// 	double d = 10.55;
// 	func(&d);
// }

// void func(int *ap) 
// //void func(int ap[])
// {
// 	printf("%d %d %d %d %d \n", ap[0], ap[1], ap[2], ap[3], ap[4]);
// }
// void main()
// {
// 	int iarr[5] = {10, 20, 30, 40, 50};
// 	func(iarr);
// }

// void func(char ap[])
// {
// 	printf("%c %c %c %c \n", ap[0], ap[1], ap[2], ap[3]);
// }

// void main()
// {
// 	char carr[4] = {'A', 'B', 'C', 'D'};
// 	func(carr);
// }

// void func(char (*ap)[3])
// //void func(char ap[][3])
// {
// 	printf("%c %c %c %c %c %c\n", ap[0][0], ap[0][1], ap[0][2], ap[1][0], ap[1][1], ap[1][2]);
// }

// void main()
// {
// 	char carr[2][3] = {{'A','B','C'}, {'1','2','3'}};
// 	func(carr);
// }

// void func(int (*ap)[3])
// //void func(int ap[][3])
// {
// 	printf("%d %d %d %d %d %d \n", ap[0][0], ap[0][1], ap[0][2], ap[1][0], ap[1][1], ap[1][2]);
// }

// void main()
// {
// 	int iarr[2][3] ={{10, 20, 30}, {100, 200, 300}};
// 	func(iarr);
// }

// void func(const char *s)
// {
// 	puts(s);
// }

// void main()
// {
// 	func("ABCD");
// }

// void func(const char *s)
// {
// 	puts(s);
// }

// void main()
// {
// 	const char *str ="abcd";
// 	func(str);
// }

// void func(int *np)
// {
// 	*np = 20;
// }

// void main()
// {
// 	int n = 10;
// 	printf("%d \n", n);
// 	func(&n);
// 	printf("%d \n", n);
// }

void func(int n1, int n2, int *psum)
{
	*psum = n1 + n2;
}

void main()
{
	int sum;
	int a = 10, b =20;

	func(a, b, &sum);
	printf("%d \n", sum);
}