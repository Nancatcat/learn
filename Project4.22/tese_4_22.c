#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void sal(int n)
//{
//	int i = 0;
//	int j = 0;
//	int time = 1;
//	for (i = 1; i <= n; i++)//控制总乘阶
//	{	
//		for (j = 1; j <= i; j++)//控制单个数字的乘法
//		{
//			time = j * i;
//			printf("%d*%d=%d ",j,i,time);
//		}
//		printf("\n");//判断单个循环是否结束，并换行
//	
//	}
//}
//int main()
//{
//	int n = 0;//定义这个随机数
//	printf("请输入要计算的数字：");
//	scanf("%d", &n);//输入
//	sal(n);//函数传递的值
//	
//	return 0;
//}
//
//void com(int* pa, int* pb)
//{
//	int tab = *pa;
//	*pa = *pb;
//	*pb = tab;
//
//}
//int main()
//{
//	int a = 0;//定义要交换的值
//	int b = 0;
//	scanf("%d%d", &a, &b);//输入
//	printf("交换前\n");
//	printf("%d %d\n", a, b);//输出未交换前的数
//	com(&a, &b);//函数
//	printf("交换后\n");
//	printf("%d %d\n", a, b);//输出交换后的数
//
//	return 0;
//}
//int Year(int year)
//{
//	return ((year % 4 == 0) && (year / 100 != 0) || (year % 400 == 0));//判断是否为闰年
//}
//int main()
//{
//	int year = 0;//定义要判断的值
//	printf("请输入要判断的年份: ");
//	scanf("%d", &year);//输入
//	int ret = Year(year);//定义ret的值等于year这个函数返回的值
//	if (ret==1)//如果返回ret的值是1，他是闰年
//	{
//		printf("%d:是闰年", year);
//	}
//	if (ret == 0)//如果返回ret的值是0，他不是闰年
//	{
//		printf("%d:不是闰年", year);
//	}
//	return 0;
//}
#include<math.h>
int prime(int i)
{
	int j = 0;
	for (j = 2; j <= sqrt(i); j++)
	{
		if (i % j == 0)
			return 0;
	}
	return i;
	
}
int main()
{	int i = 0;
	
	for (i = 100; i <= 200; i++)
	{
		int ret = prime(i);
		if (ret)
		{
			printf("%d ", ret);
		}
	}

	return 0;
}
