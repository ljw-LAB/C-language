#include <stdio.h>

// struct _point
// {
//     int x;
//     int y;
// };

// void main()
// {
//     struct _point p1 = {10, 10};

//     printf("%x %x %x \n", &p1, &p1.x, &p1.y);
//     printf("%x %x %x \n", &p1+1, &p1.x+1, &p1.y+1);
    
// }

// struct _point
// {
//     double x;
//     double y;
// };

// void main()
// {
//     struct _point p1 = {10, 10};

//     printf("%x %x %x \n", &p1, &p1.x, &p1.y);
//     printf("%x %x %x \n", &p1+1, &p1.x+1, &p1.y+1);
    
// }

struct _point
{
    double x;
    double y;
};

void main()
{
    struct _point p1 = {10, 10};

    printf("%d %d %d \n", sizeof(p1), sizeof(p1.x), sizeof(p1.y));
}