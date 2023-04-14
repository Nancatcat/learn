#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int sushu(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	
//	return 1;
//}
//int main()
//{
//	int m = 0;
//	int sum = 0;
//	for (m = 100; m <= 200; m++)
//	{
//		if (1 == sushu(m))
//			sum++;
//			printf("%d\n", m);
//	
//
//	}
//	printf("\n%d\n", sum);
//	return 0;
//}

//int nian( int run)
//{
//	if ((run % 4 == 0) && (run % 100 != 0) || (run % 400 == 0))
//		return 1;
//}
//int main()
//{
//	int run = 0;
//	for (run = 1000; run <= 2000; run++)
//	{
//		if (1 == nian(run))
//			printf("%d\n", run);
//	}
//
//	return 0;
//}
//int sushu(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (right - left) / 2 + left;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义数组
//	int k = 0;
//	scanf("%d", &k);//定义输入值
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组长度
//	
//	
//	int run = sushu(arr, k, sz);//判断函数
//	   if (run==-1)
//		printf("没找到\n");
//	
//	else
//		printf("找到了，下标是:%d\n",run);
//	return 0;
//}
void add(int * num)
{
	 *num=* num+1;
	
}
int main()
{
	int num = 0;
	add(&num);
	printf("%d", num);
	add(&num);
	printf("%d", num);
	add(&num);
	printf("%d", num);
	return 0;
}