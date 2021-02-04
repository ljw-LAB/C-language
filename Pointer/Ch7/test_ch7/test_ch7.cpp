#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

// struct _point
// {
//     int x;
//     int y;

// };

// void main()
// {
//     struct _point p1 = {10, 20};
//     struct _point *ps = &p1;

//     printf("%d %d \n", p1.x, p1.y);
//     printf("%d %d \n", ps->x, ps->y);

// }

// struct _point
// {
//     int x;
//     int y;

// };

// void main()
// {
//     struct _point arr[5] = {{10,10},{11,11},{12,12},{13,13},{14,14}};
//     struct _point *ap = arr;
//     printf("%d %d \n", arr[0].x, arr[0].y);
//     printf("%d %d \n", arr[1].x, arr[1].y);
//     printf("%d %d \n", arr[2].x, arr[2].y);
//     printf("%d %d \n", arr[3].x, arr[3].y);
//     printf("%d %d \n", arr[4].x, arr[4].y);
//     puts("==========================");
//     printf("%d %d \n", ap[0].x, ap[0].y);
//     printf("%d %d \n", ap[1].x, ap[1].y);
//     printf("%d %d \n", ap[2].x, ap[2].y);
//     printf("%d %d \n", ap[3].x, ap[3].y);
//     printf("%d %d \n", ap[4].x, ap[4].y);

// }

// struct _point
// {
//     int x;
//     int y;

// };

// void main()
// {
//     struct _point arr[5] = {{10,10},{11,11},{12,12},{13,13},{14,14}};
//     printf("%d \n", sizeof(struct _point));             //8
//     printf("%x \n", arr);                               //12ff58

//     puts("======================");
//     printf("%x %x %x \n", arr, &arr[0].x, &arr[0].y);   //12ff58 12ff58 12ff5c
//     printf("%x %x %x \n", arr+1, &arr[1].x, &arr[1].y); //12ff60 12ff60 12ff64
//     printf("%x %x %x \n", arr+2, &arr[2].x, &arr[2].y); //12ff68 12ff68 12ff6c
//     printf("%x %x %x \n", arr+3, &arr[3].x, &arr[3].y); //12ff70 12ff70 12ff74
//     printf("%x %x %x \n", arr+4, &arr[4].x, &arr[4].y); //12ff78 12ff78 12ff7c

// }

 //struct _sIntData 
 //{ 
 //  int n1; 
 //  int n2; 
 //  struct _sIntData * link; 
 //}; 
 //struct _sStrData 
 //{ 
 //  char str1[20]; 
 //  char *str2; 
 //}; 
 //void main() 
 //{ 
 //  struct _sIntData di, *dip; 
 //  struct _sStrData ds, *dsp; 
 //  dip = &di; 
 //  dsp = &ds; 
 //  
 //  // 동적배열 할당. 
 //  //dsp->str2 = (char*)malloc(sizeof(char)*20);  
 //  dsp->str2 = (char *)malloc(sizeof(char*));

 //  // 정수형 변수의 주소를 넣어야 함. 
 //  scanf("%d %d", &dip->n1, &dip->n2); 
 //  scanf("%s %s", dsp->str1, dsp->str2);
 //  printf("%d %d\n", dip->n1, dip->n2); 
 //  printf("%s %s\n", dsp->str1, dsp->str2); 
 //  // 동적배열 해제. 
 //  free(dsp->str2); 
 //}

struct _sData
{
    int *ap;
    int num;
};

void main()
{
	struct _sData data;
    data.num = 3;
	int iarr[4] = {10, 20 , NULL, 30};
	data.ap = iarr;
    
    printf("%d \n", data.num);
	printf("%d %d %d \n", data.ap[0], data.ap[1], data.ap[3]);
}