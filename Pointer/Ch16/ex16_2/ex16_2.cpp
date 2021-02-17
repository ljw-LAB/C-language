#include <stdio.h>
#include <stdlib.h>
#include "List.h"

void Print(List* lt)
{
	for (Reset(lt); HasNext(lt); Next(lt))
		printf("%g ", *(double *)GetItem(lt));
	printf("\n");
}

void* AllocData(double data)
{
	double* p = (double *)malloc(sizeof(double));
	*p = data;

	return p;
}

void FreeData(void* p)
{
	free(p);
}

void main()
{
	List lt;

	Initialize(&lt);
	Add(&lt, AllocData(10.1));
	Add(&lt, AllocData(10.2));
	Add(&lt, AllocData(10.3));

	Print(&lt);
	for (Reset(&lt); HasNext(&lt); Next(&lt))
		FreeData(GetItem(&lt));

	Uninitialize(&lt);
}