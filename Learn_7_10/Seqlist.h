#define _CRT_SECURE_NO_WARNINGS 1
//Seqlist.h

#pragma once;
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDateType;
typedef struct SeqList
{
	SLDateType* p;
	int size;
	int capacity;
}SeqList;//定义类型
void SeqListPrint(SeqList* ps);
void SeqListInit(SeqList* s1);
void SeqListDestory(SeqList* ps);
void SeqListPushBack(SeqList* ps, SLDateType x);
void SeqListPopBack(SeqList* ps);
void SeqListPushFront(SeqList* ps, SLDateType x);
void SeqListPopFront(SeqList* ps);
void SeqListFind(SeqList* ps, SeqList* x);
void SeqListInsert(SeqList* ps, int pos, SLDateType x);
void SeqListErase(SeqList* ps, int pos);


