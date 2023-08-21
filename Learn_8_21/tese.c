//#define _CRT_SECURE_NO_WARNINGS 1
//#include"Queue.h"
//#include"Stack.h"
////void TestQueue()
////{
////	Queue pq;
////	QueueInit(&pq);
////	QueuePush(&pq, 1);
////	QueuePush(&pq, 2);
////	QueuePush(&pq, 3);
////	QueuePush(&pq, 4);
////	QueuePush(&pq, 5);
////	while (!QueueEmpty(&pq))
////	{
////		printf("->%d", QueueFront(&pq));
////		QueuePop(&pq);
////	}
////	printf("\n");
////}
//void TestStack()
//{
//	Stack ps;
//	StackInit(&ps);
//	StackPush(&ps, 1);
//	StackPush(&ps, 2);
//	StackPush(&ps, 3);
//	StackPush(&ps, 4);
//	StackPush(&ps, 5);
//	while (!StackEmpty(&ps))
//	{
//		printf("%d ", StackTop(&ps));
//		StackPop(&ps);
//	}
//	printf("\n");
//	StackDestroy(&ps);
//}
//int main()
//{
//	//TestQueue();
//	TestStack();
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
int dominantIndex(int* nums, int numsSize)
{
    if (numsSize == 1)
    {
        return 0;
    }
    int max = 0;
    int count = numsSize;
    int retur = 0;
    while (count--)
    {
        if (nums[count] > max)
        {
            max = nums[count];
            retur = count;
        }
    }
    count = numsSize;
    while (count--)
    {
        if (nums[count] * 2 > max && nums[count] != max)
            return -1;
    }
    return retur;
}
int main()
{
    int nums[] = { 2,0,0,1 };
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int ret = dominantIndex(nums, numsSize);
    printf("%d", ret);
    return 0;
}