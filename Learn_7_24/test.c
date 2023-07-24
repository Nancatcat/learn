#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void revolve(int*nums, int left ,int right)
{  
    int tmp;
    while (left < right)
    {
        tmp = nums[left];
        nums[left] = nums[right];
        nums[right] = tmp;
        left++;
        right--;
    }
}

void rotate(int* nums, int numsSize, int k)
{
    revolve(nums,0,numsSize-1);
    revolve(nums, 0,k-1);
    revolve(nums, k, numsSize - 1);
}
int main()
{
    int nums[] = { 1,2,3,4,5,6,7 };
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int k = 3;
    rotate(nums, numsSize, k);
    return 0;
}

int numJewelsInStones(char* jewels, char* stones) {
    int jewelsSize = strlen(jewels);
    int stonesSize = strlen(stones);
    int count = 0;
    for (int i = 0; i < jewelsSize; ++i)
    {
        for (int j = 0; j < stonesSize; ++j)
        {
            if (jewels[i] == stones[j])
                count++;
        }
    }
    return count;
}