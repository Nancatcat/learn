#define _CRT_SECURE_NO_WAENINGS 1
#include"Heap.h"

void Swap(HeapDataType* p1, HeapDataType* p2)
{
	HeapDataType x = *p1;
	*p1 = *p2;
	*p2 = x;
}
void AdjustUp(HeapDataType* pnode, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (pnode[child] < pnode[parent])
		{
			Swap(&pnode[child], &pnode[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
void AdjustDown(HeapDataType* pnode, int size, int parent)
{
	int child = parent * 2 + 1;
	while (child < size)
	{
		if (pnode[child + 1] < pnode[child]&&child+1<size)
		{
			child++;
		}
		if (pnode[child] < pnode[parent])
		{
			Swap(&pnode[parent], &pnode[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}

}
void HeapInit(Heap* pnode)
{
	assert(pnode);
	pnode->capacity = pnode->size = 0;
	pnode->node = NULL;
}
void HeapDestory(Heap* pnode)
{
	assert(pnode);
	free(pnode->node);
	pnode->node = NULL;
	pnode->capacity = pnode->size = 0;
}
void Heapprintf(Heap* pnode)
{
	assert(pnode);
	for (int i = 0; i < pnode->size; i++)
	{
		printf("%d ", pnode -> node[i]);
	}
	printf("\n");
}
void HeapPush(Heap* pnode, HeapDataType x)
{
	assert(pnode);
	if (pnode->capacity == pnode->size)
	{
		int newcapacity = 
			pnode->capacity == 0 ? 4 :
			pnode->capacity * 2;
		HeapDataType* newnode =
			(HeapDataType*)realloc
			(pnode->node, newcapacity * sizeof(HeapDataType));
		if (newnode==NULL)
		{
			perror("HeapPush realloc fail");
			return;
		}
		pnode->node =newnode;
		pnode->capacity = newcapacity;
	}
	pnode->node[pnode->size] = x;
	pnode->size++;
	AdjustUp(pnode->node, pnode->size - 1);
}
void HeapPop(Heap* pnode)
{
	assert(pnode);
	assert(pnode->size > 0);
	Swap(&pnode->node[0], &pnode->node[pnode->size - 1]);
	pnode->size--;
	AdjustDown(pnode->node, pnode -> size, 0);
}
HeapDataType HeapTop(Heap* pnode)
{
	assert(pnode);
	assert(!HeapEmpty(pnode));
	return pnode->node[0];
}
int HeapSize(Heap* pnode)
{
	assert(pnode);
	return pnode->size;
}
bool HeapEmpty(Heap* pnode)
{
	assert(pnode);
	return pnode->size == 0;
}