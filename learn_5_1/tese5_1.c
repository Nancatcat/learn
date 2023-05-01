#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char eng = 0;
//	while (scanf("%c", &eng) == 1)
//	{
//		if ((eng <= 'z') && (eng >= 'a'))
//		{
//			printf("%c\n", eng - 32);
//		}
//		if ((eng <= 'Z') && (eng >= 'A'))
//		{
//			printf("%c\n", eng + 32);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char eng = 0;
//	while (scanf("%c", &eng) == 1)
//	{
//		if ((eng <= 'z') && (eng >= 'a') || (eng <= 'Z') && (eng >= 'A'))
//		{
//			printf("%c 是字母\n",eng);
//		}
//		else
//		{
//			printf("%c 不是字母\n", eng);
//		}
//		getchar();
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &n);
//		if (n > max);
//		max = n;
//	}
//	printf("最高分是%d分\n", max);
//	return 0;
//}
#include<math.h>
int main()
{
	int i = 0;
	for (i =10000; i <= 99999; i++)
	{
		int sum = 0;//那个作用域使用那个作用域创建，不然会出bug，谨记
		int j = 0;
		for (j = 1; j <= 4; j++)
		{
			int k = (int)pow(10, j);
			sum+=(i / k )* (i % k);
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}