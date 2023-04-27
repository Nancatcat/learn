#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//递归法
//int Fib(int n)
//{
//	if (n == 2 || n == 1)
//	{
//		return 1;
//	}
//	else
//	return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int rey = Fib(n);
//	printf("第%d个斐波那契切数字是：%d", n, rey);
//	return 0;
//}
//迭代法 1 1 2 3 5 8 13 21 34 55
//int	Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int i = 0;
//	if (n <= 2)
//		return n;
//	for (i = 0; i <= n - 3; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("第%d个斐波那契切数字是：%d", n, ret);
//	return 0;
//}
//int Add(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if (k > 0)
//	{	
//		return n * Add(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n,&k);
//	int ret = Add(n, k);
//	printf("%d 的%d次方是%d", n,k,ret);
//	return	0;
//}
//int DigitSum(int n)
//{
//	if (n <= 9)
//	{
//		return n;
//	}
//	else
//	{
//		return n%10+ DigitSum(n/10);
//	}
//}
//int main()
//{	
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d", ret);
//	return 0;
//}
//int reverse_string(char* string)
//{
//	if(*string!='\0')
//	{
//		string++;
//		reverse_string(string);
//		printf("%c",string-1);
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	return i;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int  i = String(arr);
//	printf("%d", i);
//
	//char* string = arr;
	//reverse_string(string);
	//return 0;
 //}
//int  String(char* arr)
//{
//	int i = 0;
//	while (*arr != '\0')
//	{
//		i++;
//		arr++;
//		
//	}
//	return 0;
//}
//递归
//int String(char* arr)
//{
//	if (*arr == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		arr++;
//		return 1+String(arr);
//
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int  i = String(arr);
//	printf("%d", i);
//	return 0;
//}
//递归n的乘阶
//int Add(int n)
//{
//	if (n == 1||n==0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * (n - 1);
//	}
//	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Add(n);
//	printf("%d", ret);
//	return 0;
//}
//int Add(int  n)
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= n; i++)
//	{
//		j = j * i;
//	}
//	return j;
//}
//int main()
//{
//	int n = 0;	
//	scanf("%d", &n);
//	int ret = Add(n);
//	printf("%d", ret);
//	return 0;
//}
void print(n)
{
	if (n <= 9)
	{
		printf("%d ", n);
	}
	else
	{
		print(n / 10);
		printf("%d ", n % 10);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	return 0;
}