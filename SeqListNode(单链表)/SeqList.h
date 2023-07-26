#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<malloc.h>
typedef int SeDataType;
//������
typedef struct SeqList
{
	SeDataType data;
	struct SeqList* next;
}SeNode;
//��ʼ��
void SeqListInit(SeNode** phead);
//����
void SeqListDestroy(SeNode** phead);
//��ӡ
void SeqListPrint(SeNode* phead);
//β��
void SeqListPushBack(SeNode** phead, SeDataType x);
//βɾ
void SeqListPopBack(SeNode** phead);
//ͷ��
void SeqListPushFront(SeNode** phead, SeDataType x);
//ͷɾ
void SeqListPopFront(SeNode** phead);
//posλ��֮�����
void SeqListInsterAfter(SeNode** phead,SeNode* pos, SeDataType x);
//ɾ��posλ��
void SeqListEraseAfter(SeNode** phead, SeNode* pos);
