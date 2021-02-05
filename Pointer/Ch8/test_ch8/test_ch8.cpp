#include <stdio.h>

// void func(char cdata, int ndata, double ddata, const char *test)
// {
//     printf("%c %d %g %s \n",cdata, ndata, ddata, test);
// }
// void main()
// {
//     char c = 'Z';
//     int n1 = 50;
//     double d = 77.777;
//     const char *str ="C programming";

//     func(c, n1, d, str);
// }

// void func(int *arr1, int (*arr2)[3])
// {
//     //printf("%d %d \n", arr1, arr2);
//     printf("%d %d %d %d %d %d \n",arr1[0], arr1[1], arr1[2], arr1[3], arr1[4], arr1[5]);
//     printf("%d %d %d %d %d %d \n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[1][0], arr2[1][1], arr2[1][2]);


// }

// void main()
// {
//     int arr1[6] = {10, 20, 30, 40, 50, 60};
//     int arr2[2][3] = {{100, 200, 300}, {400, 500, 600}};
//     func(arr1, arr2);
// }

// int sum(int n1, int n2)
// {
//     return (n1 + n2); 
// }
// void main()
// {
//     int n1, n2;
    
//     scanf_s("%d %d",&n1, &n2);
//     printf("%d + %d = %d \n", n1, n2, sum(n1, n2));
// }

// struct _point
// {
//     int x;
//     int y;
// };

// void print1(struct _point p1)
// {
//     printf("%d %d \n", p1.x , p1.y);
// }

// void print2(struct _point *p2)
// {
//     printf("%d %d \n", p2->x , p2->y);
    
// }

// void main()
// {
//     struct _point p1 = {10, 10}, p2 = {20, 20};
//     print1(p1);
//     print2(&p2);

// }

char *getstr()
{
    static char n = '0';
    n++;
    printf("함수 호출 : ");
    return &n;
}
void main()
{
    //printf("함수 호출 \n");

    puts(getstr());
    puts(getstr());
    puts(getstr());
}