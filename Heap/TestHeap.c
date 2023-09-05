#define _CRT_SECURE_NO_WAENINGS 1
#include"Heap.h"
//int main()
//{
//	int arr[] = { 19,23,45,32,65,23,54,2,76,89 };
//	Heap node;
//	HeapInit(&node);
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		HeapPush(&node, arr[i]);
//	}
//	while (!HeapEmpty(&node))
//	{
//		int top = HeapTop(&node);
//		printf("%d ", top);
//		HeapPop(&node);
//	}
//	return 0;
//}
void HeapSort(int* arr, int size)
{
	for (int i =(size-1-1)/2; i >= 0; i--)
	{
		AdjustDown(arr, size, i);
	}
	int end = size - 1;
	while (end > 0)
	{
		Swap(&arr[0],&arr[end]);
		AdjustDown(arr, end, 0);
		--end;
	}
}
int main()
{
	int arr[] = { 19,23,45,32,65,23,54,2,76,89 };
	HeapSort(arr, sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
