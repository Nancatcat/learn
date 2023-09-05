#define _CRT_SECURE_NO_WAENINGS 1
#pragma once



#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>


typedef int HeapDataType;
typedef struct Heap
{
	HeapDataType* node;
	int capacity;
	int size;
}Heap;

void Swap(HeapDataType* p1, HeapDataType* p2);
void AdjustUp(HeapDataType* pnode, int chlid);
void AdjustDown(HeapDataType* pnode, int size, int parent);
void HeapInit(Heap* pnode);
void HeapDestory(Heap* pnode);
void Heapprintf(Heap* pnode);
void HeapPush(Heap* pnode, HeapDataType x);
void HeapPop(Heap* pnode);
HeapDataType HeapTop(Heap* pnode);
int HeapSize(Heap* pnode);
bool HeapEmpty(Heap* pnode);