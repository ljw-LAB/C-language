#include <stdio.h>
#include <stdlib.h>

#include "List.h"

typedef struct _queue
{
    List lt;
}Q;

void* AllocData(int data)
{
    int *p = (int *)malloc(sizeof(int));
    *p = data;

    return p;
}

void FreeData(void *p)
{
    free(p);
}

void Initialize(Q* q)
{
    Initialize(&q->lt);
}

void Uninitialize(Q *q)
{
    Uninitialize(&q->lt);   
}

void AddQueue(Q* q, int data)
{
    Add(&q->lt, AllocData(data));
}

int DeleteQueue(Q* q)
{
    int* pdata;
    int data;
    Reset(&q->lt);
    pdata = (int*)GetItem(&q->lt);

    data = *pdata;
    FreeData(pdata);
    Remove(&q->lt);

    return data;
}

void main()
{
    Q q;
    Initialize(&q);

    AddQueue(&q, 10);
    AddQueue(&q, 20);
    AddQueue(&q, 30);

    printf("%d \n", DeleteQueue(&q));
    printf("%d \n", DeleteQueue(&q));
    printf("%d \n", DeleteQueue(&q));
 
    Uninitialize(&q);
}