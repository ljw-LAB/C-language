#include <stdio.h>

// void b()
// {
// 	printf("b( ) \n");
// }

// void a()
// {
// 	b();
// 	printf("a( ) \n");
// }

// void main()
// {
// 	a();
// 	printf("main() \n");
// }

// void Print(int n)
// {
// 	if( 1 < n)
// 		Print(n-1);
// 	printf("%d \n",n);

// }

// void main()
// {
// 	Print(3);
// }

// void Print(int n)
// {
// 	printf("Start : %d \n",n);
	
// 	if( 1 < n)
// 		Print(n-1);
// 	printf("End :%d \n",n);

// }

// void main()
// {
// 	Print(3);
// }

// int Facorial(int n)
// {
// 	return n == 0 ? 1 : n*Facorial(n-1);
// }
// void main()
// {
// 	printf("3! = %d \n", Facorial(3));
// }

// void Print(int n)
// {
// 	printf("Start : %d \n", n);
// 	if( 1 < n)
// 	{
// 		Print(n-1);
// 		Print(n-1);
// 	}
// 	printf("end : %d", n);
// }

// void main()
// {
// 	Print(3);
// }

int Fibonacci(int n)
{
	return n <= 2 ? 1 : Fibonacci(n-2) + Fibonacci(n-1);

}

void main()
{
	printf("Fibonacci(5) : %d \n", Fibonacci(5));
}