#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<assert.h>
typedef int StDataType;
typedef struct ListNode
{
	struct ListNode* prev;
	struct ListNode* next;
	StDataType data;
}LNode;
LNode* ListNodeCreate();
void ListNodePrint(LNode* head);
void ListNodeDestroy(LNode* head);
LNode*ListNodeFind(LNode* head, StDataType x);
void ListNodePushBack(LNode* head, StDataType x);
void ListNodePopBack(LNode* head);
void ListNodePushFront(LNode* head, StDataType x);
void ListNodePopFront(LNode* head);
void ListNodeInsert(LNode* pos, StDataType x);
void ListNodeErase(LNode* pos);
