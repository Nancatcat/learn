#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr1[10] = { 1,2,3,4,4,3,2,1,5,9 };
//	int arr2[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr2[i] = 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= 10 - 1; j++)
//		{
//			if (arr1[i] == arr1[j + 1])
//			{
//				arr2[j] = 2;
//			}
//			if (arr1[i] == arr1[j])
//			{
//				arr2[j] = 2;
//			}
//
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr2[i] == 1)
//		{
//			printf("%d ", arr1[i]);
//		}
//
//	}
//	return 0;
//}
//void loof(int* arr1, int* arr2)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10 - 1; j++)
//		{
//			if (arr1[i] == arr1[j])
//			{
//				if (i == j)
//				{
//					;
//				}
//				else
//				{
//					arr2[j] = 1;
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,3,2,1,4,6 };
//	int arr2[10] = { 0 };
//	loof(arr1, arr2);
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr2[i] ==0)
//		{
//			printf("%d ", arr1[i]);
//		}
//
//	}
//	return 0;
//}
//void loot(int arr[], int* dog1, int* dog2, int sz)
//{
//	int ret = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	int pow = 0;
//	for (pow = 0; pow < 32; pow++)
//	{
//		if (((ret>> pow) & 1) == 1)
//		{
//			break;
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pow) & 1 )== 1)
//		{
//			*dog1 ^= arr[i];
//		}
//		else
//		{
//			{
//				*dog2 ^= arr[i];
//			}
//		}
//	}
//	printf("%d %d", *dog1, *dog2);
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int dog1 = 0;
//	int dog2 = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	loot(arr, &dog1, &dog2, sz);
//	return 0;
//}
#include<stdlib.h>
#include<assert.h>
//int Atoi(char* p1)
//{
//	//空指针
//	assert(p1);
//	int flang = 1;
//	int  n = 0;
//	//开头空格
//	while (*p1 == ' ')
//	{
//		p1++;
//	}
//	//判断正负
//	if (*p1 == '-')
//	{
//		flang = -1;
//		p1++;
//	}
//	if (*p1 == '+')
//	{
//		flang = 1;
//		p1++;
//	}
//	//转换
//	while (*p1 != '\0')
//	{
//		if (isdigit(*p1))
//		{
//			n = (n * 10) + (*p1 - '0');
//			if (n > INT_MAX)
//			{
//				n = INT_MAX;
//			}
//			if (n < INT_MIN)
//			{
//				n = INT_MIN;
//			}
//		}
//		else
//		{
//			return n * flang;
//		}
//		p1++;
//	}
//	return n * flang;
//}
//
//int main()
//{
//	char* p1 = "123456789";
//	char* p2 = "-123456789";
//	char* p3 = "-12345a789";
//	char* p4 = "+12345a789";
//	char* p5 = " ";
//
//	int a = Atoi(p1);
//	int b = Atoi(p2);
//	int c = Atoi(p3);
//	int d = Atoi(p4);
//	int e = Atoi(p5);
//
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//
//	return 0;
//}
//
//#define SWAP_BIT(n) n=(((n&0x55555555)<<1)+((n&0xaaaaaaaa)>>1))
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	SWAP_BIT(n);
//	printf("%d\n", n);
//	return 0;
 //}
//int main()
//{
//	char a = 0, ch;
//	printf("%c", ch);
//}
#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 0;
//	int b = 1;
//	int c = a + b;
//	while (1)
//	{
//		if (n == b)
//		{
//			printf("%d\n", 0);
//			break;
//		}
//		else if (n < b)
//		{
//			if (abs(a - n) > abs(b - n))
//			{
//				printf("%d", abs(b - n));
//				
//			}
//			else
//			{
//				printf("%d", abs(a - n));
//
//			}
//			break;
//		}
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return 0;
//}
//#include<string.h>
//void Space(char* arr, int len)
//{
//	char* str = arr;
//	int count = 0;
//	while (*str)
//	{
//		if (*str == ' ')
//		{
//			count++;
//		}
//			str++;
//		
//	}
//	int dog1 = len - 1;
//	int dog2 = len + count * 2-1;
//	while (dog1 != dog2)
//	{
//		if (str[dog1] != ' ')
//		{
//			str[dog2--] = str[dog1--];
//		}
//		else
//		{
//			dog1--;
//			str[dog2--] = '0';
//			str[dog2--] = '2';
//			str[dog2--] = '%';
//		}
//
//	}
//
//}
//int main()
//{
//	char arr[50] = "hello world hello bit";
//	int len = strlen(arr);
//	Space(arr, len);
//	printf("%s\n", arr);
//	return 0;
//}