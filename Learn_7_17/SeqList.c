#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
void SLInit(SL* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->sz = ps->capacity = 0;
}
void SLCheckCapacity(SL* ps)
{
	assert(ps);
	if (ps->capacity == ps->sz)//判断空间容量
	{
		//如果相等，判断是初次开辟还是进行扩容
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		//realloc在初次开辟时功能与mallocc相同
		SLDataType* ptr = (SLDataType*)realloc(ps->a,sizeof(SLDataType) * newcapacity);
		if (ptr == NULL)
		{
			perror("realloc");
			exit(-1);
		}
		ps->a = ptr;//赋值
		ps->capacity = newcapacity;//更新空间容量
		printf("扩容成功\n");
	}
	
}
int SLFind(SL* ps, SLDataType x)
{
	assert(ps);
	for (int i = 0; i <=ps->sz; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}	
	}
	return -1;
}
void SLprint(SL* ps)
{
	assert(ps);
	for (int i = 0; i <ps->sz; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);//判断是否扩容
	ps->a[ps->sz] = x;
	ps->sz++;
}
void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);
	int end = ps->sz - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->sz++;
}
void SLPopBack(SL* ps)
{
	assert(ps);
	ps->sz--;
}
void SLPopFront(SL* ps)
{
	assert(ps);
	int begin = 0;
	while (begin < ps->sz)
	{
		ps->a[begin] = ps->a[begin + 1];
		begin++;
	}
	ps->sz--;
}
void SLModify(SL* ps, int pos)
{
	assert(ps);
	int flang =SLFind(ps, pos);
	if (flang == -1)
	{
		printf("无法修改，请确认数据\n");
	}
	else
	{
		while (flang < ps->sz)
		{
			ps->a[flang] = ps->a[flang+1];
			flang++;
		}
		ps->sz--;
		printf("删除成功\n");
	}

}