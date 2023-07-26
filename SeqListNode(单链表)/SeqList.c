#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
//��ʼ��
SeNode* BuySeqListNode(SeDataType x)
{
	SeNode* newnode = (SeNode*)malloc(sizeof(SeNode));//�������
	if (newnode == NULL)//�жϽ���Ƿ����ɳɹ�
	{
		perror("BuySeqListNode");
		exit(-1);
	}
	newnode->data = x;//��ֵ
	newnode->next = NULL;
	return newnode;//���ؽ���ַ
}
//����
void SeqListDestroy(SeNode** phead)
{
	assert(phead);//�ж��Ƿ�Ϊ��
	while (*phead)//ѭ��free�ռ�
	{
		SeNode* next = (*phead)->next;//��¼��һ���ڵ�,�������Ӷ�ʧ
		free(*phead);//�ͷ�
		*phead = next;
	}
	*phead = NULL;//�ÿ�
}
//��ӡ
void SeqListPrint(SeNode* phead)
{
	SeNode* cur = phead;//��¼λ��
	while (cur)
	{
		printf("%d->", cur->data);//��ӡ
		cur = cur->next;//��ֵ����
	}
	printf("NULL\n");
}
//β��
void SeqListPushBack(SeNode** phead, SeDataType x)
{
	assert(phead);//�ж�ָ���Ƿ�Ϊ��
	SeNode* node = BuySeqListNode(x);//���ٽڵ�
	if (*phead == NULL)//���*pheadΪ��,��������Ϊ��,֮�丳ֵ�滻����
	{
		*phead = node;
	}
	else
	{
		SeNode* tail = *phead;
		while (tail->next != NULL)//�����Ϊ��,���������,�����һ������������
		{
			tail = tail->next;
		}
		tail->next = node;
	}
}
//βɾ
void SeqListPopBack(SeNode** phead)
{
	assert(phead);//�ж�ָ���Ƿ�Ϊ��
	assert(*phead);//�ж�ָ��ָ��������Ƿ�Ϊ��
	if ((*phead)->next == NULL)//���ֻ��һ���ڵ㣬ֱ���ͷ�
	{
		free(*phead);
		*phead = NULL;
	}
	else
	{
		SeNode* tail = *phead;
		while (tail->next->next != NULL)//��������������ĩβ��ǰһ���ͷ�
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;                       
	}
}
//ͷ��
void SeqListPushFront(SeNode** phead, SeDataType x)
{
	assert(phead);//�ж�ָ���Ƿ�Ϊ��
	SeNode* newnode = BuySeqListNode(x);//�����½ڵ�
	if (*phead == NULL)//��ֻ��һ���ڵ��ʱ��,ֱ�Ӹ�ֵ
	{
		*phead = newnode;
	}
	else//����ڵ����������ڸ�ֵ
	{
		newnode->next = *phead;
		*phead = newnode;
	}
}
//ͷɾ
void SeqListPopFront(SeNode** phead)
{
	assert(phead);//�ж�ָ���Ƿ�Ϊ��
	assert(*phead);//�ж�ָ��ָ��������Ƿ�Ϊ��
	if ((*phead)->next == NULL)//ֻ��һ���ڵ�ʱ,ֱ���ͷ�
	{
		free(*phead);
		*phead = NULL;
	}
	else//����ڵ�ʱ,��¼��ͷ���,�ͷ�ԭͷ���
	{	
		SeNode* pphead = (*phead)->next;
		free(*phead);
		*phead = pphead;
	}
}
SeNode* SeqListFind(SeNode* phead,SeDataType x)
{
	assert(phead);//�ж�ָ���Ƿ�Ϊ��
	SeNode* cur = phead;//��ֵ����
	while (cur->next != NULL)
	{
		if (cur->data == x)//�ж����
		{
			return cur;//��ȷ��ص�ַ
		}
		cur = cur->next;
	}
	return NULL;	//���ȷ���NULL;
}
//posλ��֮�����
void SeqListInsterAfter(SeNode**phead,SeNode* pos, SeDataType x)
{
	assert(pos);//�ж�ָ���Ƿ�Ϊ��
	assert(*phead);
	if (pos == *phead)//�����ȣ�����ͷ��
	{
		SeqListPushFront(phead,x);
	}
	else
	{
		SeNode* node = BuySeqListNode(x);
		SeNode* pphead = pos->next;//��¼ԭ������ӵ�����
		node->next = pphead;//����
		pos->next = node;
	}
}
//ɾ��posλ��
void SeqListEraseAfter(SeNode** phead, SeNode* pos)
{
	assert(pos);//�жϿ�ָ��
	if (pos==*phead)//�����Ⱦ���ͷɾ
	{
		SeqListPopFront(phead);
	}
	else
	{
		SeNode* cur = *phead;
		while (cur->next != pos)//��¼pos��ǰһ��λ��
		{
			cur = cur->next;
		}
		cur->next = pos->next;//����
		free(pos);//�ͷ�
		pos = NULL;
	}
}
