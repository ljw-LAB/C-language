#include <stdio.h>

// void func(int n1)
// {
//     int n2 = 20;
//     printf("%d %d \n", n1, n2);
// }

// void main()
// {
//     int m = 10;
//     func(m);
// }

// void func(auto n1)
// {
// 	auto n2 = 20;
// 	printf("%d %d \n", n1, n2);
// }

// void main()
// {
// 	auto m = 10;
// 	func(m);
// }

// void func3(int n3)
// {
//     printf("%d \n", n3);
// }

// void func2(int n2)
// {
//     func3(n2);
// }

// void func1(int n1)
// {
//     func2(n1);
// }

// void main()
// {
//     int m = 10;
//     func1(m);
// }

// void func(int n)
// {
//     static int sn = 10;
//     printf("%d %d \n", n, sn);
// }

// void main()
// {
//     int m =10;
//     func(m);
// }

// void func()
// {
//     int an = 0;
//     static int sn = 0;
//     printf("%d %d \n", an++, sn++);
// }

// void main()
// {
//     func();
//     func();
//     func();
// }

void func()
{
    int an = 0;
    static int sn = 0;
    an = 0;
    sn = 0;
    printf("%d %d \n", an++, sn++);
}

void main()
{
    func();
    func();
    func();
}