#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
void SeqListInit(SeqList* ps)
{
	ps->a = (int*)malloc(sizeof(int) * 4);
	if (ps->a == NULL)
	{
		perror("SeqListInit");
		return;
	}
	ps->capacity = 4;
	ps->sz = 0;
}
void SeqListPrint(SeqList* ps)
{
	assert(ps);
	for (int i = 0; i < ps->sz; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void SeqListCheckInit(SeqList* ps)
{
	assert(ps);
	if (ps->capacity == ps->sz)
	{
		int newCapacity = ps->capacity = 0 ? 4 : 2 * ps->capacity;
		int* ptr = (int*)realloc(ps->a, newCapacity * sizeof(int));
		if (ptr == NULL)
		{
			printf("realloc fail");
			exit(-1);
		}
		ps->capacity = newCapacity;
		ps->a = ptr;
	}	
}
void SeqListPushBack(SeqList* ps, int x)
{
	assert(ps);
	SeqListCheckInit(ps);
	ps->a[ps->sz] = x;
	ps->sz++;
}
void SeqListPopBack(SeqList* ps)
{
	assert(ps);
	ps->sz--;
}
void SeqListPushFroat(SeqList* ps,int x)
{
	assert(ps);
	SeqListCheckInit(ps);
	for (int i = ps->sz-1; i >=0; i--)
	{	
		ps->a[i+1] = ps->a[i];
	}
	ps->a[0] = x;
	ps->sz++;
}
void SeqListPopFroat(SeqList* ps)
{
	assert(ps);
	for (int i = 0; i < ps->sz-1; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->sz--;
}
void SeqListInsert(SeqList* ps, int pos, int x)
{
	assert(ps);
	assert(pos >= 0);
	assert(ps->sz >= pos);
	SeqListCheckInit(ps);
	int end = ps->sz-1;
	while (end >= pos)
	{
		ps->a[end+1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->sz++;
}
void SeqListErase(SeqList* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->sz);
	int begin = pos;
	while (begin < ps->sz-1)
	{
		ps->a[begin] = ps->a[begin+1];
		begin++;
	}
	ps->sz--;
}