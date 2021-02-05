#include <stdio.h>

// void main()
// {
//     printf("1234567890 \n");
//     printf("1234567890 \n");
//     printf("1234567890 \n");
// }

// void func()
// {
//     printf("1234567890 \n");
// }

// void main()
// {
//     func();
//     func();
//     func();
// }

// void main()
// {
//     printf("%d \n", 1);
//     printf("%d \n", 2);
//     printf("%d \n", 3);
//     printf("%d \n", 4);
//     printf("%d \n", 5);
// }

// void func(int n)
// {
//     printf("%d \n", n);
// }

// void main()
// {
//     func(1);
//     func(2);
//     func(3);
//     func(4);
//     func(5);
// }

// void main()
// {
//     printf(" (%d %d) \n", 2, 2);
//     printf(" (%d %d) \n", 2, 3);   
//     printf(" (%d %d) \n", 10, 20);   

// }

// void func(int n1, int n2)
// {
//     printf(" (%d %d) \n", n1, n2);
// }

// void main()
// {
//     func(2, 2);
//     func(2, 3);
//     func(10, 20);
// }

// void main()
// {
//     printf("%c %d %g \n", 'A', 10, 10.123);
//     printf("%c %d %g \n", 'B', 20, 20.123);
//     printf("%c %d %g \n", 'C', 30, 30.123);
// }

// void main()
// {
//     int sum;

//     sum = 5 +10;
//     printf("%d \n", sum);
//     sum = 10 + 20;
//     printf("%d \n", sum);
//     sum = 20 + 30;
//     printf("%d \n", sum);

// }

// int func(int n1, int n2)
// {
//     return n1+n2;
// }

// void main()
// {
//     int sum;

//     sum = func(5, 10);
//     printf("%d \n", sum);
//     sum = func(10, 20);
//     printf("%d \n", sum);
//     sum = func(20, 30);
//     printf("%d \n", sum);
    
// }

// void main()
// {
//     double div;

//     div = 5.0 / 2.0;
//     printf("%g \n", div);
//     div = 10.0 / 3.0;
//     printf("%g \n", div);
//     div = 15.0 / 4.0;
//     printf("%g \n", div);

// }

double func(double d1, double d2)
{
    return d1/d2;
}

void main()
{
    double div;

    div = func(5.0, 2.0);
    printf("%g \n", div);
    
    div = func(10.0, 3.0);
    printf("%g \n", div);
    
    div = func(15.0, 2.0);
    printf("%g \n", div);

}