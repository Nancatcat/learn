#define _CRT_SECURE_NO_WARNINGS 1
#pragma once


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDataPyte;
#define N 100
typedef struct Seqlist
{
	SLDataPyte* p;//指向动态数组的指针
	int size;//占用的空间大小
	int capacity;//总共的空间大小
}SL;
void SeqListCheckcapacity(SL* ps);//增容

//增删查改
void SeqListInit(SL*ps);//初始化链表
void SeqListPushBack(SL* ps, SLDataPyte x);//尾插
void SeqListPopBack(SL* ps);//尾删
void SeqListPushFront(SL* ps, SLDataPyte x);//头插
void SeqListPopFront(SL* ps);//头删



