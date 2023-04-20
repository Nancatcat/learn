#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//定义一个9次的循环
//9次的循环输出1-9的阶乘
//int main()	
//{
//	int x = 0;
//	int y = 0;
//	int m = 1;
//	int i = 1;
//	for (x = 1; x <9; x++);//控制9*9的总循环
//	{	
//		for (y = 1; y <= x; y++)//控制单层的循环
//		{
//			for (m = 1; m <= y; m++)//	控制打印单层的循环
//			{
//				i = m * y;
//				printf("%d*%d=%d ", m, y, i);
//				
//			}
//		}
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int m = 1;
//	for (x = 1; x < 9; x++);
//	{
//		for (y = 1; y <= x; y++)
//		{
//			m = y * x;
//			printf("%d*%d=%d\n", y, x, m);
//		}
//	}
//
//
//	return 0;
//}
//求10个整数的最大值
//先放下10个数，使用数组
//输入输出10个数
//10个数比较大小
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max= arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d\n", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}
//int main()
//{
//	int m = 1;
//	double y = 1.0;
//	double sum = 0.0;
//	double  x = 0;
//	for (y = 1; y <= 100; y++)
//	{
//		sum= m / y;
//		x = sum - m / y;
//	}
//	printf("%lf", x);
//	return 0;
////}
//int main()
//{
//
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (max <= arr[i])
//		{
//			max = arr[i];
//		}
//		
//	}
//	
//	printf("%d", max);
//	return 0;
//}
//int main()
//{
//	int m = 1;
//	double y = 1.0;
//	double sum = 1.0;
//	double  x = 0;
//	for (y = 1; y <= 100; y++)
//	{	
//		sum= m / y;
//		x = sum - (m / y);
//	}
//	printf("%lf", x);
//	return 0;
//}
//int main()
//{
//	int x =0;
//	int y = 0;
//	for (x = 9; x <= 100; x ++)
//	{
//		if (x / 10 == 9 || x % 10 == 9)
//		{
//			printf("%d ",x);
//			y++;
//		}
//	}
//	printf("\n%d\n", y);
//	return 0;
//}
//int main()
//{
//	int x = 1;
//	double y = 0.0;
//	double sum = 0;
//	double sum2 = 0;
//	for(y = 1.0; y <= 100.0; y += 2.0)
//	{
//		sum += x / y;
//    }
//	for (y = 2.0; y <= 100.0; y += 2.0)
//	{
//		sum2 += x / y;
//	}
//	printf("%lf\n", sum - sum2);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = arr[0];
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = (right - left) / 2 + left;
//	int k = 7;
//	int flang = 1;
//	while (left <= right)
//	{
//		if (k < arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k > arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if(k ==arr[mid])
//		{
//			flang = 1;
//			printf("找到了，下标是%d：", mid);
//			
//		}
//
//	}
//	
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = arr[0];
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int k = 7;
//	int flang =0;
//	while (left <= right)
//	{
//		int mid = (right - left) / 2 + left;
//		if (arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			flang = 1;
//			printf("找到了，下标是%d：", mid);
//			break;
//		}
//	}
//	if (flang == 0)
//	{
//		printf("没找到");
//		
//	}
//
//	return 0;
//}
//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


#include<time.h>
#include<stdlib.h>
void tese()
{	
	printf("************************\n");
	printf("**********1.猜数字********\n");
	printf("**********0.退  出********\n");
	printf("************************\n");
}
void game()
{
	
	int ret = rand()%100+1;
	int i = 0;
	while (1)
	{
		printf("请输入要猜的数字\n");
		scanf("%d", &i);
		if (i < ret)
		{
			printf("猜小了\n");
		}
		else if (i > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	int w = 0;
	srand((unsigned int)time(NULL)); 
	do
	{
		tese();
		scanf("%d", &w);
		switch (w)
		{
		case 1:
		{game();
		break; }
		case 0:
		{break;
		}

		default:
			printf("重新输入\n");
			break;

		}
	} while (w);
	return 0;
}