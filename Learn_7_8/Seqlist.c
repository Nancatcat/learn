#define _CRT_SECURE_NO_WARNINGS 1
#include"Seqlist.h"
void print(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d", ps->p[i]);
		printf("\n");
	}
}
void SeqListCheckcapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataPyte* Tmp = (SLDataPyte*)realloc(ps->p, newcapacity * sizeof(SLDataPyte));
		if (Tmp == NULL)
		{
			printf("realloc,fail");
			return;
		}
		ps->p = Tmp;
		ps->capacity = newcapacity;
	}
}

void SeqListInit(SL* ps)
{
	ps->p = NULL;
	ps->capacity = 0;
	ps->size = 0;
}
void SeqListPushBack(SL* ps, SLDataPyte x)
{
	SeqListCheckcapacity(ps);
	ps->p[ps->size] = x;
	ps->size++;
}

void SeqListPopBack(SL* ps)
{
	ps->size--;
}

void SeqListPushFront(SL* ps, SLDataPyte x)
{
	SeqListCheckcapacity(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->p[end + 1] = ps->p[end];
		end--;
	}
	ps->p[0] = x;
	ps->size++;

}

void SeqListPopFront(SL* ps)
{
	assert(ps->size>0);
	int begin = 1;
	while (begin < ps->size)
	{
		ps->p[begin - 1] = ps->p[begin];
		begin++;
	}
	ps->size--;
}
