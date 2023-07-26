#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
void SeqListInit(Sq* ps)
{
	assert(ps);
	ps->data = NULL;
	ps->capacity = ps->size = 0;
}
void SeqListCheckCapacity(Sq* ps)
{
	assert(ps);
	if (ps->capacity == ps->size)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SeDataType* ptr = (SeDataType*)realloc(ps->data, sizeof(SeDataType) * newcapacity);
		if (ptr == NULL)
		{
			perror("CheckCapacity");
			exit(-1);	
		}
		ps->data = ptr;
		ps->capacity = newcapacity;
	}
}
void SeqListPrint(Sq* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("\n");
}

void SeqListDestory(Sq* ps)
{
	assert(ps);
	free(ps->data);
	ps->data = NULL;
	ps->capacity = ps->size = 0;
}
int SeqListFind(Sq* ps, SeDataType x)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->data[i] == x)
		{
			return i;
		}
	}
	return -1;
}
void SeqListInsert(Sq* ps, int pow, SeDataType x)
{
	assert(ps);
	assert(pow >= 0 && pow <= ps->size);
	SeqListCheckCapacity(ps);
	int end = ps->size-1;
	while(end >= pow)
	{
		ps->data[end + 1] = ps->data[end];
		end--;
	}
	ps->data[pow] = x;
	ps->size++;
}
void SeqListErase(Sq* ps, int pow)
{
	assert(ps);
	assert(pow >= 0 && pow <  ps->size);
	int begin = pow+1;
	while (begin < ps->size)
	{
		ps->data[begin - 1] = ps->data[begin];
		begin++;
	}
	ps->size--;
}
void SeqListPushBack(Sq* ps, SeDataType x)
{
	assert(ps);
	SeqListInsert(ps,ps->size, x);
}
void SeqListPopBack(Sq* ps)
{
	assert(ps);
	SeqListErase(ps, ps->size);
}
void SeqListPushFront(Sq* ps, SeDataType x)
{
	assert(ps);
	SeqListInsert(ps, 0, x);
}
void SeqListPopFront(Sq* ps)
{
	assert(ps);
	SeqListErase(ps, 0);
}