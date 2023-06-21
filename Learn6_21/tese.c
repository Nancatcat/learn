#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//    int a = 1234;
//    printf("%o %X", a, a);
//    return 0;
//}
//int main()
//{
//	char a = 0;
//	int b = 0;
//	float c = 0;
//	scanf("%c\n%d\n%f", &a, &b, &c);
//	printf("%c %d %f", a, b, c);
//	return 0;
//}
//int main()
//{	
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d%8d%8d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int a, b;
//	scanf("%x %o", &a, &b);
//	printf("%d", (a + b));
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", a+b);
//	return 0;
//}
//int main()
//{	
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", a / b);
//
//	return 0;
//}
//int main()
//{	
//	float a = 0;
//	scanf("%f", &a);
//	printf("%d", ((int)a) % 10);
//	return 0;
//}
//int main()
//{	
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", a * 100);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a > 0 && b < 10000)
//	{
//		printf("%d ", a / b);
//		printf("%d", a % b);
//	}
//	else
//	{
//		printf("输出错误\n");
//	}
//	return 0;
//}
#include<limits.h>
//int main()
//{	
//	int a = 0;
//	scanf("%d", &a);
//	if (a <=INT_MAX)
//	{
//		printf("%d", a % 10);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a <= INT_MAX)
//	{
//		printf("%d", a%100/10);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a + b > 8)
//	{
//		if ((a + b) % 7 == 0)
//		{
//			printf("%d", 7);
//		}
//		else
//		{
//			printf("%d", (a + b) % 7);
//		}
//	}
//	else
//	{
//		printf("%d", a + b);
//	}
//	return 0;
//}
//int main()
//{
//	long seconds = 0;
//	scanf("%ld", &seconds);
//	printf("%ld %ld %ld", (seconds / 3600), (seconds % 3600 / 60), (seconds % 3600 % 60));
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	a = 1 << a;
//	printf("%d", a);
//	return 0;
//}
//使用的是C语言
#include<stdio.h>
int main() {
    long int age, second;//需用到长整型
    scanf("%ld", &age);
    second = age * 31560000;
    printf("%ld", second);
    return 0;
}