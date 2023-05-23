#define _CRT_SECURE_NO_WARNINGS 1
#include <assert.h>
#include <stdio.h>
//size_t my_strlen(char const* p)
//{
//	assert(p!= NULL);
//	size_t count = 0;
//	while (*p)
//	{
//		p++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";
//	size_t len = my_strlen(arr);
//	printf("%zd\n",len);
//	return 0;
//}
//输入一个整数数组，实现一个函数，

//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，

//所有偶数位于数组的后半部分。

//void Sqort(int arr[], int sz)
//{
//	int *left = arr;
//	int *right = arr+sz - 1;
//	while (left < right)
//	{
//		if (*left% 2 == 1)
//		{
//			left++;
//		}
//		else if (*right% 2 == 0)
//		{
//			right--;
//		}
//		else
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	Sqort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的X形图案。

//int main()
//{
//    int n = 0;
//    int i = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (i==j || j==(n-i-1))
//                {
//                    printf("*"); 
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n - i - 1; j++)
//            {
//                printf("  ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

