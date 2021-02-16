// #include <stdio.h>
// #include <stdlib.h>

// typedef struct _node
// {
//     int data;
//     struct _node *link;
// }DATA, *PDATA;

// void main()
// {
//     PDATA head = NULL, p, n1, n2, n3;
    
//     head = n1 = (PDATA)malloc(sizeof(DATA));
//     n1->data = 10;
//     n1->link = NULL;

//     n2 = (PDATA)malloc(sizeof(DATA));
//     n2->data = 20;
//     n2->link = NULL;

//     n3 = (PDATA)malloc(sizeof(DATA));
//     n3->data = 30;
//     n3->link = NULL;
    
//     n1->link = n2;
//     n2->link = n3;

//     for(p=head;p;p=p->link)
//     {
//         printf("%d \n", p->data);
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct _node
// {
//     int data;
//     struct _node *link;
// }DATA, *PDATA;

// PDATA nodeAlloc(int data)
// {
//     PDATA p =(PDATA)malloc(sizeof(DATA));
//     p->data = data;
//     p->link = NULL;

//     return p;
// }

// PDATA insertNode(PDATA head, int data)
// {
//     PDATA p = head, n = nodeAlloc(data);

//     if(head ==NULL)
//         return n;
//     while(p->link)
//         p = p->link;
//     p->link =n;

//     return head;
// }

// PDATA deleteNode(PDATA head, int data)
// {
//     PDATA p = head, pp=NULL; // pp초기화 해줘야 함, 비쥬얼스튜디오에서는 아니면 속성> 일반에서 SDL검사 아니요로 변경해야함
    
//     while( p && p->data != data)
//     {
//         pp = p;
//         p = p->link;
//     }
//     if( p == NULL)
//         puts("자료가 없습니다");
//     else if( p == head )
//     {
//         head = p->link;
//         free(p);
//     }
//     else
//     {
//         pp->link = p->link;
//         free(p);
//     }
//     return head;
// }

// void printNode(PDATA p)
// {
//     for(;p;p=p->link)
//         printf("%d \n", p->data);
// }

// void main()
// {
//     PDATA head = NULL, p = NULL;
    
//     head = insertNode(head, 10);
//     head = insertNode(head, 20);
//     head = insertNode(head, 30);
//     head = insertNode(head, 40);
//     head = insertNode(head, 50);

//     printNode(head);

//     head = deleteNode(head, 30);
//     head = deleteNode(head, 10);

//     puts("=================");
//     printNode(head);
// }

// #define _CRT_SECURE_NO_WARNINGS

// #include <stdio.h>
// #include <stdlib.h>
// #include <conio.h>

// typedef struct _node
// {
//     int data;
//     struct _node *link;
// }DATA, *PDATA;

// PDATA nodeAlloc(int data)
// {
//     PDATA p = (PDATA)malloc(sizeof(DATA));
//     p->data = data;
//     p->link = NULL;

//     return p;
// }

// PDATA insertNode(PDATA head, int data)
// {
//     PDATA p = head, n = nodeAlloc(data);

//     if(head == NULL)
//         return n;
//     while(p->link)
//         p = p->link;
//     p->link = n;
    
//     return head;
// }

// PDATA deleteNode(PDATA head, int data)
// {
//     PDATA p = head, pp = NULL;
//     while(p && p->data != data)
//     {
//         pp = p;
//         p = p->link;
//     }
//     if(p == NULL)
//     {
//         puts("자료가 없었습니다.");
//     }
//     else if(p == head)
//     {
//         head = p->link;
//         free(p);
//     }
//     else
//     {
//         pp->link = p->link;
//         free(p);
//     }
//     return head;
// }

// void printNode(PDATA p)
// {
//     int i;
//     for(i=0; p; p =p->link, i++)
//         printf("%d : [%d] \n", i, p->data);
// }

// void menu()
// {
//     puts("");
//     puts("1. 정수 입력");
//     puts("2. 정수 삭제");
//     puts("3. 정수 출력");
//     puts("4. 종료");
//     puts("================");
// }

// void Input(PDATA *nHead)
// {
//     *nHead = insertNode(*nHead, rand()%1000);
//     puts("정수 입력 완료");
// }

// void Remove(PDATA *nHead)
// {
//     int n;

//     printf("삭제 할 정수를 입력하세요:");
//     scanf("%d", &n);
//     *nHead = deleteNode(*nHead, n);
// }

// void Output(PDATA nHead)
// {
//     printNode(nHead);
// }

// void main()
// {
//     PDATA nHead = NULL;
//     int bContinue = 1;
    
//     while(bContinue)
//     {
// 		menu();
// 		switch(_getch())
//         {
//             case '1' :
//                 Input(&nHead);
//                 break;
//             case '2' :
//                 Remove(&nHead);
//                 break;
//             case '3' :
//                 Output(nHead);
//                 break;
//             case '4' :
//                 bContinue = !bContinue;
//                 break;
                
//             default :
//                 puts("1~4까지 입력 가능합니다.");
//         }
//     }
// }

#include <stdio.h>
#include <stdlib.h>

typedef int STACKDATA;
#define ERROR_VALUE (STACKDATA)0xfffffff

typedef struct _node
{
    STACKDATA data;
    struct _node *link;
}DATA, *PDATA;

PDATA nodeAlloc(STACKDATA data)
{
    PDATA p = (PDATA)malloc(sizeof(DATA));
    p->data = data;
    p->link = NULL;

    return p;
}

PDATA insertNode(PDATA head, STACKDATA data)
{
    PDATA p = head, n = nodeAlloc(data);
    if(head == NULL)
     return n;
    n->link = head;

    return n;
}

PDATA deleteNode(PDATA head, STACKDATA *data)
{
    PDATA p = head;
    
    *data = head->data;

    p = head->link;

    free(head);
    return p;
}

void Push(PDATA *head, STACKDATA data)
{
    *head = insertNode(*head, data);
}

STACKDATA Pop(PDATA *head)
{
    int data;

    if(*head ==NULL)
    {
        puts("자료가 없습니다");
        return ERROR_VALUE;   
    }
    *head = deleteNode(*head, &data);

    return data;
}

void main()
{
    PDATA StackHead = NULL;
    
    Push(&StackHead, 100);
    Push(&StackHead, 200);
    Push(&StackHead, 300);

    printf("%d \n", Pop(&StackHead));
    printf("%d \n", Pop(&StackHead));
    printf("%d \n", Pop(&StackHead));

}