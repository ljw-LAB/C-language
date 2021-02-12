#define _CRT_SECURE_NO_WARNINGS

// #include <stdio.h>
// #include <string.h>

// void main()
// {
//     wchar_t *str1 = L"ABC";
//     wchar_t str2[100];
//     wcscpy(str2, str1);
//     wprintf(L"%s %s \n", str1, str2);
// }

// void main()
// {
//     wchar_t *str1 = L"AB";
//     wchar_t str2[100] = L"abc";

//     wprintf(L"len : %d, %d \n", wcslen(str1), wcslen(str2)); 
//     wprintf(L"str1, str2 : %d \n", wcscmp(str1, str2));
//     wcscat(str2, str1);
//     wprintf(L"%s %s \n", str1, str2);
// }

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void menu()
{
    _putws(L"");
    _putws(L"1. 문자열 입력");
    _putws(L"2. 문자열 삭제");
    _putws(L"3. 문자열 출력");
    _putws(L"4. 문자열 정렬");
    _putws(L"5. 종료");
    _putws(L"==================");

}

wchar_t* Input()
{
    wchar_t temp[100];
    wchar_t* str;
    wprintf(L"100자 이하의 문자를 입력하세요 :");
    _getws_s(temp);
    str = (wchar_t*)malloc(sizeof(wchar_t) * wcslen(temp) + sizeof(wchar_t));
    wcscpy(str, temp);

    return str;
}

void Remove(wchar_t* strArray[], int* sCount)
{
    wchar_t temp[100];
    int i;

    if (*sCount == 0)
        return;
    wprintf(L"삭제할 문자열을 입력하세요:");
    _getws_s(temp);
    for (i = 0; i < *sCount; i++)
    {
        if (wcscmp(strArray[i], temp) == 0)
        {
            free(strArray[i]);
            --* sCount;
            for (; i < *sCount; i++)
                strArray[i] = strArray[i + 1];
            break;
        }
    }
}

void Output(wchar_t* strArray[], int sCount)
{
    int i;
    for (i = 0; i < sCount; i++)
        wprintf(L"%d : %s \n", i, strArray[i]);
}

void swap(wchar_t** a, wchar_t** b)
{
    wchar_t* temp = *a;
    *a = *b;
    *b = temp;
}

void Sort(wchar_t* strArray[], int sCount)
{
    int i, j, min;

    for (i = 0; i < sCount - 1; i++)
    {
        for (min = i, j = i + 1; j < sCount; j++)
        {
            if (wcscmp(strArray[j], strArray[min]) < 0)
                min = j;
        }
        swap(&strArray[i], &strArray[min]);
    }
}

void main()
{
    wchar_t* strArray[100];
    _wsetlocale(LC_ALL, L"KOREAN");

    int sCount = 0, bContinue = 1;

    while (bContinue)
    {
        menu();
        switch (_getwch())
        {
        case '1':
            if (sCount < 100)
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
        default:
            puts("1~5까지 입력 가능합니다.");
        }

    }

}