#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>


typedef int SLDataType;//�����������ж��������

typedef struct SeqList
{
	SLDataType * a;//ָ��̬���ٵ��ڴ�
	int sz;//��¼ʹ�õĿռ����
	int capacity;//��¼�ռ�������
}SL;
void SLInit(SL* ps);//��ʼ��
void SLprint(SL* ps);//��ӡ����
void SLPushBack(SL* ps, SLDataType x);//���
void SLPushFront(SL* ps, SLDataType x);//ͷ��
void SLPopBack(SL* ps);//βɾ
void SLPopFront(SL* ps);//ͷɾ
int SLFind(SL* ps, SLDataType x);//����
void SLModify(SL* ps, int pos);//ɾ����������