#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int** fun(int n)
//{
//    int** s = (int**)malloc(n * sizeof(int*));
//    while (n--)
//        s[n] = (int*)malloc(n * sizeof(int));
//    return s;
//}
//int missingNumber(int* nums, int numsSize)
//{
//    int x = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        x ^= *(nums + i);
//    }
//    for (int i = 0; i <= numsSize; i++)
//    {
//        x ^= i;
//    }
//    return x;
//}
//int missingNumber(int* nums, int numsSize)
//{
//    int x = (numsSize * (numsSize + 1) / 2);
//    for (int i = 0; i < numsSize; i++)
//    {
//        x -= *(nums + i);
//    }
//    return x;
//}
int main()
{
	int a = 10; 
	int b = a & (-1 * a);
	printf("%d", b);
	return 0;
}
int* singleNumbers(int* nums, int numsSize, int* returnSize)
{
    int x = 0;
    for (int i = 0; i < numsSize; i++)
    {
        x ^= *(nums + i);
    }
    int count = 0;
    for (int i = 0; i < 32; i++)
    {
        if (x & (1 << count))
        {
            break;
        }
        count++;
    }
    int* arr = (int*)malloc(2 * sizeof(int));
    int m1 = 0;
    int m2 = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] & (1 << count))
        {
            m1 ^= nums[i];

        }
        else
        {
            m2 ^= nums[i];
        }
    }
    arr[0] = m1;
    arr[1] = m2;
    *returnSize = 2;
    return arr;
}