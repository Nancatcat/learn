#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	char str[1024] = { 0 };
//	while (gets(str)) {
//		int len = strlen(str);
//		for (int i = 0; i < len; i++) {
//			for (int j = 1; j < len - i; j++) {
//				if (str[j] < str[j - 1]) {
//					char ch = str[j - 1];
//					str[j - 1] = str[j];
//					str[j] = ch;
//				}
//			}
//		}
//		printf("%s\n", str);
//	}
//int pivotIndex(int* nums, int numsSize)
//{
//    int cur = 0;
//    int mid = 0;
//    while (cur <numsSize-1)
//    {
//        cur += 2;
//        if (cur > numsSize)
//            break;
//        mid += 1;
//    }
   /* int x = 0;
    for (int i = 0; i < mid; i++)
    {
        x += nums[i];
    }
    int y = 0;
    for (int i = mid + 1; i < numsSize; i++)
    {
        y += nums[i];
    }
    if (mid == 0 && y == 0)
    {
        return mid;
    }
    if (x == y)
    {
        return mid;
    }
    else
    {
        return -1;
    }*/
//}
    //int pivotIndex(int* nums, int numsSize)
    //{
    //    int i, j;
    //    for (i = 0; i < numsSize; i++)
    //    {//�Ӽ������ĵ�Ϊ0��ʼ����ͳ���ж�
    //        int l_sum = 0, r_sum = 0;//��ʼ�����֮�ͺ��ұ�֮��Ϊ0
    //        for (j = 0; j < numsSize; j++)
    //        {
    //            if (j < i)
    //                l_sum += nums[j]; //С��i����Ķ�����ߵ�����
    //            else if(j > i) 
    //                r_sum += nums[j];//����i����Ķ����ұߵ�����
    //        }
    //        if (l_sum == r_sum) {//������������i������������
    //            return i;
    //        }
    //    }
    //    return -1;
    //}
int pivotIndex(int* nums, int numsSize) {
    int sum = 0;
    int SUM = 0;
    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
    }
    for (int i = 0; i < numsSize; i++) {
        if (2 * SUM == sum - nums[i])return i;
        SUM += nums[i];
    }
    return -1;
}

int main()
{
    int nums[] = { 1,7,3,6,5,6 };
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    printf("%d",pivotIndex(nums, numsSize));
    return 0;

}