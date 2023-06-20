#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	float n = 0.0;
//	scanf("%f", &n);
//	printf("%.3f", n);
//
//	return 0;
//}
//int main()
//{
//
//	char a = getchar();
//	putchar(a);
//	return 0;
//}
//int main()
//{
//	char arr[3][3] = { 0 };
//	int i = 0;
//	char a;
//	scanf("%c", &a);
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%c", a);
//
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	char n = 0;
//	scanf("%c", &n);
//	int i = 0;
//	for (i = 1; i <= 3; i++) 
//	{
//		int j = 0;
//		for ( j = 0; j <= 3 - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j =0; j <(2*i)-1; j++)
//		{
//			printf("%c", n); 
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < (2 * 2 - 1 - i-i); j++)
//		{
//			printf("%c", n);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//    float n = 0.0; 
//    scanf("%f", &n);
//    int m = n;
//    if (n > 0)
//    {
//        if (n + 0.5 >= m + 1)
//        {
//            printf("%d", m + 1);
//        }
//        else
//        {
//            printf("%d", m);
//        }
//
//    }
//    else
//    {
//        if (n - 0.5 < m - 1)
//        {
//            printf("%d", m - 1);
//        }
//        else
//        {
//            printf("%d", m);
//        }
//    }
//    return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", a > b ? a : b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("score1=%d,score2=%d,score3=%d", a ,b,c);
//	return 0;
//}

//int main()
//{
//	int a;
//	double b, c, d;
//	scanf("%d;%lf£¬%lf£¬%lf", &a, &b, &c, &d);
//	printf("The each subject score of No. %d is %.2lf,%.2lf,%.2lf.", a, b, c, d);
//	return 0;
//}
//int main()
//{
//    int a;
//    double b, c, d;
//    scanf("%d;%lf,%lf,%lf", &a, &b, &c, &d);
//    b = (int)(b * 100 + 0.5) / 100.0;
//    printf("The each subject score of  No. %d is %.2lf, %.2lf, %.2lf.", a, b, c, d);
//    return 0;
//}
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int date = 0;
//    scanf("%4d%2d%2d", &year, &month, &date);
//    printf("year=%d\nmonth=%02d\ndate=%02d", year, month, date);
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("a=%d,b=%d", &a, &b);
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//    printf("a=%d,b=%d", a, b);
//    return 0;
//}
//int main()
//{
//    char a = 0;
//    while ((a = getchar()) != EOF)
//    {
//        getchar();
//        if (a >= 'A' && a <= 'Z')
//        {
//            putchar(a+32);
//            printf("\n");
//        }
//        else
//        {
//            putchar(a-32);
//            printf("\n");
//
//        }
//    }
//    return 0;
//}
#include <stdio.h>
int main()
{
	int i = 0xABCDEF;
	printf("%15d\n", i);
	return 0;
}
