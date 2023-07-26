#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<malloc.h>
typedef int SeDataType;
typedef struct SeqList
{
	SeDataType *data;
	int size;
	int capacity;
}Sq;

void SeqListInit(Sq* s1);
void SeqListPrint(Sq* s1);
void SeqListDestory(Sq* s1);
int	 SeqListFind(Sq* s1, SeDataType x);
void SeqListInsert(Sq* s1, int pow, SeDataType x);
void SeqListErase(Sq* s1, int pow);
void SeqListPushBack(Sq* s1, SeDataType x);
void SeqListPopBack(Sq* s1);
void SeqListPushFront(Sq* s1, SeDataType x);
void SeqListPopFront(Sq* s1);