#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	while (scanf("%d %d", &n, &m) == 2)
//	{
//		int max = 0;
//		int min = 0;
//		int r = 0;
//		if (r=n % m)
//		{
//			n = m;
//			m = r;
//		}
//		max = m;
//		min = m * n / max;
//		printf("%d", max + min);
//	}
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	int i = 0;
//	while (n)
//	{
//		int w = n % 10;
//		if(w % 2 == 0)
//		{
//			w = 0;
//		}
//		else
//		{
//			w = 1;
//		}
//		ret += w * pow(10, i++);
//		n /= 10;
//	}
//	printf("%d\n", ret);
//	
//	return 0;
//}
//int bian(long long n)
//{
//	int b = n % 10;
//	int c = b % 2;
//	n = n/10;
//	if (n)
//	{
//		return 10 * bian(n) + c;
//	}
//	return c;
//}
//
//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	int ret = bian(n);
//	printf("%d", ret);
//	return 0;
//
//}
//int main()
//{
//	int a, b, c, d;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	float sum = a * 0.2 + b * 0.1 + c * 0.2 + d * 0.5;
//	printf("%.1f", sum);
//	return 0;
//}
//int main()
//{
//	int a, b, c, d;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	printf("%d", (a + b - c) * d);
//	return 0;
//}
//
//int main() {
//    int x1, x2, y1, y2;
//    scanf("%d %d", &x1, &y1);
//    scanf("%d %d", &x2, &y2);
//    x1 = x1 - x2;
//    y1 = y1 - y2;
//    printf("%d", x1 * x1 + y1 * y1);
//    return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", (a + b) % 100);
//	return 0;	
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		if(n>=140)
//		{
//			printf("Genius\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n >=0&&n<=100)
//		{
//			if (n >= 60)
//			{
//				printf("Pass\n");
//			}
//			else
//			{
//				printf("Fail\n");
//			}
//		}
//	}
//	return 0;
//}
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n % 2 == 1)
//		{
//			printf("Odd\n");
//		}
//		else
//		{
//			printf("Even\n");
//		}
//	}
//	return 0;
//}
#include<string.h>
//int main()
//{
//	char arr[100];
//	while (1)
//	{
//		fgets(arr, 100, stdin);
//		char* p = arr;
//		if (*p == 'A' || *p == 'a' ||
//			*p == 'E' || *p == 'e' ||
//			*p == 'I' || *p == 'i' ||
//			*p == 'O' || *p == 'o' ||
//			*p == 'U' || *p == 'u')
//		{
//			printf("Vowel\n");
//
//		}
//		else
//		{
//			printf("Consonant\n");
//		}
//		memset(arr, '0', sizeof(arr));
//	}
//		
//	return 0;
//}

//int main() 
//{
//    char ch = 0;
//    while (scanf("%c", &ch) != EOF) 
//    {
//        if (ch == '\n')
//            continue;
//        if (ch >= 'a' && ch <= 'z')
//            ch -= 32;
//        if (ch == 'A' || ch == 'E' || ch == 'I'
//            || ch == 'O' || ch == 'U')
//        {
//            printf("Vowel\n");
//        }
//        else
//        {
//            printf("Consonant\n");
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    int x, l, r;
//    scanf("%d %d %d", &x, &l, &r);
//    if (x >= l && x <= r)
//    {
//        printf("true");
//    }
//    else
//    {
//        printf("false");
//    }
//    return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (((n%4==0)&&(n%100!= 0))|| n%400== 0)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}
//#include<ctype.h>
//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	if (isalpha(ch))
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}
