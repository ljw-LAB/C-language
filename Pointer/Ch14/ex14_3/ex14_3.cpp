#define _CRT_SECURE_NO_WARNINGS

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <conio.h>

// typedef enum { INT, DOUBLE, STRING }ENUMTYPE;

// typedef struct _sData
// {
// 	ENUMTYPE type;
// 	void *vp;
// }DATA, *PDATA;

// void menu()
// {
// 	puts("");
// 	puts("1. 자료 등록");
// 	puts("2. 자료 삭제");
// 	puts("3. 자료 출력");
// 	puts("4. 종료");
// 	puts("=====================");
// }

// char *InPutStr()
// {
// 	char temp[100];
// 	char *str;

// 	fflush(stdin);
// 	gets_s(temp);
// 	str = (char *)malloc(sizeof(char)*strlen(temp) + 1);
// 	strcpy(str, temp);

// 	return str;
// }

// PDATA Input()
// {
// 	PDATA p = (PDATA)malloc(sizeof(DATA));

// 	printf("자료의 종류를 입력하세요. [정수 : 1, 실수 : 2, 문자열 : 3] \n");
// _start:
// 	switch (_getche())
// 	{
// 	case '1':
// 		printf("\n 정수를 입력하세요 : ");
// 		p->type = INT;
// 		p->vp = malloc(sizeof(int));
// 		scanf("%d", p->vp);
// 		break;

// 	case '2':
// 		printf("\n 실수를 입력하세요 : ");
// 		p->type = DOUBLE;
// 		p->vp = malloc(sizeof(double));
// 		scanf("%lf", p->vp);
// 		break;

// 	case '3':
// 		printf("\n 문자열을 입력하세요 : ");
// 		p->type = STRING;
// 		p->vp = InPutStr();
// 		break;

// 	default:
// 		puts("1~3까지 입력 가능합니다 : ");
// 		goto _start;
// 	}
// 	return p;
// }

// void Freememory(PDATA p)
// {
// 	free(p->vp);
// 	free(p);
// }

// void Remove(PDATA dArray[], int *sCount)
// {
// 	int idx;

// 	if (*sCount == 0)
// 		return;

// 	printf("삭제할 index를 입력하세요.:");
// 	scanf("%d", &idx);

// 	if (idx < 0 || *sCount <= idx)
// 		return;
// 	Freememory(dArray[idx]);
// 	--*sCount;
// 	for (; idx < *sCount; idx++)
// 		dArray[idx] = dArray[idx + 1];
// }

// void Output(PDATA dArray[], int sCount)
// {
// 	int i;
// 	for (i = 0; i < sCount; i++)
// 	{
// 		switch (dArray[i]->type)
// 		{
// 		case INT:
// 			printf("%d : 정수 [%d] \n", i, *(int *)dArray[i]->vp);
// 			break;

// 		case DOUBLE:
// 			printf("%d : 실수 [%.5lf] \n", i, *(double *)dArray[i]->vp);
// 			break;

// 		case STRING:
// 			printf("%d : 문자열 [%s] \n", i, (char *)dArray[i]->vp);

// 			break;
// 		}
// 	}
// }

// void main()
// {
// 	PDATA dArray[100];
// 	int sCount = 0, bContinue = 1;
// 	printf("안녕");
// 	while (bContinue)
// 	{
// 		menu();
// 		switch (_getch())
// 		{
// 		case '1':
// 			if (sCount < 100)
// 				dArray[sCount++] = Input();
// 			break;
// 		case '2':
// 			Remove(dArray, &sCount);
// 			break;
// 		case '3':
// 			Output(dArray, sCount);
// 			break;
// 		case '4':
// 			bContinue = !bContinue;
// 			break;
// 		default:
// 			puts("1~4까지 입력 가능합니다.");
// 		}
// 	}
// }

#include <stdio.h>

typedef union
{
    struct{unsigned char b1; unsigned char b2; unsigned char b3; unsigned char b4; }byte;
    struct{unsigned short w1; unsigned short w2;}word;
    unsigned long dword;

} UBYTE4;

void main()
{
    UBYTE4 data;
    
    data.dword = 0x44434241;

    printf("%x \n", data.dword);
    printf("%x%x \n", data.word.w2,data.word.w1);
    printf("%x%x%x%x \n", data.byte.b4, data.byte.b3, data.byte.b2, data.byte.b1);
    puts("====================");
    
    data.byte.b1 = 0x11;
    data.byte.b2 = 0x22;
    data.byte.b3 = 0x33;
    data.byte.b4 = 0x44;

    printf("%x \n", data.dword);
    printf("%x%x \n", data.word.w2,data.word.w1);
    printf("%x%x%x%x \n", data.byte.b4, data.byte.b3, data.byte.b2, data.byte.b1);
    puts("====================");

    printf("%d %d \n", sizeof(UBYTE4), sizeof(data));
    printf("%d %d \n", sizeof(data.word.w1), sizeof(data.word.w2));
    printf("%d %d \n", sizeof(data.byte.b1), sizeof(data.byte.b2));

}