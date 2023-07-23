#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef int STDataType;
typedef struct Stack
{
	STDataType* data;
	int top;
	int capacity;
}ST;
void StackInit(ST* pst);
void StackDestrony(ST* pst);
void StackPush(ST* pst, STDataType x);
void StackPop(ST* pst);
STDataType StackTop(ST* top);
bool StackEmpty(ST* pst);
int StackSize(ST* pst);