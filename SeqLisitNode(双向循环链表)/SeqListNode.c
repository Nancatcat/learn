#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqListNode.h"
LNode* BuyListNode(StDataType x)
{
	LNode* ptr = (LNode*)malloc(sizeof(LNode));
	if (ptr == NULL)
	{
		perror("BuyListNode");
		exit(-1);
	}
	LNode* node = ptr;
	node->data = x;
	node->next = NULL;
	node->prev = NULL;
	return node;
}
LNode* ListNodeCreate()
{
	LNode* plist = BuyListNode(-1);
	plist->next = plist;
	plist->prev = plist;
	return plist;
}
void ListNodePrint(LNode* head)
{
	LNode* cur = head->next;
	while (cur != head)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
void ListNodeDestroy(LNode* head)
{
	LNode* cur = head->next;
	while (cur != head)
	{
		LNode* node = cur->next;
		free(cur);
		cur = node;
	}
	free(head);
	head = NULL;
}
LNode* ListNodeFind(LNode* head, StDataType x)
{
	assert(head);
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
void ListNodePushBack(LNode* head, StDataType x)
{
	assert(head);
	/*LNode* node = BuyListNode(x);
	LNode* tail = head->prev;
	tail->next = node;
	node->prev = tail;
	node->next = head;
	head->prev = node;*/
	ListNodeInsert(head->next, x);
}
void ListNodePopBack(LNode* head)
{
	assert(head);
	assert(head->prev!= head);
	/*LNode* tail = head->prev->prev;
	free(tail->next);
	tail->next = head;
	head->prev = tail;
	*/
	ListNodeErase(head->prev);
}
void ListNodePushFront(LNode* head, StDataType x)
{
	assert(head);
	/*LNode* node = BuyListNode(x);
	LNode* next = head->next;
	node->next = next;
	next->prev = node;
	head->next = node;
	node->prev = head;*/
	ListNodeInsert(head, x);
}
void ListNodePopFront(LNode* head)
{
	assert(head);
	/*LNode* next = head->next->next;
	free(head->next);
	head->next = next;
	next->prev = head;*/
	ListNodeErase(head->next);
}
void ListNodeInsert(LNode* pos, StDataType x)
{
	assert(pos);
	LNode* node = BuyListNode(x);
	LNode* prev = pos->prev;
	node->next = pos;
	pos->prev = node;
	prev->next = node;
	node->prev = prev;
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
