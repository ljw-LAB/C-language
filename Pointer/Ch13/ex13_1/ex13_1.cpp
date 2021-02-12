#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// void main()
// {
//     char *str1 = "ABCDE";
//     char str2[100];

//     strcpy(str2, str1);

//     printf("%s %s \n", str1, str2);
// }

// void main()
// {
//     char *str1 = "ABCDE";
//     char str2[100];

//     strcpy(str2, str1+2);
//     printf("%s %s \n", str1, str2);
// }

// void main()
// {
//     char *str1 = "ABCDE";
//     char *str2 =NULL;

//     strcpy(str2, str1); //에러 str2에 공간이 확보가 안된상태임, 첫번째 인자는 포인터 변수로 시작주소를 가리키는 곳임
//      포인터로 선언했을 때는 문자열을 넣을 공간은 확보하지 않고 단지 문자열이 있는 주소를 넣을 공간만 확보할 뿐이다
//     printf("%s %s \n",str1, str2);
// }

// void main()
// {
//     char *str1 = "ABCDE";
//     char *str2 = "12345";

//     //strcpy(str2, str1);
//     printf("%s %s \n", str1 ,str2);
//     /*
//         문자열 상수인 char *name = "abcd" 인 경우
//         name이라는 이름을 가진 하나의 포인터가 "abcd"라는 문자열 상수를 가리키게 된다
//         따라서 상수를 참조하게 되므로 문자열 수정이 불가능
//         문자열인 char name[5]="abcd"인 경우
//         메모리를 직접 할당한 문자열. 즉, 배열참조형식 이므로 문자열수정이 가능 
//         출처: https://kant0116.tistory.com/21 [Kant's Game Programming]
//     */
// }

// void main()
// {
//     char *str1 = "ABC";
//     char str2[100] = {0};

//     strcat(str2, str1);
//     printf("%s %s \n", str1 ,str2);
//     strcat(str2, str1);
//     printf("%s %s \n", str1 ,str2);
// }

// void main()
// {
//     char *str1 = "ABCDE";
//     char str2[100];
//     //char str2[100] = {0};

//     strcat(str2, str1);
//     printf("%s %s \n", str1, str2 );
    
// }

//  void main()
//  {
//      char *str1 = "ABCDE";
//      char str2[5] = "1234";
//      //char str2[100] = {0};

//      strcat(str2, str1);
//      printf("%s %s \n", str1, str2 );
    
//  }

// void main()
// {
//     char *str ="ABCDE";
//     printf("%d \n", strlen(str));
// }

// void main()
// {
//     char *str ="ABCDE";
//     printf("%d \n", strlen(str+2));
// }

// void main()
// {
//     char *str1 = "ABCDE";
//     char *str2 = "ABDDE";
    
//     printf("%d \n", strcmp(str1, str2));

//         if(strcmp(str1, str2) == 0 )
//             puts("TRUE");
//         else
//             puts("FALSE");
// }

// void main()
// {
//     char *str1 ="ABCDE";
//     char str2[100] ="ABCDE";

//     if(str1 == str2)
//     {
//         puts("TRUE");
//     }
//     else
//     {
//         puts("FALSE");
//     }
//     if(strcmp(str1, str2) == 0 )
//         puts("TRUE");
//     else
//         puts("FALSE");
// }
#include <conio.h>

void menu()
{
    puts("");
    puts("1. 문자열 입력");
    puts("2. 문자열 삭제");
    puts("3. 문자열 출력");
    puts("4. 문자열 정렬");
    puts("5. 종료");
    puts("==================");

}

char *Input()
{
    char temp[100];
    char *str;
    printf("100자 이하의 문자를 입력하세요 :");
    gets_s(temp);
    str = (char *)malloc(sizeof(char)*strlen(temp)+1);
    strcpy(str, temp);

    return str;
}

void Remove(char *strArray[], int *sCount)
{
    char temp[100];
    int i;

    if( *sCount == 0)
        return;
    printf("삭제할 문자열을 입력하세요:");
    gets_s(temp);
    for(i = 0; i< *sCount ; i++)
    {
        if(strcmp(strArray[i], temp) == 0 )
        {
            free(strArray[i]);
            --*sCount;
            for( ; i < *sCount ; i++)
                strArray[i] = strArray[i+1];
                break;               
        }
    }
}

void Output(char *strArray[], int sCount)
{
    int i;
    for(i = 0 ; i < sCount ; i++)
        printf("%d : %s \n", i, strArray[i]);
}

void swap(char **a, char **b)
{
    char *temp = *a;
    *a = *b;
    *b = temp;
}

void Sort(char *strArray[], int sCount)
{
    int i, j, min;
    
    for(i = 0; i < sCount-1; i++)
    {
        for(min = i, j= i+1; j < sCount ; j++)
        {
            if(strcmp(strArray[j], strArray[min]) < 0)
                min = j;
        }
        swap(&strArray[i], &strArray[min]);
    }
}

void main()
{
    char *strArray[100];
    int sCount = 0, bContinue = 1;

    while(bContinue)
    {
        menu();
        switch(_getch())
        {
            case '1':
                if(sCount < 100)
                    strArray[sCount++] = Input();
                break;
            
            case '2':
                Remove(strArray, &sCount);
                break;
            
            case '3':
                Output(strArray, sCount);
                break;
            
            case '4':
                Sort(strArray, sCount);
                break;
            
            case '5':
                bContinue = !bContinue;
                break;
            default :
                puts("1~5까지 입력 가능합니다.");
        }

    }   

}