#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int flang = 1;
//	int count = 0;
//	for (int i = 100; i < 1000; i++)
//	{
//		flang = 1;
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flang = 0;
//			}
//		}
//		if (flang )
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int flang = 1;
//	int count = 0;
//	for (int i =100; i <1000; i++)
//	{
//		flang = 1;
//		for (int j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flang = 0;
//			}
//		}
//		if (flang)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n;
//    int sum = 0;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        sum += pow(-1, i + 1) * i;   //次方函数(-1)^(n+1)*n是通项
//    }
//
//    printf("%d", sum);
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	double sum = 0.0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += 1.0 / i;
//	}
//	printf("%.6lf", sum);
//	return 0;
//}
//int main()
//{
//    int n;
//    int k = -1;
//    int j = 0;
//    double sum = 0.0;
//    scanf("%d", &n);
//    for (int i = 1; i <= 2 * n - 1; i = i + 2)
//    {
//
//        k = -k;
//        j = j + i * k;
//        sum += 1.0 / j;
//    }
//    printf("%.3lf", sum);
//}

//#include<stdio.h>
//int main()
//{
//    int n;
//    int sum = 0;
//    int sum1 = 0;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        sum = sum + i;
//        sum1 += sum;
//    }
//    printf("%d", sum1);
//    return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int sum1 = 0;
//	for (int i = 1; i <=n; i++)
//	{
//		sum += i;
//		sum1 += sum;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	while (n)
//	{		
//		sum += n % 10;
//		n = n / 10;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	while (n != 1)
//	{
//		if (n % 2 == 0)
//		{
//			n = n / 2;
//		}
//		else
//		{
//			n = n*3 + 1;
//		}
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 2020; i++)
//	{
//		int j = i;
//		while (j)
//		{
//			if (j % 10 == 9)
//			{
//				count++;
//				break;
//			}
//			j /= 10;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//#include<stdlib.h>
//int main()
//{
//	int a, b, c;
//	while ((scanf("%d %d %d"), &a, &b, &c) == 3)
//	{
//		if (((a + b + c) / 3) >= 60)
//		{
//			countinue;
//		}
//		
//	}
//	return 0;
//}
#include <stdio.h>

int main() {
    int n, a, b, c, cnt;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if ((a + b + c) / 3 < 60)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}
