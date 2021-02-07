#include <stdio.h>

// void main()
// {
// 	int n = 20;
// 	double d = 5.5;
// 	char* str = "ABCD";
// 	void *vp;

// 	vp = &n;
// 	printf("%d \n", *(int *)vp);
// 	vp = &d;
// 	printf("%g \n", *(double *)vp);
// 	vp = str;
// 	printf("%s \n", vp);
// }

// void* func(int num)
// {
// 	static char c = 'A';
// 	static int n = 50;
// 	static double d = 5.5;

// 	switch(num)
// 	{
// 		case 1:
// 			return &c;
// 		case 2:
// 			return &n;
// 		case 3:
// 			return &d;
// 	}
// 	return NULL;
// }

// void main()
// {
// 	printf("%c \n", *(char *)func(1));
// 	printf("%d \n", *(int *)func(2));
// 	printf("%g \n", *(double *)func(3));

// }

// void arrInput(int *arr, int num)
// {
// 	int i;
// 	for(i = 0; i < num ; i++)
// 	{
// 		arr[i] = 10*(i+1);
// 	}
// }

// void arrOutput(int *arr, int num)
// {
// 	int i;
// 	for(i = 0; i < num ; i++)
// 		printf("%5d", arr[i]);
// 	puts("");	
// }

// void main()
// {
// 	int arr[10];
// 	void (*pfunc)(int*, int);
// 	pfunc = arrInput;
// 	pfunc(arr, 10);
// 	pfunc = arrOutput;
// 	pfunc(arr, 10);
// }

// void main()
// {
// 	int n1= 10, n2 = 20, n3 = 30;
// 	int *arr[3];
// 	arr[0] = &n1;
// 	arr[1] = &n2;
// 	arr[2] = &n3;

// 	printf("%d %d %d \n", *arr[0], *arr[1], *arr[2]);	
// }

void main()
{
	int arr1[2] = {10, 10}, arr2[2] = {20, 20}, arr3[2] = {30, 30};
	int (*array[3]);
	array[0] = arr1;
	array[1] = arr2;
	array[2] = arr3;

	printf("%d %d \n", array[0][0], array[0][1]);
	printf("%d %d \n", array[1][0], array[1][1]);
	printf("%d %d \n", array[2][0], array[2][1]);

}