#include <stdio.h>

// struct _point
// {
//     int x;
//     int y;
// };

// void main()
// {
//     struct _point s1 ={10, 10};
//     struct _point *sp = &s1;

//     printf("(%d %d) \n", s1.x, s1.y);
//     printf("(%d %d) \n", sp->x, sp->y);
//     printf("(%d %d) \n", (*sp).x, (*sp).x);
// }

// struct _point
// {
//     int x;
//     int y;
// };

// void main()
// {
//     struct _point s1 ={10, 10};
//     struct _point *sp = &s1;

//     printf("(%d %d) \n", s1.x, s1.y);
//     printf("(%d %d) \n", sp->x, sp->y);
//     printf("(%d %d) \n", (*sp).x, (*sp).x);
// }

// struct _point
// {
//     int x;
//     int y;
// };

// void main()
// {
//     struct _point sarr[5] ={1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
//     //struct _point sarr[5] ={{1, 1}, {2, 2}, {3, 3}, {4, 4}, {5, 5}};
    

//     printf("(%d %d) \n", sarr[0].x, sarr[0].y);
//     printf("(%d %d) \n", sarr[1].x, sarr[1].y);
//     printf("(%d %d) \n", sarr[2].x, sarr[2].y);
//     printf("(%d %d) \n", sarr[3].x, sarr[3].y);
//     printf("(%d %d) \n", sarr[4].x, sarr[4].y);
    

// }

// struct _point
// {
//     int x;
//     int y;
// };

// void main()
// {
//     struct _point sarr[5] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};

//     printf("(%d %d) \n", sarr->x, sarr->y);
//     printf("(%d %d) \n", (sarr+1)->x, (sarr+1)->y);
//     printf("(%d %d) \n", (sarr+2)->x, (sarr+2)->y);
//     printf("(%d %d) \n", (sarr+3)->x, (sarr+3)->y);
//     printf("(%d %d) \n", (sarr+4)->x, (sarr+4)->y);
//     puts("=====================");
//     printf("(%d %d) \n", (*sarr).x, (*sarr).y);
//     printf("(%d %d) \n", (*(sarr+1)).y, (*(sarr+1)).y);
//     printf("(%d %d) \n", (*(sarr+2)).y, (*(sarr+2)).y);
//     printf("(%d %d) \n", (*(sarr+3)).y, (*(sarr+3)).y);
//     printf("(%d %d) \n", (*(sarr+4)).y, (*(sarr+4)).y);

// }

struct _point
{
    int x;
    int y;
};

void main()
{
    struct _point sarr[5] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
    struct _point *sp = sarr;

    printf("(%d %d) \n", sp[0].x, sp[0].y);
    printf("(%d %d) \n", sp[1].x, sp[1].y);
    printf("(%d %d) \n", sp[2].x, sp[2].y);
    printf("(%d %d) \n", sp[3].x, sp[3].y);
    printf("(%d %d) \n", sp[4].x, sp[4].y);
    puts("=====================");
    printf("(%d %d) \n", sp->x, sp->y);
    printf("(%d %d) \n", (sp+1)->x, (sp+1)->y);
    printf("(%d %d) \n", (sp+2)->x, (sp+2)->y);
    printf("(%d %d) \n", (sp+3)->x, (sp+3)->y);
    printf("(%d %d) \n", (sp+4)->x, (sp+4)->y);

}