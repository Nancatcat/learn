#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
typedef struct SeqListNode
{
	int x;
	struct SeqListNode* next;
}SeqListNode;
void SeqListNodePushBack(SeqListNode** pplist, int x);
void SeqListNodePrint(SeqListNode* phead);
void SeqListNodePopBack(SeqListNode** pphead);
void SeqListNodePushFront(SeqListNode** pphead, int x);
void SeqListNodePopFront(SeqListNode** pphead);