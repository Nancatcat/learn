#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int(is_leap_year( int y))
//{
//	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//
//		return 1;
//	else
//		return 0;
//	
//}
//			
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是否为闰年
//		//如果是闰年返回1
//		//不是闰年返回0
//		if (is_leap_year(y))
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}
//	
#include<math.h>
//int sushu(int m)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(m); i++)//判断是不是素数
//	{
//		if (m % i == 0)//如果余数是01，代表被整除所以返回0；
//			return 0;
//	}
//			return 1;//如果这个数没有被整除，代表是一个素数，返回这个素数
//}
//int main()
//{
//	int m = 0;//创建一个值
//	for(m=100;m<=200;m++)//规定他的数据范围
//		if (1 == sushu(m))
//		{
//			printf("%d\n", m);
//		}
//
//	return 0;
//}
int runn(int n)
   
{
	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
	return 1;
	else
	return 0;
      }
int main()
{
	int n = 0;
	for (n = 1000; n <= 2000; n++)//数据范围
	{
		if (1 == runn(n))
		{
			printf("%d\n", n);
		}
	}
	















	return 0;
}