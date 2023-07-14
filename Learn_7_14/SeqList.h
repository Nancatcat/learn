#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
typedef struct SeqList
{
	int* a;
	int capacity;
	int sz;
}SeqList;
void SeqListInit(SeqList* ps);
void SeqListPrint(SeqList* ps);
void SeqListPopBack(SeqList* ps);
void SeqListPushBack(SeqList* ps, int x);
void SeqListPushFroat(SeqList* ps,int x);
void SeqListPopFroat(SeqList* ps);
void SeqListInsert(SeqList* ps, int pos,int x);
void SeqListErase(SeqList* ps, int pos);