#define _CRT_SECURE_NO_WARNINGS 1
#pragma once


#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
 

typedef int HeapDataType;

typedef struct Heap
{
	HeapDataType* Data;
	int size;
	int capacity;
}Heap;


void AdjustUp(HeapDataType* Data, int chlid);
void AdjustDown(HeapDataType*Data,int n,int parent);

void HeapInit(Heap* pHe);
void HeapDestroy(Heap* pHe);
void HeapPush(Heap* pHe, HeapDataType x);
void HeapPop(Heap* pHe);
void HeapPrintf(Heap* pHe);
HeapDataType HeapTop(Heap* pHe);
int HeapSize(Heap* pHe);
bool HeapEmpty(Heap* pHe);
