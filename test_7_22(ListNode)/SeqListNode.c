#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqListNode.h"
LNode* BuyListNode(DataTypeint x)
{
	LNode* newnode = (LNode*)malloc(sizeof(LNode));
	if (newnode == NULL)
	{
		perror("BuyListNode");
		exit(-1);
	}
	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->data = x;
	return newnode;
}

LNode* ListNodeInit()
{
	LNode* head = BuyListNode(-1);
	head->next = head;
	head->prev = head;
	return head;
}
void ListNodePrint(LNode* head)
{
	assert(head);
	LNode* cur = head->next;
	while (cur != head)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
LNode* ListNodeFrind(LNode* head, DataTypeint x)
{
	assert(head);
	assert(head->next != head);
	LNode* cur = head->next;
	while (cur != head)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
void ListNodePushBack(LNode* phead, DataTypeint x)
{
	/*assert(phead);
	LNode* newnode = BuyListNode(x);
	LNode* tail = phead->prev;
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;*/
	ListNodeInsert(phead, x);
}
void ListNodePopBack(LNode* phead)
{
	/*assert(phead);
	assert(phead->prev != phead);
	LNode* tail = phead->prev;
	phead->prev = tail->prev;
	tail->prev->next = phead;
	free(tail);*/
	ListNodeErase(phead->prev);
}
void ListNodePushFront(LNode* phead, DataTypeint x)
{
	/*assert(phead);
	LNode* newnode = BuyListNode(x);
	LNode* next = phead->next;
	next->prev = newnode;
	newnode->next = next;
	phead->next = newnode;
	newnode->prev = phead;*/
	ListNodeInsert(phead->next, x);
}
void ListNodePopFront(LNode* phead)
{
	/*assert(phead);
	assert(phead->next!= phead);
	LNode* next = phead->next;
	phead->next = next->next;
	next->prev = phead;
	free(next);*/
	ListNodeErase(phead->next);

}
void ListNodeInsert(LNode* pos, DataTypeint x)
{
	assert(pos);
	LNode* newnode = BuyListNode(x);
	LNode* prev = pos->prev;
	newnode->next = pos;
	pos->prev = newnode;
	newnode->prev = prev;
	prev->next = newnode;
}    
void ListNodeErase(LNode* pos)
{
	assert(pos);
	assert(pos->next != pos);
	LNode* prev = pos->prev;
	LNode* next = pos->next;
	prev->next = next;
	next->prev = prev;
	free(pos);
}