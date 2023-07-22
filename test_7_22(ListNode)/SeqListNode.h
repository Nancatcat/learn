#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int DataTypeint;
typedef struct ListNode
{
	struct ListNode* prev;
	struct ListNode* next;
	DataTypeint data;
}LNode;

LNode* ListNodeInit();
void ListNodePrint(LNode* head);
LNode* ListNodeFrind(LNode* head, DataTypeint x);
void ListNodePushBack(LNode* phead, DataTypeint x);
void ListNodePopBack(LNode* phead);
void ListNodePushFront(LNode* phead, DataTypeint x);
void ListNodePopFront(LNode* phead);
void ListNodeInsert(LNode* pos, DataTypeint x);
void ListNodeErase(LNode* pos);