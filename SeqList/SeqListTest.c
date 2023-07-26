#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
////int removeDuplicates(int* nums, int numsSize)
////{
////    int dest = 1;
////    int cur = 0;
////    while (cur < numsSize-1)
////    {
////        if (nums[dest] == nums[cur])
////        {
////            cur++;
////        }
////        else
////        {
////            nums[dest++] = nums[cur++];
////        }
////    }
////    return cur + 1;
////}
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//    int len1 = m - 1;
//    int len2 = n - 1;
//    int len3 = m + n - 1;
//    while (len1 != 0 && len2 != 0)
//    {
//        if (nums1[len1] < nums2[len2])
//        {
//            nums1[len3--] = nums2[len2--];
//        }
//        else
//        {
//            nums1[len3--] = nums1[len1--];
//
//        }
//    }
//    while (len2)
//    {
//        nums1[len3--] = nums2[len2--];
//    }
//
//    return nums1;
//
//}
//int main()
//{
//    int nums[] = { 0,0,1,1,1,2,2,3,3,4};
//    int len = sizeof(nums) / sizeof(nums[0]);
//    removeDuplicates(nums, len);
//
//    return 0;
//}

void SeqListTest()
{
	Sq s1;
	SeqListInit(&s1);
	/*SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPrint(&s1);
	SeqListPushFront(&s1, 10);
	SeqListPushFront(&s1, 9);
	SeqListPushFront(&s1, 8);
	SeqListPushFront(&s1, 7);*/
	
	/*SeqListPrint(&s1);
	 SeqListPopBack(&s1);
	 SeqListPopBack(&s1);
	 SeqListPopBack(&s1);
	 SeqListPopBack(&s1);
	 SeqListPopBack(&s1);
	 SeqListPrint(&s1);
	 SeqListPopFront(&s1);
	 SeqListPopFront(&s1);
	 SeqListPopFront(&s1);
	 SeqListPopFront(&s1);
	 SeqListPopFront(&s1);
	 SeqListPrint(&s1);*/
	/* SeqListPushFront(&s1, 10);
	 SeqListPushFront(&s1, 9);
	 SeqListPushFront(&s1, 8);
	 SeqListPushFront(&s1, 7);
	 SeqListPushFront(&s1, 6);
	 SeqListPushBack(&s1, 1);
	 SeqListPushBack(&s1, 2);
	 SeqListPushBack(&s1, 3);
	 SeqListPushBack(&s1, 4);
	 SeqListPushBack(&s1, 5);*/
	 SeqListPushBack(&s1, 2);
	 SeqListPrint(&s1);
	 SeqListPopBack(&s1);
	 SeqListPopBack(&s1);
	 SeqListPopBack(&s1);
	 SeqListPopBack(&s1);
	 SeqListPushBack(&s1, 2);
	 SeqListPushBack(&s1, 2);
	 SeqListPushBack(&s1, 2);
	 SeqListPrint(&s1);
	 SeqListDestory(&s1);


}
int main()
{
	SeqListTest();
	return 0;
}