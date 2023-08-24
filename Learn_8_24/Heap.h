#define _CRT_SECURE_NO_WARNINGS 1
#pragma once


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>


typedef int HeapDataType;

typedef struct Heap
{
	HeapDataType* Data;
	int size;
	int capacity;
}Hp;


void Swap(HeapDataType* p1, HeapDataType* p2);
void AdjustUp(HeapDataType* Data, int child);
void AdjustDwon(HeapDataType* Data, int size, int penart);
void HpPrintf(Hp* php);
void HpInit(Hp* php);
void HpDestroy(Hp* php);
void HpPush(Hp* php,HeapDataType x);
void HpPop(Hp* php);
HeapDataType HpTop(Hp* php);
int HpSize(Hp* php);
bool HpEmpty(Hp* php);