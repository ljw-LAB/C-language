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

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct _node
// {
//     int data;
//     struct _node* prev;
//     struct _node* next;

// }Node;

// typedef struct _list
// {
//     Node* head;
//     Node* tail;

// }List;

// Node* AllocNode(int data)
// {
//     Node* n = (Node*)malloc(sizeof(Node));
//     n->data = data;
//     n->prev = n->next = NULL;
//     return n;
// }

// void Initialize(List* lt)
// {
//     lt->head = NULL;
//     lt->tail = NULL;
// }

// void Uninitialize(List* lt)
// {
//     Node* cur = lt->head;
//     while(NULL != cur)
//     {
//         Node* nextCur =cur->next;
//         free(cur);
//         cur = nextCur;
//     }
// }

// void Add(List* lt, int data)
// {
//     Node* n = AllocNode(data);
//     if(NULL == lt->head)
//     {
//         lt->head = lt->tail = n;
//     }
//     else
//     {
//         lt->tail->next = n;
//         n->prev = lt->tail;
//         lt->tail = n;
//     }
// }

// void Print(List* lt)
// {
//     Node* cur;
    
//     for(cur = lt->head; NULL != cur ; cur = cur->next)
//         printf("%d ", cur->data);
//     printf("\n");
// }

// void main()
// {
//     List lt;

//     Initialize(&lt);

//     Add(&lt, 10);
//     Add(&lt, 20);
//     Add(&lt, 30);

//     Print(&lt);

//     Uninitialize(&lt);

// }

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct _node
// {
//     int data;
//     struct _node* prev;
//     struct _node* next;
// }Node;

// typedef struct _list
// {
//     Node* head;
//     Node* tail;
// }List;

// Node* AllocNode(int data)
// {
//     Node* n = (Node*)malloc(sizeof(Node));
//     n->data = data;
//     n->prev = n->next = NULL;
//     return n;
// }

// void Initialize(List* lt)
// {
//     lt->head = AllocNode(0);
//     lt->tail = AllocNode(0);

//     lt->head->next = lt->tail;
//     lt->tail->prev = lt->head;
// }

// void Uninitialize(List* lt)
// {
//     Node* cur = lt->head;
//     while( NULL != cur)
//     {
//         Node* nextCur = cur->next;
//         free(cur);
//         cur = nextCur;
//     }
// }

// void Add(List* lt, int data)
// {
//     Node* n = AllocNode(data);
//     Node* ptail = lt->tail->prev;
//     ptail->next = n;
//     n->prev = ptail;
//     n->next=lt->tail;
//     lt->tail->prev =n;
// }

// void Print(List* lt)
// {
//     Node* cur = lt->head->next;
//     for( ; lt->tail != cur ; cur = cur->next)
//         printf("%d ", cur->data);
//     printf("\n");
// }

// void main()
// {
//     List lt;

//     Initialize(&lt);
//     Add(&lt, 10);
//     Add(&lt, 20);
//     Add(&lt, 30);

//     Print(&lt);

//     Uninitialize(&lt);

// }

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct _node
// {
//     int data;
//     struct _node* prev;
//     struct _node* next;
// }Node;

// typedef struct _list
// {
//     Node* head;
//     Node* tail;
//     Node* current;
// }List;

// Node* AllocNode(int data)
// {
//     Node* n = (Node*)malloc(sizeof(Node));
//     n->data = data;
//     n->prev = n->next = NULL;

//     return n;
// }

// void Initialize(List* lt)
// {
//     lt->head = AllocNode(0);
//     lt->tail = AllocNode(0);

//     lt->head->next = lt->tail;
//     lt->tail->prev = lt->head;
// }

// void Uninitialize(List* lt)
// {
//     Node* cur = lt->head;
//     while( NULL != cur)
//     {
//         Node* nextCur = cur->next;
//         free(cur);
//         cur = nextCur;
//     }
// }


// void Add(List* lt, int data)
// {
//     Node* n = AllocNode(data);
//     Node* ptail = lt->tail->prev;
//     ptail->next = n;
//     n->prev = ptail;
//     n->next=lt->tail;
//     lt->tail->prev =n;
// }

// void Reset(List* lt)
// {
//     lt->current =lt->head->next;
// }

// int GetItem(List* lt)
// {
//     return lt->current->data;
// }

// void Next(List* lt)
// {
//     lt->current = lt->current->next;
// }

// int HasNext(List* lt)
// {
//     return lt->current != lt->tail;
// }

// void main()
// {
//     List lt;

//     Initialize(&lt);
//     Add(&lt ,10);
//     Add(&lt ,20);
//     Add(&lt ,30);

//     for(Reset(&lt); HasNext(&lt); Next(&lt))
//         printf("%d ", GetItem(&lt));
//     printf("\n");

//     Uninitialize(&lt);
// }

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct _node
// {
//     int data;
//     struct _node* prev;
//     struct _node* next;
// }Node;

// typedef struct _list
// {
//     Node* head;
//     Node* tail;
//     Node* current;
// }List;

// Node* AllocNode(int data)
// {
//     Node* n = (Node*)malloc(sizeof(Node));
//     n->data = data;
//     n->prev = n->next = NULL;

//     return n;
// }

// void Initialize(List* lt)
// {
//     lt->head = AllocNode(0);
//     lt->tail = AllocNode(0);

//     lt->head->next = lt->tail;
//     lt->tail->prev = lt->head;
// }

// void Uninitialize(List* lt)
// {
//     Node* cur = lt->head;
//     while( NULL != cur)
//     {
//         Node* nextCur = cur->next;
//         free(cur);
//         cur = nextCur;
//     }
// }

// void Add(List* lt, int data)
// {
//     Node* n = AllocNode(data);
//     Node* ptail = lt->tail->prev;
//     ptail->next = n;
//     n->prev = ptail;
//     n->next=lt->tail;
//     lt->tail->prev =n;
// }

// void Remove(List* lt)
// {
//     Node* prevCur = lt->current->prev;
//     Node* nextCur = lt->current->next;

//     prevCur->next = nextCur;
//     nextCur->prev = prevCur;

//     free(lt->current);
// }

// void Insert(List* lt, int data)
// {
//     Node *n = AllocNode(data);
//     Node *prevCur = lt->current->prev;

//     prevCur->next = n;
//     n->prev = prevCur;
//     n->next = lt->current;
//     lt->current->prev = 0;
// }

// void Reset(List* lt)
// {
//     lt->current = lt->head->next;
// }

// int GetItem(List* lt)
// {
//     return lt->current->data;
// }

// void Next(List* lt)
// {
//     lt->current = lt->current->next;
// }

// int HasNext(List* lt)
// {
//     return lt->current != lt->tail;
// }

// void Print(List* lt)
// {
//     for(Reset(lt) ; HasNext(lt) ; Next(lt))
//         printf("%d ", GetItem(lt));
//     printf("\n");
// }

// void main()
// {
//     List lt;

//     Initialize(&lt);
//     Add(&lt ,10);
//     Add(&lt ,20);
//     Add(&lt ,30);

//     for(Reset(&lt); HasNext(&lt); Next(&lt))
//         if(20 == GetItem(&lt))
//             break;
//     Insert(&lt, 90);
//     Print(&lt);
//     for(Reset(&lt); HasNext(&lt); Next(&lt))
//         if(90 == GetItem(&lt))
//             break;
//     Remove(&lt);
//     Print(&lt);

//     Uninitialize(&lt);
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
    Node* current;
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
    lt->head = AllocNode(0);
    lt->tail = AllocNode(0);
    lt->head->next = lt->tail;
    lt->tail->prev = lt->head;
}

void Uninitialize(List* lt)
{
    Node* cur = lt->head;
    while( NULL != cur)
    {
        Node* nextCur = cur->next;
        free(cur);
        cur = nextCur;
    }
}

void AddTail(List* lt, int data)
{
    Node* n = AllocNode(data);
    Node* ptail = lt->tail->prev;
    ptail->next = n;
    n->prev = ptail;
    n->next = lt->tail;
    lt->tail->prev = n;
}

void AddHead(List* lt, int data)
{
    Node* n = AllocNode(data);
    Node* nhead = lt->head->next;
    lt->head->next = n;
    n->prev =lt->head;
    n->next = nhead;
    nhead->prev = n;
}

void RemoveTail(List* lt)
{
    Node* ptail = lt->tail->prev;
    Node* pptail = ptail->prev;
    pptail->next = lt->tail;
    lt->tail->prev = pptail;
}

void RemoveHead(List* lt)
{
    Node* nhead = lt->head->next;
    Node* nnhead = nhead->next;

    lt->head->next =nnhead;
    nnhead->prev = lt->head;

    free(nhead);
}

void Remove(List* lt)
{
    Node* prevCur = lt->current->prev;
    Node* nextCur = lt->current->next;

    prevCur->next = nextCur;
    nextCur->prev = prevCur;

    free(lt->current);
}

void Insert(List* lt, int data)
{
    Node* n = AllocNode(data);
    Node* prevCur = lt->current->prev;

    prevCur->next = n;
    n->prev =prevCur;
    n->next = lt->current;
    lt->current->prev = n;
}

int GetItem(List* lt)
{
    return lt->current->data;
}

void ResetTailPos(List* lt)
{
    lt->current = lt->tail->prev;
}

void Previous(List* lt)
{
    lt->current = lt->current->prev;
}

int HasPrevious(List* lt)
{
    return lt->current != lt->head;
}

void ResetHeadPos(List* lt)
{
    lt->current = lt->head->next;
}

void Next(List* lt)
{
    lt->current = lt->current->next;
}

int HasNext(List* lt)
{
    return lt->current != lt->tail;
}

void PrintPrevious(List* lt)
{
    printf("prev : ");
    for(ResetTailPos(lt); HasPrevious(lt) ; Previous(lt))
        printf("%d ", GetItem(lt));   
    printf("\n");
}

void PrintNext(List* lt)
{
    printf("next : ");
    for(ResetHeadPos(lt); HasNext(lt) ; Next(lt))
        printf("%d ", GetItem(lt));
    printf("\n");
}

void main()
{
    List lt;

    Initialize(&lt);
    AddTail(&lt, 10);
    AddTail(&lt, 20);
    AddTail(&lt, 30);

    PrintNext(&lt);
    PrintPrevious(&lt);

    AddHead(&lt, 100);
    AddHead(&lt, 200);
    AddHead(&lt, 300);

    PrintNext(&lt);
    PrintPrevious(&lt);

    Uninitialize(&lt);

}