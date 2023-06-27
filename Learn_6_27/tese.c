#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0.0;
//	while (scanf("%d", &n) == 1)
//	{
//		if (n > 0)
//		{
//			printf("1\n");
//		}
//		else if (n<0)
//		{
//			printf("0\n");
//		}
//		else
//		{
//			printf("0.5\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int len = 0;
//	int wide = 0;
//	int high = 0;
//	while (scanf("%d %d %d", &len, &wide, &high)!=EOF)
//	{
//		if ((len + wide) > high && (wide + high) > len && (high + len) > wide)
//		{
//			if (len == wide && wide == high)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if (len == wide || wide == high || high == len)
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//
//}
//int main()
//{
//	int estimate[3] = { 0 };
//	int actual[3] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &estimate[i]);
//	}
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &actual[i]);
//	}
//	int flang = 0;
//		if (estimate[0] < actual[0])
//		{
//			printf("yes\n");
//			return 0;
//		}
//		else if (estimate[0] == actual[0])
//		{
//			if (estimate[1] < actual[1])
//			{
//				printf("yes\n");
//				return 0;
//			}
//			else if (estimate[1] == actual[1])
//			{
//				if (estimate[2] <= actual[2])
//				{
//					printf("yes\n");
//					return 0;
//				}
//				else
//				{
//					printf("no\n");
//					return 0;
//				}
//				
//			}
//			else
//			{
//				printf("no\n");
//				return 0;
//			}
//
//		}
//		else
//		{
//			printf("no\n");
//			return 0;
//		}
//	
//	return 0;
//}
//#include <math.h>
//int main()
//{
//    float a = 0.0;
//    float b = 0.0;
//    float c = 0.0;
//    while (scanf("%f %f %f", &a, &b, &c) == 3)
//    {
//        if (a == 0)
//        {
//            printf("Not quadratic equation\n");
//        }
//        else
//        {
//            float deta = b * b - 4 * a * c;
//            if (deta >= 0)
//            {
//                float result1 = (-b + sqrt(deta)) / (2 * a);
//                float result2 = (-b - sqrt(deta)) / (2 * a);
//                if (deta > 0)
//                {
//                    printf("x1=%.2f;x2=%.2f\n", result2, result1);
//                }
//                else
//                {
//                    if (result1 == 0)
//                    {
//                        printf("x1=x2=0.00\n");
//                    }
//                    else
//                    {
//                        printf("x1=x2=%.2f\n", result1);
//                    }
//                }
//            }
//            else
//            {
//                float shibu = (-b) / (2.0 * a);
//                float xubu = (sqrt(-deta)) / (2.0 * a);
//                if (xubu < 0)
//                {
//                    xubu = -xubu;
//                    printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", shibu, xubu, shibu, xubu);
//                }
//                else
//                {
//                    printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", shibu, xubu, shibu, xubu);
//                }
//            }
//        }
//    }
//    return 0;
//}
//int Leapyear(int year)
//{
//	if ((year%4==0)&&(year % 100 != 0 )||(year % 400 == 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	int mine = 0;
//	int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%4d %d", &year, &mine) != EOF)
//	{
//		int sum = Leapyear(year);
//		if (sum==1&&mine == 2)
//		{
//			printf("%d\n", (day[mine] + sum));
//		}
//		else
//		{
//			printf("%d\n", day[mine]);
//		}
//	}
//	return 0;
//}	
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int sum = (a + b + c) / 3;
//	if (sum >= 60)
//	{
//		printf("NO\n");
//	}
//	else
//	{
//		printf("YES\n");
//	}
//	return 0;
//}
//int main()
//{
//    char arr[13];
//    int i, j;
//    scanf("%s", arr);
//    int s = 0;
//    for (i = 0, j = 1; i < 11; i++)
//    {
//        if (arr[i] != '-')
//        {
//            s += (arr[i] - '0') * j;
//            j++;
//        }
//    }
//    int m = s % 11;
//    if (m == arr[12] - '0' || (m == 10 && arr[12] == 'X'))
//    {
//        printf("Right\n");
//    }
//    else
//    {
//        if (m == 10)
//        {
//            for (i = 0; i < 12; i++)
//            {
//                printf("%c", arr[i]);
//            }
//            printf("X");
//        }
//        else {
//            for (i = 0; i < 12; i++)
//            {
//                printf("%c", arr[i]);
//            }
//            printf("%d", m);
//        }
//    }
//}
//
//
//void calculator(float a1, char ch, float a2)
//{
//	if (ch == '+')
//	{
//		printf("%.4f+%.4f=%.4f", a1, a2, a1 + a2);
//	}
//}
//int main()
//{
//	float a1 = 0.0;
//	char ch = 0;
//	float a2 = 0.0;
//	scanf("%f%c%f", &a1, &ch, &a2);
//	if (ch!= '+' || ch != '-' || ch != '*' || ch != '/')
//	{
//		printf("Invalid operation!\n");
//	}
//	else
//	{
//		if (ch == '/' && a2 == 0.0)
//		{
//			printf("Wrong!Division by zero!\n");
//		}
//		else
//		{
//			 calculator(a1, ch, a2);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    double a, b;
//    char ch;
//    while (scanf("%lf %c %lf", &a, &ch, &b) != EOF)
//    {
//        if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
//        {
//            if (ch == '+')
//                printf("%.4lf%c%.4lf=%.4lf\n", a, ch, b, a + b);
//            else if (ch == '-')
//                printf("%.4lf%c%.4lf=%.4lf\n", a, ch, b, a - b);
//            else if (ch == '*')
//                printf("%.4lf%c%.4lf=%.4lf\n", a, ch, b, a * b);
//            else
//            {
//                if (b == 0.0)
//                    printf("Wrong!Division by zero!\n");
//                else
//                    printf("%.4lf%c%.4lf=%.4lf\n", a, ch, b, a / b);
//            }
//        }
//        else
//            printf("Invalid operation!\n");
//    }
//    return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("Happy new year!Good luck!\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	long long sum = 0;
//	for (i = 0; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%lld", sum);
//	return 0;
//}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int x = 0;
	int y = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			x++;
		}
		else if(i%2==1)
		{
			y++;
		}
	}
	printf("%d %d", y, x);

	return 0;
}