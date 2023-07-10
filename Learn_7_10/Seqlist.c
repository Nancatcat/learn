#define _CRT_SECURE_NO_WARNINGS 1
#include"Seqlist.h"
//Seqlist.c
void SeqListPrint(SeqList* ps)//��ӡ����
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->p[i]);
	}
	printf("\n");
}
void SeqListDestory(SeqList* ps)//������
{
	assert(ps);
	if (ps->p)
	{
		free(ps->p);
		ps->p = NULL;
		ps->capacity = ps->size = 0;
	}
}
void SeqListInit(SeqList* ps)//��ʼ������
{
	assert(ps);
	ps->p = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
void SeqListCheckcapacity(SeqList* ps)//���ݺ���
{
	assert(ps);
	if (ps->capacity == ps->size)
	{
		int Newcapacity = ps->capacity == 0 ? 4 : ps->capacity*2;//�ж��Ƿ�Ϊ��
		SLDateType* ptr = (SLDateType*)realloc(ps->p,Newcapacity*sizeof(SLDateType));//���ٿռ�
		if (ptr == NULL)
		{
			perror("realloc");
			return;
		}
		ps->p = ptr;
		ps->capacity = Newcapacity;
	}

}
void SeqListPushBack(SeqList* ps, SLDateType x)//β��
{
	SeqListCheckcapacity(ps);
	assert(ps);
	ps->p[ps->size] = x;
	ps->size++;
}
void SeqListPopBack(SeqList* ps)//βɾ
{
	assert(ps);
	if (ps->size == 0)
	{
		printf("�޿�ɾ����\n");
		return;
	}
	else
	{
		ps->size--;
	}
}
void SeqListPushFront(SeqList* ps, SLDateType x)//ͷ��
{
	assert(ps);
	int end = ps->size-1 ;//�ƶ�������Ҫ���±�
	SeqListCheckcapacity(ps);
	while (end >=0)
	{
		ps->p[end+1] = ps->p[end];
		end--;
	}
	ps->p[0] = x;
	ps->size++;
}

void SeqListPopFront(SeqList* ps)//ͷɾ
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
int SeqListFIND(SeqList* ps, SeqList* x)//��ѯ��������
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
void SeqListFind(SeqList* ps, SeqList* x)//���ò�ѯ������ɲ�ѯ
{
	assert(ps);
	int ret = SeqListFIND(ps, x);
	if (ret >=  0)
	{
		printf("�ҵ���,�±���%d", ret);
	}
	else
	{
		printf("�Ҳ���");
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
//		printf("���ݲ����ڣ��޷��޸�\n");
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
//		printf("���ݲ����ڣ��޷�ɾ��\n");
//	}
//}
void SeqListInsert(SeqList* ps, int pos, SLDateType x)//��posλ�ò�������
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);//pos�����޶��ķ�Χ
	int end = ps->size-1;
	pos = pos - 1;//��������Ϊ��λ����������λ�����в��ģ�����-1�������±����ƥ�䣻
	SeqListCheckcapacity(ps);
	while (end >= pos)
	{
		ps->p[end+1] = ps->p[end];
		end--;
	}
	ps->p[pos] = x;
	ps->size++;
}
void SeqListErase(SeqList* ps, int pos)//��posλ��ɾ������
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	pos = pos - 1;//��������Ϊ��λ����������λ�����в��ģ�����-1�������±����ƥ�䣻
	int begin = pos;
	while (begin <ps->size)//�ǳ�������жϣ���begin = 0��size=1ʱ��֤��ֻ��һ�����ݣ���ʱֱ������ѭ�����size�ļ���
	{
		ps->p[begin] = ps->p[begin + 1];
		begin ++ ;
	}
	ps->size--;
}