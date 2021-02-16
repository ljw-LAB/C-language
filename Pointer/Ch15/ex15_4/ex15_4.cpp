#include <stdio.h>
#include <stdlib.h>

// typedef struct _node
// {
//     int data;
//     struct _node* prev;
//     struct _node* next;
// }Node;

// Node* AllocNode(int data)
// {
//     Node *n = (Node *)malloc(sizeof(Node));
//     n->data = data;
//     n->prev = n->next = NULL;
//     return n;
// }

// void main()
// {
//     Node* p = AllocNode(10);
//     printf("%d \n", p->data);
//     free(p);
// }

// typedef struct _node
// {
//     int data;
//     struct _node* prev;
//     struct _node* next;
// }Node;

// Node* AllocNode(int data)
// {
//     Node *n = (Node *)malloc(sizeof(Node));
//     n->data = data;
//     n->prev = n->next = NULL;
//     return n;
// }

// void main()
// {
//     Node* head = NULL;
//     Node* p = NULL;

//     p = AllocNode(10);
//     head = p;

//     p = AllocNode(20);
//     head->next = p;
//     p->prev = head->next;

//     p = AllocNode(30);
//     head->next->next = p;
//     p->prev = head->next;

//     printf("%d \n", head->data);
//     printf("%d \n", head->next->data);
//     printf("%d \n", head->next->next->data);

//     free(head->next->next);
//     free(head->next);
//     free(head);    

// }

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct _node
// {
//     int data;
//     struct _node* prev;
//     struct _node* next;
// }Node;

// Node* AllocNode(int data)
// {
//     Node* n = (Node*)malloc(sizeof(Node));
//     n->data = data;
//     n->prev = n->next = NULL;
//     return n;
// }

// void main()
// {
//     Node* head = NULL;
//     Node* tail = NULL;
//     Node* p = NULL;

//     p = AllocNode(10);
//     head = tail = p;

//     p = AllocNode(20);
//     tail->next = p;
//     p->prev = tail;
//     tail = p;

//     p = AllocNode(30);
//     tail->next = p;
//     p->prev =tail;
//     tail = p;

// 	printf("%d \n", head->data);
// 	printf("%d \n", head->next->data);
// 	printf("%d \n", head->next->next->data);

// 	free(head->next->next);
// 	free(head->next);
// 	free(head);
// }

#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
    int data;
    struct _node* prev;
    struct _node* next;

}Node;

typedef struct _list
{
    Node* head;
    Node* tail;

}List;

Node* AllocNode(int data)
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->data = data;
    n->prev = n->next = NULL;
    return n;
}

void Initialize(List* lt)
{
    lt->head = NULL;
    lt->tail = NULL;
}

void Uninitialize(List* lt)
{
    Node* cur = lt->head;
    while(NULL != cur)
    {
        Node* nextCur =cur->next;
        free(cur);
        cur = nextCur;
    }
}

void Add(List* lt, int data)
{
    Node* n = AllocNode(data);
    if(NULL == lt->head)
    {
        lt->head = lt->tail = n;
    }
    else
    {
        lt->tail->next = n;
        n->prev = lt->tail;
        lt->tail = n;
    }
}

void Print(List* lt)
{
    Node* cur;
    
    for(cur = lt->head; NULL != cur ; cur = cur->next)
        printf("%d ", cur->data);
    printf("\n");
}

void main()
{
    List lt;

    Initialize(&lt);

    Add(&lt, 10);
    Add(&lt, 20);
    Add(&lt, 30);

    Print(&lt);

    Uninitialize(&lt);

}