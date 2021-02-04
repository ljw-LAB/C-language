#include <stdio.h>
#pragma pack(1)

struct _data1
{
    char c;
    int n;/* data */
};

struct _data2
{
    short s;
    int n;/* data */
};

struct _data3
{
    int n1;
    int n2;/* data */
};

void main()
{
    struct _data1 d1 = {'A', 1};
    struct _data2 d2 = {10, 10};
    struct _data3 d3 = {100, 100};
    
    printf("%d %d \n", sizeof(struct _data1), sizeof(d1));
    printf("%d %d \n", sizeof(struct _data2), sizeof(d2));
    printf("%d %d \n", sizeof(struct _data3), sizeof(d3));

}