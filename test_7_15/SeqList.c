#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
void SeqListNodePrint(SeqListNode* pphead)
{
	SeqListNode* cur = pphead;
	while (cur!= NULL)
	{
		printf("%d->", cur->x);
		cur = cur->next;
	}
	printf("NULL");
}
SeqListNode* BuySeqListNode(int x)
{
	SeqListNode* newnode = (SeqListNode*)malloc(sizeof(SeqListNode));
	if (newnode == NULL)
	{
		perror("BuySeqListNode");
		return 0;
	}
	newnode->next = NULL;
	newnode->x = x;
	return newnode;
}
void SeqListNodePushBack(SeqListNode** pphead, int x)
{
	SeqListNode* newnode = BuySeqListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SeqListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}
void SeqListNodePopBack(SeqListNode** pphead)
{
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	
	else
	{	
		/*SeqListNode* end = *pphead;
		while (end->next->next)
		{
			end = end->next;
		}
		free(end->next);
		end->next = NULL;*/
		SeqListNode* tail = *pphead;
		SeqListNode* prve = NULL;
		while (tail->next)
		{
			prve = tail;
			tail = tail->next;
		}
		free(tail);
		prve->next = NULL;
	}
	
}
void SeqListNodePushFront(SeqListNode** pphead, int x)
{
	assert(*pphead);
	SeqListNode* newnode = BuySeqListNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}
void SeqListNodePopFront(SeqListNode** pphead)
{
	assert(*pphead);
	SeqListNode* del = *pphead;
	*pphead = (*pphead)->next;
	free(del);
}
void SeqListNodeFrind(SeqListNode* phead, int pos)
{
	assert(phead);
	SeqListNode* cur = phead;
	while (cur)
	{
		if (cur->x == pos)
		{	
			return cur;
		}
		cur = cur->next;
	}
	return NULL;	
}
void SeqListNodeInsert(SeqListNode** phead, int pos, int x)
{
	assert(*phead);

}