#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int coun;
//void move(int x, int y)
//{
//	printf("%c->%c\n", x, y);
//}
//
//void hanoi(int n, char a, char b, char c)
//{	
//	if (n == 1)
//	{
//		coun++;
//		move(a, c);
//	} 
//	else
//	{
//		hanoi(n - 1, a, c, b);
//		move(a, c);
//		coun++;
//		hanoi(n - 1, b, a, c);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hanoi( n, 'a', 'b', 'c');
//	printf("%d\n", coun);
//
//	return 0;
//}
  //4.23 (8.51)开始

////hanoi问题，自我思考
//int sum;
//void move(int x, int y)
//{
//	printf("%c->%c\n", x,y);
//}
//void hanoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		sum++;//（计算移动的次数）
//		move(a, c);
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);
//		move(a, c);
//		sum++;//（计算移动的次数）
//		hanoi(n - 1, b, a, c);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("输入你要计算的盘子次数:");
//	scanf("%d", &n);
//	hanoi(n, 'a', 'b', 'c');
//	printf("%d", sum);
//	return 0;
//}
//青蛙跳台阶
//int fib(int n)
//{
//	if (n <= 2)
//		return n;
//	if (n > 2)
//		return fib(n - 1)+ fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	printf("请输入有多少层台阶：");		
//	scanf("%d",&n); 
//	int x = fib(n);
//	printf("\n有%d种跳法", x);
//
//	return 0;
//	}

//练习1
//void print(int n)
//{
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//}
//int main()
//{
//	int n = 0;
//	printf("输入一个有序数字：");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//练习2
//int strlen(char* arr)
//{
//	if (*arr == '\0')
//	{
//		return 0;
//	}
//	else
//		return  1 + strlen(arr + 1);
//}
//int main()
//{
//	char arr[20] = { 1,2,3,4,5,6};
//	 int ret = strlen(arr);
//	 printf("%d", ret);
//	return 0;
//}
//练习3

//int mite(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n* mite(n - 1);
//		
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = mite(n);
//	printf("%d", ret);
//	return 0;
//}
//练习4
//1 1 2 3 5 8 13 21 34 55
//int print(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	int i = 0;
//	for(i=2;i<n;i++)//我麻了
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//
//	printf("请输入要计算的数字");
//	scanf("%d",&n); 
//	int ret = print(n);
//	printf("%d", ret);
//	return 0;
//}
//int fib(int n)
//{
//	if (n <=2)
//	{
//		return 1;
//	}
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}
//int sum;
//int  move(char x, char y)//当只有一个盘子时，使用这个函数
//{
//	printf(" %c>%c ", x, y);
//	sum++;
//}
//int  hanoi(int n ,char a,char b,char c)
//{
//	if (n == 1) 
//	{
//		move(a, c);
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);//将A座上的n-1个盘子借助C座移向B座
//		move(a, c);//将A座上最后一个盘子移向C座
//		hanoi(n - 1, b, a, c);//将B座上的n-1个盘子借助A座移向C座
//	}
//}
//int main()
//{
//	int n = 0;//假设有n个盘子
//	printf("请问有多少个盘子");
//	scanf("%d", &n);//输入想要输入的数字
//	hanoi(n,'a','b','c');//我们需要一个函数来解决他
//	//假设柱子名为a，b，c
//	printf("%d", sum);
//	return 0;
//}