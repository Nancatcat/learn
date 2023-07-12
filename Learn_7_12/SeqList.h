#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<malloc.h>



typedef int DATATYPE;
typedef struct SeqList
{
	DATATYPE data;
	struct SeqList* next;
}SeqNode;
 
SeqNode* SeqListNode(DATATYPE x);
void SeqListprin(SeqNode* phead);
void SeqListPushBack(SeqNode** pphead, DATATYPE x);
void SeqListPushFront(SeqNode** pphead, DATATYPE x);
void SeqListPopBack(SeqNode** pphead);
void SeqListPopFront(SeqNode** pphead);

