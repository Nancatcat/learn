#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int num(int i)
//{
//	if ((i % 4 == 0) && (i / 100 != 0) || i % 400 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (num(i) == 1)
//		{
//			sum++;
//			printf("%d ",i);
//		} 
//	}
//	printf("\n一共有%d个闰年\n", sum);
//		return 0;
//}
//void big(int* pa ,int* pb)
//{
//	int tab = 0;
//	tab = *pa;
//	*pa = *pb;
//	*pb = tab;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d%d",a, b);
//	int* pa = &a;
//	int* pb = &b;
//	big(pa, pb);
//	printf("%d%d", a, b);
//
//
//	return 0;
//}
//#include<math.h>
//int num(int i)
//{
//	int j = 0;
//	for(j=2;j<=sqrt(i);j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}	
//	}
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (1==num(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int num(int i)
//{
//	return ((i % 4 == 0) && (i / 100 != 0) || (i % 400 == 0));
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (1 == num(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int num(int arr[], int k, int sz)
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
//		else if (arr[mid] >k)
//		{
//			right = mid - 1;
//		}
//		else
//		
//			return mid;
//		
//	}
//	return - 1;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = num(arr, k, sz);
//		if (ret==-1)
//			printf("没找到\n");
//		else
//			printf("找到了，下标是%d\n", ret);
//	return 0;
//}
// add(int *pa)
//{
//	*pa = *pa + 1;
//	
//}
//int main()
//{
//	int num = 0;
//	
//	add(&num);
//	printf("%d", num);
//	add(&num);
//	printf("%d", num);
//
//	add(&num);
//	printf("%d", num);
//
//	add(&num);
//	printf("%d", num);
//
//
//	
//
//	return 0;
//}