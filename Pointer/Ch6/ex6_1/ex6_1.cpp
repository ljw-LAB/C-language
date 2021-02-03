#include <stdio.h>

// struct _point
// {
//     int x;
//     int y;
// };

// void main()
// {
//     int n1 = 10;
//     struct  _point p1 = {10, 10};
    
// }

// struct _point
// {
//     int x;
//     int y;
// };

// void main()
// {
//     int n1 = 10;
//     struct  _point p1 = {10, 10};
//     printf("%d %d \n", sizeof(n1), sizeof(p1));
//     printf("%d %d \n", sizeof(p1.x), sizeof(p1.y));

// }

// struct _point
// {
//     int x;
//     int y;
// };

// void main()
// {
//     struct  _point p1 = {10, 10};
//     printf("(%d %d) \n", p1.x, p1.y);
//     p1.x = 20;
//     p1.y = 20;
//     printf("(%d %d) \n", p1.x, p1.y);

// }

struct _point
{
    int x;
    int y;
};

void main()
{
    struct  _point p1 = {10, 10};

    printf("(%d %d) \n", p1.x, p1.y);
    printf("(%d %d) \n", (&p1)->x, (&p1)->y);
    printf("(%d %d) \n", (*&p1).x, (&p1)->y);
    

}