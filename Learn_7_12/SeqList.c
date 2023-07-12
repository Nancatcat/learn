#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
void SeqListprin(SeqNode* phead)
{
	SeqNode* cur = phead;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
SeqNode* SeqListNode(DATATYPE x)
{
	SeqNode* newnode = (SeqNode*)malloc(sizeof(SeqNode));
	if (newnode==NULL)
	{
		perror("malloc fail");
		return NULL;
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}


void SeqListPushBack(SeqNode**pphead, DATATYPE x)
{
	SeqNode * newnode =  SeqListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SeqNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail-> next;
		}
		tail->next = newnode;
	}
}
void SeqListPopBack(SeqNode** pphead)
{
	assert(*pphead);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		/*SeqNode* prev = NULL;
		SeqNode* tail = *pphead;
		while (tail->next)
		{
			tail = tail->next;
		}
		prev = tail;
		free(tail);
		prev->next = NULL;*/
		SeqNode* tail = *pphead;
		while (tail->next->next)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}

}
void SeqListPushFront(SeqNode** pphead, DATATYPE x)
{
	SeqNode* newnode = SeqListNode(x);
	newnode->next = *pphead;  
	*pphead = newnode;
}
void SeqListPopFront(SeqNode** pphead)
{
	assert(*pphead);
	if ((*pphead)->next==NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SeqNode* ptr = *pphead;
		*pphead = ptr->next;
		free(ptr);
		ptr = NULL;
	}
}

