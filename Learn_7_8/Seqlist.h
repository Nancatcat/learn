#define _CRT_SECURE_NO_WARNINGS 1
#pragma once


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDataPyte;
#define N 100
typedef struct Seqlist
{
	SLDataPyte* p;//ָ��̬�����ָ��
	int size;//ռ�õĿռ��С
	int capacity;//�ܹ��Ŀռ��С
}SL;
void SeqListCheckcapacity(SL* ps);//����

//��ɾ���
void SeqListInit(SL*ps);//��ʼ������
void SeqListPushBack(SL* ps, SLDataPyte x);//β��
void SeqListPopBack(SL* ps);//βɾ
void SeqListPushFront(SL* ps, SLDataPyte x);//ͷ��
void SeqListPopFront(SL* ps);//ͷɾ



