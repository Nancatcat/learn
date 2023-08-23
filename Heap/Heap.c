#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"
void Swap(HeapDataType* p1, HeapDataType* p2)
{
	HeapDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
void HeapPrintf(Heap* pHe)
{
	assert(pHe);
	for (int i = 0; i < pHe->size; i++)
	{
		printf("%d ", pHe->Data[i]);
	}
	printf("\n");
}
void AdjustUp(HeapDataType* Data, int child)
{

	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (Data[child] < Data[parent])
		{
			Swap(&Data[child],&Data[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
void AdjustDown(HeapDataType* Data, int size, int parent)
{
	int child = parent * 2 + 1;
	while (child < size)
	{
		if (child + 1 < size && Data[child + 1] < Data[child])
		{
			child++;
		}
		if (Data[child] < Data[parent])
		{ 
			Swap(&Data[child], &Data[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
	
}
void HeapInit(Heap* pHe)
{
	assert(pHe);
	pHe->Data = NULL;
	pHe->capacity = pHe->size = 0;
}
void HeapDestroy(Heap* pHe)
{
	assert(pHe);
	free(pHe->Data);
	pHe->Data = NULL;
	pHe->capacity = pHe->size = 0;
}
void HeapPush(Heap* pHe, HeapDataType x)
{
	assert(pHe);
	if (pHe->capacity == pHe->size)
	{
		int newcapacity = pHe->capacity == 0 ? 4 : pHe->capacity * 2;
		HeapDataType* tmp = 
			(HeapDataType*)realloc(pHe->Data, sizeof(HeapDataType) *newcapacity);
		if (tmp == NULL)
		{
			perror("HeapPush fail");
			exit(-1);
		}
		pHe->Data = tmp;
		pHe->capacity = newcapacity;
	}
	pHe->Data[pHe->size] = x;
	pHe->size++;
	AdjustUp(pHe->Data, pHe->size - 1);
}
void HeapPop(Heap* pHe)
{
	assert(pHe);
	assert(!HeapEmpty(pHe));
	Swap(&pHe->Data[0], &pHe->Data[pHe->size - 1]);
	pHe->size--;
	AdjustDown(pHe->Data, pHe->size, 0);
}
HeapDataType HeapTop(Heap* pHe)
{
	assert(pHe);
	return pHe->Data[0];
}
int HeapSize(Heap* pHe)
{
	assert(pHe);
	return pHe->size;
}
bool HeapEmpty(Heap* pHe)
{
	assert(pHe);
	return pHe->size == 0;
}
