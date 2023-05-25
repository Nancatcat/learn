#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//计算器
//冒泡排序
//qsort(快速排序）
//自行编写qsort
//1.计算器
//void nume()
//{
//	printf("*******************************\n");
//	printf("**********   0.Exit   *********\n");
//	printf("******  1.Add     2.Sub  ******\n");
//	printf("******  3.Mil     4.Div  ******\n");
//	printf("*******************************\n");
//	printf("*******************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	nume();
//	do
//	{
//		printf("请选择>");
//		scanf("%d", &input);
//		int ret = 0;
//		
//		switch (input)
//		{
//		case 1:
//		{	printf("请输入要计算的数字>");
//			int x = 0;
//			int y = 0;
//			scanf("%d %d", &x, &y);
//			int ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//
//		}
//
//		case 2:
//		{	
//			printf("请输入要计算的数字>");
//			int x = 0;
//			int y = 0;
//			scanf("%d %d", &x, &y);
//			int ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		}
//		case 3:
//		{	
//			printf("请输入要计算的数字>");
//			int x = 0;
//			int y = 0;
//			scanf("%d %d", &x, &y);
//			int ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		}
//		case 4:
//		{	
//			printf("请输入要计算的数字>");
//			int x = 0;
//			int y = 0;
//			scanf("%d %d", &x, &y);
//			int ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		}
//		default:
//		{
//			printf("输入错误，请重新输入\n");
//		}
//
//		case 0:
//		{
//			printf("退出成功\n");
//			break;
//		}
//		}
//	} while (input);
//	return 0;
//}//版本一
int Case(int (*p)(int x, int y))
{
	printf("请输入要计算的数字>");
	int x = 0;
	int y = 0;
	scanf("%d %d", &x, &y);
	int ret = p(x, y);
	return ret ;
	
}
//int main()
//{
//	int input = 0;
//	nume();
//	do
//	{
//		printf("请选择>");
//		scanf("%d", &input);
//		int ret = 0;
//		switch (input)
//		{
//		case 1:
//		{	printf("%d\n", ret = Case(Add));
//			break;
//		}
//
//		case 2:
//		{	printf("%d\n", ret = Case(Sub));
//			break;
//		}
//		case 3:
//		{	printf("%d\n", ret = Case(Mul));
//			break;
//		}
//		case 4:
//		{	printf("%d\n", ret = Case(Div));
//			break;
//		}
//		default:
//		{	printf("输入错误，请重新输入\n");
//		}
//
//		case 0:
//		{	printf("退出成功\n");
//			break;
//		}
//		}
//	}while (input);
//	return 0;
//}//版本二
//int main()
//{
//	int input = 0;
//	int(*p[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	nume();
//	do
//	{
//		printf("请选择>");
//		scanf("%d", &input);
//		int ret = 0;
//		if (input == 0)
//		{
//			printf("退出成功\n");
//			break;
//		}
//		else if ((input <= 4) || (input >= 1))
//		{
//			printf("请输入要计算的值>");
//			int x = 0;
//			int y = 0;
//			scanf("%d %d", &x, &y);
//			ret = p[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//		
//	} while (input);
//	return 0;
//}//版本三



//二、冒泡排序
//void Qsort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Qsort(arr, sz);
//	return 0;
//}//基础 版本
#include<stdlib.h>
int cmp(const void* e1, const void* e2)
{
	return (*(int*)e1) - (*(int*)e2);
}
//
//void Qsort(int arr[], int sz)
//{
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	//int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Qsort(arr, sz);
//	return 0;
//}//qsort的基本用法
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}



}
void bubble_qsort(void *base,int sz,int width,int(*cmp)(const void*e1,const void*e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base +( j + 1 )* width)>0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1 )* width, width);
			}
		}
	}
}
int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_qsort(arr, sz,sizeof(arr[0]),cmp);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}//自行编写qsort函数