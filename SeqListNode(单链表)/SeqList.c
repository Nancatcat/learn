#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
//初始化
SeNode* BuySeqListNode(SeDataType x)
{
	SeNode* newnode = (SeNode*)malloc(sizeof(SeNode));//创建结点
	if (newnode == NULL)//判断结点是否生成成功
	{
		perror("BuySeqListNode");
		exit(-1);
	}
	newnode->data = x;//赋值
	newnode->next = NULL;
	return newnode;//返回结点地址
}
//销毁
void SeqListDestroy(SeNode** phead)
{
	assert(phead);//判断是否为空
	while (*phead)//循环free空间
	{
		SeNode* next = (*phead)->next;//记录下一个节点,避免链接丢失
		free(*phead);//释放
		*phead = next;
	}
	*phead = NULL;//置空
}
//打印
void SeqListPrint(SeNode* phead)
{
	SeNode* cur = phead;//记录位置
	while (cur)
	{
		printf("%d->", cur->data);//打印
		cur = cur->next;//赋值遍历
	}
	printf("NULL\n");
}
//尾插
void SeqListPushBack(SeNode** phead, SeDataType x)
{
	assert(phead);//判断指针是否为空
	SeNode* node = BuySeqListNode(x);//开辟节点
	if (*phead == NULL)//如果*phead为空,代表链表为空,之间赋值替换即可
	{
		*phead = node;
	}
	else
	{
		SeNode* tail = *phead;
		while (tail->next != NULL)//如果不为空,则遍历链表,在最后一个结点进行链接
		{
			tail = tail->next;
		}
		tail->next = node;
	}
}
//尾删
void SeqListPopBack(SeNode** phead)
{
	assert(phead);//判断指针是否为空
	assert(*phead);//判断指针指向的内容是否为空
	if ((*phead)->next == NULL)//如果只有一个节点，直接释放
	{
		free(*phead);
		*phead = NULL;
	}
	else
	{
		SeNode* tail = *phead;
		while (tail->next->next != NULL)//如果多个，遍历到末尾的前一个释放
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;                       
	}
}
//头插
void SeqListPushFront(SeNode** phead, SeDataType x)
{
	assert(phead);//判断指针是否为空
	SeNode* newnode = BuySeqListNode(x);//创建新节点
	if (*phead == NULL)//当只有一个节点的时候,直接赋值
	{
		*phead = newnode;
	}
	else//多个节点是先链接在赋值
	{
		newnode->next = *phead;
		*phead = newnode;
	}
}
//头删
void SeqListPopFront(SeNode** phead)
{
	assert(phead);//判断指针是否为空
	assert(*phead);//判断指针指向的内容是否为空
	if ((*phead)->next == NULL)//只有一个节点时,直接释放
	{
		free(*phead);
		*phead = NULL;
	}
	else//多个节点时,记录新头结点,释放原头结点
	{	
		SeNode* pphead = (*phead)->next;
		free(*phead);
		*phead = pphead;
	}
}
SeNode* SeqListFind(SeNode* phead,SeDataType x)
{
	assert(phead);//判断指针是否为空
	SeNode* cur = phead;//赋值遍历
	while (cur->next != NULL)
	{
		if (cur->data == x)//判断相等
		{
			return cur;//相等返回地址
		}
		cur = cur->next;
	}
	return NULL;	//不等返回NULL;
}
//pos位置之后插入
void SeqListInsterAfter(SeNode**phead,SeNode* pos, SeDataType x)
{
	assert(pos);//判断指针是否为空
	assert(*phead);
	if (pos == *phead)//如果相等，就是头插
	{
		SeqListPushFront(phead,x);
	}
	else
	{
		SeNode* node = BuySeqListNode(x);
		SeNode* pphead = pos->next;//记录原结点链接的数据
		node->next = pphead;//链接
		pos->next = node;
	}
}
//删除pos位置
void SeqListEraseAfter(SeNode** phead, SeNode* pos)
{
	assert(pos);//判断空指针
	if (pos==*phead)//如果相等就是头删
	{
		SeqListPopFront(phead);
	}
	else
	{
		SeNode* cur = *phead;
		while (cur->next != pos)//记录pos的前一个位置
		{
			cur = cur->next;
		}
		cur->next = pos->next;//链接
		free(pos);//释放
		pos = NULL;
	}
}
