#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//小乐乐走台阶
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return n;	
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请问有多少台阶>");
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("有%d种走法\n", ret);
//	return 0;
//
//}

//int main()
//{
//	int n = 0;
//	printf("请输入要创建的数组大小");
//	scanf("%d", &n);
//	int del = 0;
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	printf("请输入数组元素");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("请输入要删除的数字");
//	scanf("%d", &del);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}

int main()
{
	int n = 0;
	printf("请输入总科目成绩");
	scanf("%d", &n);
	int arr[100] = { 0 };
	int i = 0;
	int max = 0;
	int min = 0;
	printf("请输入单科目成绩");
	for (i = 0; i < n; i++)
	{
		scanf("%d ", &arr[i]);
		if (arr[max] < arr[i])
		{
			max = i;
		}
		if (arr[min] > arr[i])
		{
			min = i;
		}

	}
	printf("最高分和最低分的差为%d",max-min);
	return 0;
}