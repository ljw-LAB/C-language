#include <stdio.h>

// struct _node
// {
//     int data;
//     struct _node *link;
// };

// void main()
// {
//     struct _node n1, n2, n3;

//     n1.data = 10;
//     n1.link = &n2;

//     n2.data = 20;
//     n2.link = &n1;
    
//     n3.data = 30;
//     n3.link = &n3;
    
//     printf("%x %x %x \n", &n1, &n2, &n3);
//     printf("%x %x %x \n", n1.link, n2.link, n3.link);
//     printf("%d %d %d \n", n1.data, n2.data, n3.data);
//     printf("%d %d %d \n", n1.link->data, n2.link->data, n3.link->data);
//     printf("%d %d %d \n", n1.link->link->data, n2.link->link->data, n3.link->link->data);

// }

struct _node
{
    int data;
    struct _node *link;
};

void main()
{
    struct _node n5 ={50, NULL}, n4 ={40, NULL}, n3 ={30, NULL}, n2 ={20, NULL}, n1 ={10, NULL};
    struct _node *p =NULL;

    p = &n1;
    n1.link = &n2;
    n2.link = &n3;
    n3.link = &n4;
    n4.link = &n5;

    printf("%x %x %x %x %x %x \n", &p, &n1, &n1, &n3, &n4, &n5);

    printf("%d \n", p->data);
    p = p->link;
    printf("%d \n", p->data);
    p = p->link;
    printf("%d \n", p->data);
    p = p->link;
    printf("%d \n", p->data);
    p = p->link;
    printf("%d \n", p->data);
    p = p->link;

}