#include <stdio.h>

// int func()
// {
//     int m =10;
//     return m;
// }

// void main()
// {
//     int n;
//     n= func();
//     printf("%d \n", n);
// }

// struct _point
// {
//     int x;
//     int y;
// };

// struct _point func()
// {
//     struct _point s = {10, 10};
    
//     return s;
// }

// void main()
// {
//     struct _point p1;
//     p1 = func();
//     printf("%d %d \n", p1.x, p1.y);
// }

struct _point
{
    int x;
    int y;
};

struct _point* func()
{
    static struct _point s = {10, 10};
    return &s;
}

void main()
{
    struct _point *ps;
    ps = func();
    printf("%d %d \n", ps->x, ps->y);
}