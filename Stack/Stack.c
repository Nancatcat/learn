#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"
void StackInit(ST* pst)
{
	assert(pst);
	pst->data = NULL;
	pst->capacity = pst->top = 0;
}
void StackDestrony(ST* pst)
{
	assert(pst);
	free(pst->data);
	pst->data = NULL;
	pst->capacity = pst->top = 0;

}
void StackPush(ST* pst, STDataType x)
{
	if (pst->capacity == pst->top)
	{
		int newcapacity = pst->capacity == 0 ? 4 : pst->capacity * 2;
		struct STDataType* ptr =
			(struct STDataType*)realloc(pst->data, sizeof(STDataType) * newcapacity);
		if (ptr == NULL)
		{
			perror("StackInit");
			exit(-1);
		}
		pst->data = ptr;
		pst->capacity = newcapacity;
	}
	pst->data[pst->top] = x;
	pst->top++;
}
void StackPop(ST* pst)
{
	assert(pst);
	assert(!StackEmpty(pst));
	pst->top--;
}
STDataType StackTop(ST* pst)
{
	assert(pst);
	assert(!StackEmpty(pst));
	return pst->data[pst->top - 1];
}
bool StackEmpty(ST* pst)
{
	assert(pst);
	return pst->top == 0;
}
int StackSize(ST* pst)
{
	assert(pst);
	return pst->top;
}