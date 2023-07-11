#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<assert.h>

//int removeDuplicates(int* nums, int numsSize)
//{
//    int dest = 0;
//    int src = 1;
//    while (src < numsSize)
//    {
//        if (nums[src] == nums[dest])
//        {
//            src++;
//        }
//        else
//        {
//            nums[++dest] = nums[src++];
//
//        }
//    }
//    return dest+1;
//}
//int main()
//{
//    int nums[] = { 0,0,1,1,1,2,2,3,3,4 };
//    int numsSize = sizeof(nums) / sizeof(nums[0]);
//    int ret = removeDuplicates(nums, numsSize);
//    printf("%d\n", ret);
//    int i = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        printf("%d ", nums[i]);
//    }
//    return 0;
//}
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//    int end1 = m - 1;
//    int end2 = n - 1;
//    int end = m + n - 1;
//    while (end1 >= 0 && end2 >= 0)
//    {
//        if (nums1[end1] > nums2[end2])
//        {
//            nums1[end--] = nums1[end1--];
//        }
//        else
//        {
//            nums1[end--] = nums2[end2--];
//        }
//    }
//    while (end2 >= 0)
//    {
//        nums1[end--] = nums2[end2--];
//    }
//}
//memcpy	
//void Mymemcpy(void* dst, const void* src, size_t x)
//{
//	assert(dst && src);
//	void* ps =dst;
//	while (x--)
//	{
//		*(char*)dst = *(char*)src;
//		dst = (char*)dst + 1;
//		src = (char*)src + 1;
//	}
//	return ps;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[10] = { 0 };
//	Mymemcpy(arr2, arr, sizeof(arr));
//	int len = (sizeof(arr2) / sizeof(arr2[0]));
//	for (int i = 0; i <len ; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//memmove
//void* Mymemmove(void* dest, void* src,size_t num)
//{
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;                         
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest+num) = *((char*)src+num);
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	Mymemmove(arr + 2, arr, 20);
//	int len = (sizeof(arr) / sizeof(arr[0]));
//	for (int i = 0; i <len ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//	return 0; 
//}
//void Left(int*nums, int sarat, int end)
//{
//    while (sarat < end)
//    {
//        int tmp = nums[sarat];
//        nums[sarat] = nums[end];
//        nums[end] = tmp;
//        sarat++;
//        end--;
//   }
//
//}
//void rotate(int* nums, int numsSize, int k)
//{
//    k = k % numsSize;
//    Left(nums, 0 ,numsSize - 1);
//    Left(nums ,0,k-1);
//    Left(nums, k,numsSize-1);
//
//}


//int main()
//{
//    int nums[] = { 1,2,3,4,5,6,7 };
//    int numsSize = sizeof(nums) / sizeof(nums[0]);
//    int k = 3;
//    rotate(nums,numsSize, k);
//    for (int i = 0; i < 7; i++)
//    {
//        printf("%d ", nums[i]);
//    }
//    return 0;
//}
int* addToArrayForm(int* num, int numSize, int k, int* returnSize)
{
    int count = 1;
    int sum = 0;
    for (int i = 0; i < numSize-1; i++)
    {
        sum = (num[i] + sum) * 10;
        count++;
    }
    sum += k;
    for (int i = count; count >0; count--)
    {
        num[count-1] = sum % 10;
        sum /= 10;
    }
    returnSize = num;
    return returnSize;
}
int main()
{
    int num[] = { 1,2,0,0 };
    int k = 12650;
    int numSize = sizeof(num) / sizeof(num[0]);
    int* returnSize =NULL;
    returnSize = addToArrayForm(num, numSize, k, returnSize);
    for (int i = 0; i < 4; i++)
    {
        printf("%d", returnSize[i]);
    }
    return 0;
}