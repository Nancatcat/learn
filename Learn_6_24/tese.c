#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int yaer = 0;
//	int month = 0;
//	scanf("%4d %2d", &yaer, &month);
//	int arr[12] = { 0 };
//	int i = 0;
//	for (i = 1; i <= 12; i++)
//	{
//		arr[i-1] = i;
//	}
//	if (month <= arr[5] && month > arr[2])
//	{
//		printf("spring\n");
//	}
//	if (month <= arr[8] && month > arr[5])
//	{
//		printf("spring\n");
//	}
//	if (month <= arr[11] && month > arr[8])
//	{
//		printf("spring\n");
//	}
//	if (month == arr[12] && month <= arr[3]&& month >= arr[0])
//	{
//		printf("spring\n");
//	}
//	return 0;
//}'
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%4d%2d", &year, &month);
//	if (month >= 3 && month <= 5)
//	{
//		printf("spring\n");
//	}
//	else if (month >= 6 && month <= 8)
//	{
//		printf("summer\n");
//	}
//	else if (month >= 9 && month <= 11)
//	{
//		printf("autumn\n");
//	}
//	else 
//	{
//		printf("winter\n");
//
//	}
//	return 0;
//}
#include<math.h>
//int main()
//{
//	float weight = 0.0;
//	float height = 0.0;
//	scanf("%f %f", &weight, &height);
//	float Bodyfat = weight / pow(height, 2.0);
//	if (Bodyfat >= 18.5 && Bodyfat <= 23.9)
//	{
//		printf("Normal\n");
//	}
//	else
//	{
//		printf("Abnormal\n");
//	}
//	return 0;
//
//}
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		
//	}
//	printf("%d", max);
//	return 0;
//}
//int main()
//{
//	char arr = 0;
//	while (1)
//	{
//		arr = getchar();
//		if (isalpha(arr))
//		{
//			printf("%c is an alphabet.\n", arr);
//		}
//		else
//		{
//			printf("is not an alphabet.\n");
//		}
//		getchar();
//	}
//	
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char a;
//	while (~scanf("%c", &a))
//	{
//		getchar();
//		if (a >= 65 && a <= 99 || a >= 97 && a <= 122)
//			printf("%c is an alphabet.\n", a);
//		else
//			printf("%c is not an alphabet.\n", a);
//
//
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[] = { 2,3,7 };
//	int flang = 0;
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		if (n % arr[i] == 0)
//		{
//			printf("%d ", arr[i]);
//			flang++;
//		}
//	}
//	if (flang == 0)
//	{
//		printf("n\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int positive = 0;
//	int negative = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&arr[i]);
//		if (arr[i] * 1 >=0)
//		{
//			positive++;
//		}
//		else
//		{
//			negative++;
//		}
//	}
//	printf("positive:%d\n", positive); 
//	printf("negative:%d\n", negative);
//	return 0;
//}
//int main()
//{
//	float Price = 0;
//	int month = 0;
//	int day = 0;
//	int discount = 0;
//	scanf("%f %d %d %d", &Price, &month, &day, &discount);
//	if (month == 11)
//	{
//		if (Price * 0.7 - 50.0 *discount  <= 0)
//		{
//			printf("0.00\n");
//		}
//		else if(Price * 0.7 - 50.0 * discount > 0)
//		{
//			printf("%.2f", Price * 0.7 - 50.0 * discount);
//		}
//	}
//	if (month == 12)
//	{
//		if (Price * 0.8 - 50.0 * discount <= 0)
//		{
//			printf("0.00\n");
//		}
//		else if (Price * 0.7 - 50.0 * discount >0)
//		{
//			printf("%.2f", Price * 0.8 - 50.0 * discount);
//		}
//	}
//
//
//	return 0;
//}
//int main()
//{
//	double a, b, c, d;
//
//
//	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
//	if (b == 11 && c == 11)
//	{
//		a = a * 0.7 - (50 * d);
//	}
//	else if (b == 12 && c == 12)
//	{
//		a = a * 0.8 - (50 * d);
//	}
//	printf("%0.2lf\n", a > 0 ? a : 0.0);
//	return 0;
//}//int main()
//{
//	float Price = 0;
//	int month = 0;
//	int day = 0;
//	int discount = 0;
//	float a = 0.0;
//	scanf("%f %d %d %d", &Price, &month, &day, &discount);
//	if (month == 11 && day == 11)
//	{
//		a = Price * 0.7 - (50.0 * discount);
//	}
//	else if (month == 12 && day == 12)
//	{
//		a = Price * 0.8 - (50.0 * discount);
//	}
//	printf("%.2f", a > 0 ? a : 0.0);
//}
#include <stdio.h>
int main()
{
    float a; char b, c;
    scanf("%f %c", &a, &b);
    if (b == 'y')
        c = 5;
    else
        c = 0;
    if (a <= 1.0)
        printf("%d", 20 + c);
    else
        (int)(a * 10) % 10 != 0 ? 
        printf("%d", 20 + (int)a + c) : 
        printf("%d", 20 + (int)a - 1 + c);
    return 0;
}
//int main()
//{
//	float a = 0.0;
//	char b = 0;
//	if(scanf("%f", &a)!=EOF)
//	getchar();
//	scanf("%c", &b);
//	int c = 0;
//	if (b == 'y' || b == 'Y')
//	{
//		c = 5;
//	}
//	else
//	{
//		c = 0;
//	}
//	if (a <= 1.0)
//	{
//		printf("%d\n", 1 * 20 + c);
//	}
//	else
//	{
//		int d = (a + 0.9) * 10;
//		d = d / 10;
//		printf("%d", 1 * 20 + (d- 1)+c);
//	}
//	return 0;
//}