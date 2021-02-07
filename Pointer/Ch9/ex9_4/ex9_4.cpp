#include <stdio.h>

// void main()
// {
//     int n = 10;
//     int *np;

//     np = &n;

//     printf("%d %d \n", n, *np);
// }

// void main()
// {
//     int n =10;
//     int *np =&n;
//     int **npp;

//     npp = &np;

//     printf("%d %d \n", n, **npp);
// }

// void main()
// {
//     int arr[3] = {10, 20, 30};

//     printf("%d %d %d \n", arr[0], arr[1], arr[2]);
// }

// void main()
// {
//     int arr[2][3] = {{10, 20, 30}, {100, 200, 300}};
//     printf("%d %d %d %d %d %d \n", arr[0][0], arr[0][1], arr[0][2], arr[1][0], arr[1][1], arr[1][2]);
// }

// void main()
// {
//     int n1 = 10;
//     int n2 = 20;
//     int n3 = 30;

//     int *arr[3]={&n1, &n2, &n3};

//     printf("%d %d %d \n", n1, n2, n3);
//     printf("%d %d %d \n", *arr[0], *arr[1], *arr[2]);
// }

// void main()
// {
//     int arr2[2][3] = {{10, 20, 30}, {100, 200, 300}};
//     int (*arr)[3];

//     arr = arr2;

//     printf("%d %d %d %d %d %d \n", arr[0][0], arr[0][1], arr[0][2], arr[1][0], arr[1][1], arr[1][2]);

// }

// void main()
// {
//     int arr3[2][2][3] = {{{10, 20, 30}, {40, 50, 60}}, {{70, 80, 90}, {100, 110, 120}}};
//     int (*arr)[2][3];

//     arr = arr3;
//     printf("%d %d %d \n", arr[0][0][0], arr[0][0][1], arr[0][0][2]);
//     printf("%d %d %d \n", arr[0][1][0], arr[0][1][1], arr[0][1][2]); 
//     printf("%d %d %d \n", arr[1][0][0], arr[1][0][1], arr[1][0][2]); 
//     printf("%d %d %d \n", arr[1][1][0], arr[1][1][1], arr[1][1][2]); 

// }

// void main()
// {
//     int iarr1[2][3] = {{21, 22, 23}, {24, 25, 26}};
//     int iarr2[3][3] = {{31, 32, 33}, {34, 35, 36}, {37, 38, 39}};
//     int (*arr[2])[3];

//     arr[0] = iarr1;
//     arr[1] = iarr2;

//     printf("%d %d %d \n", arr[0][0][0], arr[0][0][1], arr[0][0][2]);
//     printf("%d %d %d \n", arr[0][1][0], arr[0][1][1], arr[0][1][2]);
//     puts("=================");
//     printf("%d %d %d \n", arr[1][0][0], arr[1][0][1], arr[1][0][2]);
//     printf("%d %d %d \n", arr[1][1][0], arr[1][1][1], arr[1][1][2]);
//     printf("%d %d %d \n", arr[1][2][0], arr[1][2][1], arr[1][2][2]);
// }

// void main()
// {
//     int n1 =10, n2 = 20, n3 = 30, n4 = 40, n5 = 50, n6 = 60, n7 = 70, n8 = 80, n9 = 90;
//     int *iarr1[2][3] = {{&n1, &n2, &n3}, {&n4, &n5, &n6}};
//     int *iarr2[3][3] = {{&n1, &n2, &n3}, {&n4, &n5, &n6}, {&n7, &n8, &n9}};
//     int *(*arr)[3];

//     printf("%d %d %d %d %d %d %d %d %d \n", n1, n2, n3, n4, n5, n6, n7, n8, n9);
//     arr = iarr1;
//     printf("%d %d %d %d %d %d \n", *arr[0][0], *arr[0][1], *arr[0][2], *arr[1][0], *arr[1][1], *arr[1][2]);
//     arr = iarr2;
//     printf("%d %d %d %d %d %d %d %d %d \n", *arr[0][0], *arr[0][1], *arr[0][2], *arr[1][0], *arr[1][1], *arr[1][2], *arr[2][0], *arr[2][1], *arr[2][2]);
// }

// int n = 20;
// int* func()
// {
//     return &n;
// }

// void main()
// {
//     int *np;
//     np =func();
//     printf("%d %d \n", n, *np);
// }

// int function1()
// {
//     puts("함수 1입니다.");
//     return 1;
// }

// int function2()
// {
//     puts("함수 2입니다.");
//     return 2;
// }

// void main()
// {
//     int (*func)();

//     func = function1;
//     printf("%d \n", func());
//     func = function2;
//     printf("%d \n", func());

// }

int function1()
{
    puts("함수 1입니다 .");
    return 1;
}

int function2()
{
    puts("함수 2입니다 .");
    return 2;
}

void main()
{
    int (*func[2])();

    func[0] = function1;
    printf("%d \n", func[0]());
    func[1] = function2;
    printf("%d \n", func[1]());

}