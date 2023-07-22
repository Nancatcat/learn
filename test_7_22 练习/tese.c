#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
//int main()
//{
//    int n = 0;
//    float sum = 0.0;
//    int count = 0;
//    float add = 0.0;
//    int count2 = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%f",&sum);
//        if (sum > 0)
//        {
//            add += sum;
//        }
//        else if (sum < 0)
//        {
//            count++;
//        }
//        else
//        {
//            count2++;
//        }
//    }
//    printf("%d %.2f", count, (add / (n - count - count2)));
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    float sum = 0.0;
//    int count = 0;
//    float add = 0.0;
//    int count2 = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%f", &sum);
//        if (sum > 0)
//        {
//            add = sum + add;
//            count2++;
//        }
//        else if (sum < 0)
//        {
//            count++;
//        }
//    }
//    if (add != 0)
//        add = add / count2;
//    else
//        add = 0.0;
//    printf("%d %.1f", count, add);
//    return 0;
//}
int minNumberInRotateArray(int* nums, int numsLen)
{
    // write code here
    int left = 0;
    int right = numsLen - 1;
    while (left < right)
    {
        int mid = (left + right) / 2;
        if (nums[mid] > nums[right])
        {
            left = mid + 1;
        }
        else if (nums[mid] == nums[right])
        {
            right--;
        }
        else
        {
            right = mid;
        }
    }
    return nums[left];
}
int main()
{
    int nums[5] = {1,2,3,4,5};
    int numsLen = sizeof(nums) / sizeof(nums[0]);
    int n = minNumberInRotateArray(nums, numsLen);
    printf("%d", n);
    return 0;
}