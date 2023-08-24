#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"
void Swap(HeapDataType* p1, HeapDataType* p2)
{
	HeapDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
void AdjustUp(HeapDataType* Data, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (Data[child] < Data[parent])
		{
			Swap(&Data[child], &Data[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
void AdjustDwon(HeapDataType* Data, int size, int penart)
{
	int child = penart * 2 + 1;
	while (child < size)
	{
		if (child+1<size && Data[child + 1] < Data[child])
		{
			child++;
		}
		if (Data[child] < Data[penart])
		{
			Swap(&Data[child], &Data[penart]);
			penart = child;
			child = penart * 2 + 1;
		}
		else
		{
			break;
		}
	}

}
void HpPrintf(Hp* php)
{
	assert(php);
	int cur = php->size;
	while (cur < php->size)
	{
		printf("%d ", php->Data[cur]);
		cur++;
	}
	printf("\n");
}
void HpInit(Hp* php)
{
	assert(php);
	php->Data = NULL;
	php->capacity = php->size = 0;
}
void HpDestroy(Hp* php)
{
	assert(php);
	free(php->Data);
	php->Data = NULL;
	php->capacity = php->size = 0;
}
void HpPush(Hp* php, HeapDataType x)
{
	assert(php);
	if (php->capacity == php->size)
	{
		int newcapacity = php->capacity==0?4:php->capacity*2;
		HeapDataType* tmp = 
			(HeapDataType*)realloc(php->Data,sizeof(HeapDataType)*newcapacity);
		if (tmp == NULL)
		{
			perror("HpPush fail");
			exit(-1);
		}
		php->Data = tmp;
		php->capacity = newcapacity;
	}
	php->Data[php->size] = x;
	php->size++;
	AdjustUp(php->Data, php->size-1);
}
void HpPop(Hp* php)
{
	assert(php);
	assert(!HpEmpty(php));
	Swap(&php->Data[0], &php->Data[php->size - 1]);
	php->size--;
	AdjustDwon(php->Data, php->size, 0);
}
HeapDataType HpTop(Hp* php)
{
	assert(php);
	assert(!HpEmpty(php));
	return php->Data[0];
}
int HpSize(Hp* php)
{
	assert(php);
	assert(!HpEmpty(php));
	return php->size;
}
bool HpEmpty(Hp* php)
{
	return php->size == 0;
}