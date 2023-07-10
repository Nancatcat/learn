#define _CRT_SECURE_NO_WARNINGS 1
#include"Seqlist.h"
//Seqlist.c
void SeqListPrint(SeqList* ps)//打印函数
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->p[i]);
	}
	printf("\n");
}
void SeqListDestory(SeqList* ps)//报错函数
{
	assert(ps);
	if (ps->p)
	{
		free(ps->p);
		ps->p = NULL;
		ps->capacity = ps->size = 0;
	}
}
void SeqListInit(SeqList* ps)//初始化函数
{
	assert(ps);
	ps->p = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
void SeqListCheckcapacity(SeqList* ps)//扩容函数
{
	assert(ps);
	if (ps->capacity == ps->size)
	{
		int Newcapacity = ps->capacity == 0 ? 4 : ps->capacity*2;//判断是否为空
		SLDateType* ptr = (SLDateType*)realloc(ps->p,Newcapacity*sizeof(SLDateType));//开辟空间
		if (ptr == NULL)
		{
			perror("realloc");
			return;
		}
		ps->p = ptr;
		ps->capacity = Newcapacity;
	}

}
void SeqListPushBack(SeqList* ps, SLDateType x)//尾插
{
	SeqListCheckcapacity(ps);
	assert(ps);
	ps->p[ps->size] = x;
	ps->size++;
}
void SeqListPopBack(SeqList* ps)//尾删
{
	assert(ps);
	if (ps->size == 0)
	{
		printf("无可删数据\n");
		return;
	}
	else
	{
		ps->size--;
	}
}
void SeqListPushFront(SeqList* ps, SLDateType x)//头插
{
	assert(ps);
	int end = ps->size-1 ;//移动数据需要的下标
	SeqListCheckcapacity(ps);
	while (end >=0)
	{
		ps->p[end+1] = ps->p[end];
		end--;
	}
	ps->p[0] = x;
	ps->size++;
}

void SeqListPopFront(SeqList* ps)//头删
{
	assert(ps);
		int end = 0;
		while (end <ps->size)
		{
			ps->p[end] = ps->p[end+1 ];
			end++;
		}
	ps->size--;
}
int SeqListFIND(SeqList* ps, SeqList* x)//查询函数主体
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->p[i] == x)
		{
			return i;
		}
	}
	return -1;
}
void SeqListFind(SeqList* ps, SeqList* x)//调用查询函数完成查询
{
	assert(ps);
	int ret = SeqListFIND(ps, x);
	if (ret >=  0)
	{
		printf("找到了,下标是%d", ret);
	}
	else
	{
		printf("找不到");
	}
}
//void SeqListInsert(SeqList* ps, int pos, SLDateType x)
//{
//	assert(ps);
//	int ret = SeqListFIND(ps, pos);
//	if (ret >= 0)
//	{
//		SeqListCheckcapacity(ps);
//		int end = ps->size-1;
//		while (end >= ret)
//		{
//			ps->p[end+1] = ps->p[end];
//			end--;
//		}
//		ps->p[ret] = x;
//		ps->size++;
//	}
//	else
//	{
//		printf("数据不存在，无法修改\n");
//	}
//}
//void SeqListErase(SeqList* ps, int pos)
//{
//	assert(ps);
//	int ret = SeqListFIND(ps, pos);
//	if (ret >= 0)
//	{
//		if (ret == 0)
//		{
//			ps->size--;
//		}
//		else if (ret > 0)
//		{
//			int begin = ret;
//			while (begin <= ps->size - 1)
//			{
//				ps->p[begin] = ps->p[begin + 1];
//				begin++;
//			}
//			ps->size--;
//		}
//	}
//	else
//	{
//		printf("数据不存在，无法删除\n");
//	}
//}
void SeqListInsert(SeqList* ps, int pos, SLDateType x)//向pos位置插入数据
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);//pos必须限定的范围
	int end = ps->size-1;
	pos = pos - 1;//主观上认为的位置与计算机的位置是有差距的，所以-1与计算机下标完成匹配；
	SeqListCheckcapacity(ps);
	while (end >= pos)
	{
		ps->p[end+1] = ps->p[end];
		end--;
	}
	ps->p[pos] = x;
	ps->size++;
}
void SeqListErase(SeqList* ps, int pos)//向pos位置删除数据
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	pos = pos - 1;//主观上认为的位置与计算机的位置是有差距的，所以-1与计算机下标完成匹配；
	int begin = pos;
	while (begin <ps->size)//非常巧妙的判断，当begin = 0；size=1时，证明只有一条数据，此时直接跳过循环完成size的减少
	{
		ps->p[begin] = ps->p[begin + 1];
		begin ++ ;
	}
	ps->size--;
}