#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<malloc.h>
#include<stdbool.h>
typedef int StDataType;
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