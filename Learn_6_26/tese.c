#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n >= 100 && n < 500)
//	{
//		printf("%.1f", n * 0.9);
//	}
//	if (n >= 500 && n < 2000)
//	{
//		printf("%.1f", n * 0.8);
//	}
//	if (n >= 2000 && n < 5000)
//	{
//		printf("%.1f", n * 0.7);
//	}
//	if (n >= 5000)
//	{
//		printf("%0.1f", n * 0.6);
//	}
//
//	return 0;
//}
//int main()
//{
//    int rice = 0;
//    scanf("%d", &rice);
//    int walk = rice / 1;
//    int cart = rice / 10 + 10;
//    if (walk <= 10)
//    {
//        printf("w");
//    }
//    else
//    {
//        printf("v");
//    }
//    return 0;
//}
//int main()
//{
//    int x = 0;
//    int y = 0;
//    scanf("%d %d", &x, &y);
//    int x1 = 0;
//    int y1 = 0;
//    scanf("%d %d", &x1, &y1);
//    if (x1 == x)
//    {
//        y > y1 ? printf("d") : printf("u");
//    }
//    else
//    {
//        x > x1 ? printf("r") : printf("l");
//    }
//    return 0;
//}
//int main()
//{
//    int x = 0;
//    int y = 0;
//    scanf("%d %d", &x, &y);
//    int x1 = 0;
//    int y1 = 0;
//    scanf("%d %d", &x1, &y1);
//    if (x1 == x)
//    {
//        y > y1 ? printf("d") : printf("u");
//    }
//    else
//    {
//        x > x1 ? printf("r") : printf("l");
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int x, y, x1, y1;
//    scanf("%d %d\n%d %d", &x, &y, &x1, &y1);
//    if (x1 - x == 1)
//        printf("r");
//    if (x1 - x == -1)
//        printf("l");
//    if (y1 - y == 1)
//        printf("u");
//    if (y1 - y == -1)
//        printf("d");
//    return 0;
//}
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    switch (a)
//    {
//    case 1:printf("Monday"); break;
//    case 2:printf("Tuesday"); break;
//    case 3:printf("Wednesday"); break;
//    case 4:printf("Thursday"); break;
//    case 5:printf("Friday"); break;
//    case 6:printf("Saturday"); break;
//    case 7:printf("Sunday");
//    }
//    return 0;
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		switch (n)
//		{
//		case 200:
//		{
//			printf("OK\n");
//			break;
//		}
//		case 202:
//		{
//			printf("Accepted\n");
//			break;
//		}
//		case 400:
//		{
//			printf("Bad Request\n");
//			break;
//		}
//		case 403:
//		{
//			printf("Forbidden\n");
//			break;
//		}
//		case 404:
//		{
//			printf("Not Found\n");
//			break;
//		}
//		case 500:
//		{
//			printf("Internal Server Error\n");
//			break;
//		}
//		case 502:
//		{
//			printf("Bad Gateway\n");
//			break;
//		}
//		}
//	}
//	return 0;
//}