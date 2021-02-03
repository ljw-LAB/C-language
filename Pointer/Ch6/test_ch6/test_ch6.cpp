#include <stdio.h>

// struct _point
// {
//     int x;
//     int y;

// };

// void main()
// {
//     struct _point p1;
//     //p1 = {10, 10};
//     p1.x = 10;
//     p1.y = 10;

//     printf("%d, %d \n", p1.x, p1.y);
// }

// struct _point
// {
//     int x;
//     int y;

// };

// void main()
// {
//     struct _point p1;
    
//     printf("%d \n", sizeof(struct _point));         // 8
//     printf("%x \n", &p1);                           // if 12ff78
//     puts("==============");
//     printf("%x %x %x \n", &p1, &p1.x, &p1.y);       // 12ff78 12ff78 12ff7c
//     printf("%x %x %x \n", &p1+1, &p1.x+1, &p1.y+1); // 12ff80 12ff7c 12ff80
    
// }

// union _upoint
// {
//     int x;
//     int y;

// };


// void main()
// {
//     union _upoint u1;
//     u1.x = 10;
//     u1.y = 20; // 나중에 선언된값을 공유함
// 	//u1.x = 10;

//     printf("%d %d \n", u1.x, u1.y);
// }

union _upoint
{
    int x;
    int y;
    //double y;

};

void main()
{
    union _upoint u1;

    u1.x = 10;
    u1.y = 20;

    printf("%d \n", sizeof(union _upoint));         // 4
    printf("%x \n", &u1);                           // if 12ff7c
    puts("=================");
    printf("%x %x %x \n", &u1, &u1.x, &u1.y);       // 12ff7c 12ff7c 12ff7c 
    printf("%x %x %x \n", &u1+1, &u1.x+1, &u1.y+1); // 12ff80 12ff80 12ff80

}