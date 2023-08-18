#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<malloc.h>
#include<stdbool.h>
typedef char StDataType;
typedef struct Stack
{
	StDataType* x;
	int top;
	int capacity;
}St;

void StackInit(St* ps);
void StackDestory(St* ps);
void StackPush(St* ps, StDataType x);
void StackPop(St* ps);
StDataType StackTop(St* ps);
bool StackEmpty(St* ps);
int StackSize(St* ps);

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

bool isValid(char* s)
{
	St ptr;
	StackInit(&ptr);
	while (*s)
	{
		if (*s == '(' || *s == '{' || *s == '[')
		{
			StackPush(&ptr, *s);
			s++;
		}
		else
		{
			if (StackEmpty(&ptr))
			{
				return false;
			}
			StDataType top = StackTop(&ptr);
			StackPop(&ptr);
			if ((top == '{' && *s == '}') ||
				(top == '[' && *s == ']') ||
				(top == '(' && *s == ')'))
			{
				s++;
			}
			else
			{
				StackDestory(&ptr);
				return false;
			}

		}

	}
	bool ret = StackEmpty(&ptr);
	StackDestory(&ptr);
	return ret;
}