#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

void StackInit(St* ps)
{
	assert(ps);
	ps->capacity = ps->top = 0;
	ps->x = NULL;
}
void StackDestory(St* ps)
{
	assert(ps);
	free(ps->x);
	ps->x = NULL;
	ps->capacity = ps->top = 0;
}
void StackPush(St* ps, StDataType x)
{
	assert(ps);
	if (ps->capacity == ps->top)
	{
		int newcapacity = 
			ps->capacity == 0 ? 4 : ps->capacity * 2;
		StDataType* ptr = (StDataType*)realloc(ps->x, sizeof(StDataType) * newcapacity);
		if (ptr == NULL)
		{
			perror("StackPush");
			exit(-1);
		}
		ps->x = ptr;
		ps->capacity = newcapacity;
	}
	ps->x[ps->top] = x;
	ps->top++;
}
void StackPop(St* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	ps->top--;
}
StDataType StackTop(St* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	return ps->x[ps->top - 1];
}
bool StackEmpty(St* ps)
{
	assert(ps);
	return ps->top == 0;
}
int StackSize(St* ps)
{
	assert(ps);
	return ps->top;
}