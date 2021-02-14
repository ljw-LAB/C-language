#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// typedef struct _sData
// {
//     char str1[20];
//     char str2[20];
// }DATA, *PDATA;


// void main()
// {
//     DATA data1= {"abc", "ABC"}, data2= {"def", "DEF"};

//     printf("%s %s \n", data1.str1, data1.str2);
//     printf("%s %s \n", data2.str1, data2.str2);

//     gets_s(data1.str1);
//     gets_s(data1.str2);

//     printf("%s %s \n", data1.str1, data1.str2);

// }

// typedef struct _sData
// {
//     char *str1;
//     char *str2;
// }DATA, *PDATA;

// void main()
// {
//     DATA data1= {"abc", "ABC"}, data2= {"def", "DEF"};
//     printf("%s %s \n", data1.str1, data1.str2);
//     printf("%s %s \n", data2.str1, data2.str2);

//     gets_s(data1.str1);
//     gets_s(data1.str2);

//     printf("%s %s \n", data1.str1, data1.str2);
// }

// #include <string.h>
// #include <stdlib.h>

// typedef struct _sData
// {
//     char *str1;
//     char *str2;

// }DATA, *PDATA;

// void main()
// {
//     DATA data1 ={"abc", "ABC"}, data2 ={"def", "DEF"};
//     char temp[100];

//     printf("%s %s \n", data1.str1, data1.str2);
//     printf("%s %s \n", data2.str1, data2.str2);

//     memset(temp, 0, sizeof(char)*100);
//     gets_s(temp);
//     data1.str1 = (char *)malloc(strlen(temp)+1);
//     strcpy(data1.str1, temp);

//     memset(temp, 0, sizeof(char)*100);
//     gets_s(temp);
//     data1.str2 = (char *)malloc(strlen(temp)+1);
//     strcpy(data1.str2, temp);

//     printf("%s %s \n", data1.str1, data1.str2);
// }

// #include <string.h>
// #include <stdlib.h>

// typedef struct _sData
// {
//     char *str1;
//     char *str2;

// }DATA, *PDATA;

// char *InputStr()
// {
//     char temp[100] = {0};
//     char *str;

//     gets_s(temp);
//     str = (char *)malloc(strlen(temp)+1);
//     strcpy(str, temp);

//     return str;
// }

// void main()
// {
//     DATA data1 ={"abc", "ABC"}, data2 ={"def", "DEF"};
    
//     printf("%s %s \n", data1.str1, data1.str2);
//     printf("%s %s \n", data2.str1, data2.str2);

//     data1.str1 = InputStr();
//     data1.str2 = InputStr();

//     printf("%s %s \n", data1.str1, data1.str2);

// }

// #include <string.h>
// #include <stdlib.h>

// typedef struct _sData
// {
//     char *smallStr;
//     char *largeStr;
// }DATA, *PDATA;

// char AlphaRandSmall()
// {
//     return rand()%26 + 'a';
// }

// char AlphaRandLarge()
// {
//     return rand()%26 + 'A';
// }

// char *StrRand(int type, int n)
// {
//     char temp[20] = {0};
//     char *str;
//     int i;

//     if( type == 1)
//     {
//         for(i = 0 ; i < n; i++)
//             temp[i] = AlphaRandSmall();
//     }
//     else if( type == 2)
//     {
//         for(i = 0 ; i < n; i++)
//             temp[i] = AlphaRandLarge();
//     }
//     else
//         return NULL;

//     str = (char *)malloc(strlen(temp)+1);
//     strcpy(str, temp);
//     return str;
// }

// void main()
// {
//     DATA darr[10];
//     int i;
    
//     for(i=0; i < 10 ; i++)
//     {
//         darr[i].smallStr = StrRand(1, rand()%5+6);
//         darr[i].largeStr = StrRand(2, rand()%5+6);
//     }
//     for(i=0; i < 10 ; i++)
//         printf("%-20s %-20s \n", darr[i].smallStr, darr[i].largeStr);
//     puts("====================");
//     for(i=0; i < 10 ; i++)
//         printf("%-20s %-20s \n", (darr+i)->smallStr, (darr+i)->largeStr);
//     puts("====================");
// }

#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct _person
{
    char *name;
    char *phone;
    int age;
}PEROSON, *PRESON;

void menu()
{
    puts("");
    puts("1. 전화번호 등록");
    puts("2. 전화번호 삭제");
    puts("3. 전화번호 출력");
    puts("4. 전화번호 정렬");
    puts("5. 종료");

}

char *InputStr()
{
    char temp[100];
    char *str;

    gets_s(temp);
    str = (char *)malloc(sizeof(char)*strlen(temp)+1);
    strcpy(str, temp);

    return str;
}

PRESON InputPerson()
{
    PRESON p = (PRESON)malloc(sizeof(PEROSON));

    fflush(stdin);
    printf("이름을 입력하세요 :");
    p->name = InputStr();

    printf("전화번호를 입력하세요 :");
    p->phone = InputStr();

    printf("나이를 입력하세요 :");
    scanf("%d", &p->age);
    
    return p;
}

void Freemomory(PRESON p)
{
    free(p->name);
    free(p->phone);
    free(p);
}

void Remove(PRESON strAraay[], int *sCount)
{
    char name[100];
    int i;

    if(*sCount ==0)
        return;
    
    printf("이름을 입력하세요 :");
    gets_s(name);

    for(i = 0; i < *sCount; i++)
    {
        if(strcmp(strAraay[i]->name, name) == 0)
        {
            Freemomory(strAraay[i]);
            -- *sCount;
            for(; i < *sCount; i++)
                strAraay[i] = strAraay[i+1];
                break;
        }
    }
}

void Output(PRESON perArray[], int sCount)
{
    int i;
    for(i = 0; i < sCount ; i++)
        printf("[%d] : %s, %s, %d \n", i, perArray[i]->name, perArray[i]->phone, perArray[i]->age);
}

void swap(PRESON *a, PRESON *b)
{
    PRESON temp = *a;
    *a = *b;
    *b = temp;
}

void Sort(PRESON perArray[], int sCount)
{
    int i, j, min;

    for(i = 0; i < sCount ; i++)
    {
        for(min = i, j = i+1; j < sCount ; j++)
        {
            if(strcmp(perArray[j]->name , perArray[min]->name) < 0 )
                min = j;
        }
        swap(&perArray[i], &perArray[min]);
    }
}

void main()
{
    PRESON personArray[100];
    int sCount = 0, bContinue = 1;

    while(bContinue)
    {
        menu();
        switch(_getch())
        {
            case '1' :
                if(sCount < 100)
                    personArray[sCount++] = InputPerson();
                break;
            case '2' :
                Remove(personArray, &sCount);
                break;
            case '3' :
                Output(personArray, sCount);
                break;
            case '4' :
                Sort(personArray, sCount);
                break;
            case '5' :
                bContinue = !bContinue;
                break;
            default :
                puts("1~5까지 입력 가능합니다.");
        }
    }
}