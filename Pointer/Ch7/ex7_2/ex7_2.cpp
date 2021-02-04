#include <stdio.h>

// struct _point
// {
//     int x;
//     int y;
// };


// void main()
// {
//     struct _point s1 = {1, 1};
//     struct _point *sp = &s1;
//     struct _point **spp = &sp;

//     printf("(%d, %d) \n", s1.x, s1.y);
//     printf("(%d, %d) \n", sp->x, sp->y);
//     printf("(%d, %d) \n", (*spp)->x, (*spp)->y);
//     printf("(%d, %d) \n", (**spp).x, (**spp).y);
    
// }

// struct _point
// {
//     int x;
//     int y;
// };

// void main()
// {
//     struct _point s1 = {1, 1};
//     struct _point *sp = &s1;
//     struct _point **spp = &sp;

//     printf("%d %d %d \n", sizeof(s1), sizeof(sp), sizeof(spp));
//     printf("%x %x %x %x \n", &s1, sp, spp, &spp);
//     printf("%x %x %x %x \n", &s1+1, sp+1, spp+1, &spp+1);
// }

// struct _point
// {
//     int x;
//     int y;
// };

// void main()
// {
//     struct _point sarr[2][2] = {{{0,0},{1,1}}, {{2,2}, {3,3}}};
    
//     printf("(%d, %d) (%d, %d) \n", sarr[0][0].x, sarr[0][0].y, sarr[0][1].x, sarr[0][1].y);
//     printf("(%d, %d) (%d, %d) \n", sarr[1][0].x, sarr[1][0].y, sarr[1][1].x, sarr[1][1].y);

//     sarr[0][0].x = sarr[0][0].y = 2;
//     sarr[0][1].x = sarr[0][1].y = 1;
//     sarr[1][0].x = sarr[1][0].y = 1;
//     sarr[1][1].x = sarr[1][1].y = 2;

//     puts("===========");

//     printf("(%d, %d) (%d, %d) \n", sarr[0][0].x, sarr[0][0].y, sarr[0][1].x, sarr[0][1].y);
//     printf("(%d, %d) (%d, %d) \n", sarr[1][0].x, sarr[1][0].y, sarr[1][1].x, sarr[1][1].y);

// }

// struct _point
// {
//     int x;
//     int y;
// };

// void main()
// {
//     struct _point sarr[2][2] = {{{0,0},{1,1}}, {{2,2}, {3,3}}};

//     printf("%x %x %x \n", sarr, sarr[0], sarr[1]);
//     printf("%x %x %x \n", sarr+1, sarr[0]+1, sarr[1]+1);
//     puts("================");
//     printf("(%d, %d) (%d, %d) \n", sarr[0][0].x, sarr[0][0].y, sarr[0][1].x, sarr[0][1].y);
//     printf("(%d, %d) (%d, %d) \n", sarr[0][2].x, sarr[0][2].y, sarr[0][3].x, sarr[0][3].y);
//     puts("================");
//     printf("(%d, %d) (%d, %d) \n", sarr[1][-2].x, sarr[1][-2].y, sarr[1][-1].x, sarr[1][-1].y);
//     printf("(%d, %d) (%d, %d) \n", sarr[1][0].x, sarr[1][0].y, sarr[1][1].x, sarr[1][1].y);

// }

struct _point
{
    int x;
    int y;
};

void main()
{
    struct _point sarr[2][2] = {{{0,0},{1,1}}, {{2,2}, {3,3}}};
    struct _point (*ap)[2] = (struct _point (*)[2])sarr;
    
    printf("%x %x %x \n", ap, ap[0], ap[1]);
    printf("%x %x %x \n", ap+1, ap[0]+1, ap[1]+1);
    puts("=============");
    printf("(%d, %d) (%d, %d) \n", ap[0][0].x, ap[0][0].y, ap[0][1].x, ap[0][1].y);
    printf("(%d, %d) (%d, %d) \n", ap[1][0].x, ap[1][0].y, ap[1][1].x, ap[1][1].y);
    
}