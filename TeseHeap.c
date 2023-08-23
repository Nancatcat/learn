#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"
int main()
{
	int arr[] = { 27,15,19,18,28,34,65,49,25,37,10};
	Heap pHe;
	HeapInit(&pHe);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
	{
		HeapPush(&pHe, arr[i]);
	}
	HeapPrintf(&pHe);
	HeapDestroy(&pHe);
	return 0;
}