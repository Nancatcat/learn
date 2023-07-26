#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<malloc.h>
typedef int SeDataType;
//定义结点
typedef struct SeqList
{
	SeDataType data;
	struct SeqList* next;
}SeNode;
//初始化
void SeqListInit(SeNode** phead);
//销毁
void SeqListDestroy(SeNode** phead);
//打印
void SeqListPrint(SeNode* phead);
//尾插
void SeqListPushBack(SeNode** phead, SeDataType x);
//尾删
void SeqListPopBack(SeNode** phead);
//头插
void SeqListPushFront(SeNode** phead, SeDataType x);
//头删
void SeqListPopFront(SeNode** phead);
//pos位置之后插入
void SeqListInsterAfter(SeNode** phead,SeNode* pos, SeDataType x);
//删除pos位置
void SeqListEraseAfter(SeNode** phead, SeNode* pos);
