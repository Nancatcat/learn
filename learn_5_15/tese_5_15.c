#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//输出"Hello Nowcoder!"。开始你的编程之旅吧。
//int main()
//{
//	pritnf("Hello Nowcoder!");
//	return 0;
//}
//KiKi学会了printf在屏幕输出信息，他想输出一架小飞机。请帮他编写程序输出这架小飞机。

//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//
//	return 0;
//}
//牛牛刚刚出生，嗷嗷待哺，一开始他只能学说简单的数字，你跟他说一个整数，他立刻就能学会。

//输入一个整数，输出这个整数。
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", n);
//	return 0;
//}
//会说整数之后，牛牛开始尝试浮点数（小数）
//输入一个浮点数，输出这个浮点数。
//int main()
//{
//	float n = 0.0;
//	scanf("%f", &n);
//	printf("%.3f", n);
//
//	return 0;
//}
//会说浮点数之后，牛牛开始尝试字符

//输入一个字符，输出这个字符。
//int main()
//{
//	
//	char a = getchar();
//	putchar(a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%c", a);
//	return 0;
//}
//牛牛从键盘上输入三个整数，并尝试在屏幕上显示第二个整数。
//int main()
//{
//	int arr[3] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	printf("%d", arr[1]);
//
//	return 0;
//}
//牛牛尝试用键盘读入一个字符，然后在屏幕上显示用这个字符组成的 3*3 的矩形。
//int main()
//{
//	char arr[3][3] = { 0 };
//	int i = 0;
//	char a = getchar();
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
//}//写一个函数打印arr数组的内容，不使用数组下标，使用指针。

//arr是一个整形一维数组。
//void print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}
//写一个函数，可以逆序一个字符串的内容。
//void print(char* p,int len)
//{
//	char* left = p;
//	char* right = p + len-1;
//	int i = 0;
//	
//	while (left < right)
//	{
//		char tmp;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[10000];
//	gets(arr);
//	char* p = &arr;
//	int len = strlen(arr);
//	print(p,len);
//	printf("%s", arr);
//	return 0;
//}
//用C语言在屏幕上输出以下图案：
/*i*//*nt main()
{
	int len = 0;
	scanf("%d", &len);
	int i = 0;
	for (i = 0; i <len; i++)
	{
		int j = 0;
		for (j = 0; j <len-1-i; j++)
		{
			printf(" ");
		}
		for (j = 0; j <2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i <len-1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (len - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");

	}
	return 0;
}*/
#include <stdio.h>
//int main()
//{
//	char a = getchar();
//	int n = 3;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("%c",a);
//		}
//		printf("\n");
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (n - 1 - i) - 1; j++)
//		{
//			printf("%c",a);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//求出0～100000之间的所有“水仙花数”并输出。

//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10001; i++)
//	{
//		int count = 1;
//		int sum = 0;
//		int j = i;
//		while (j/10)
//		{
//			count++;
//			j = j/10;					
//		}
//		j = i;
//		while (j)
//		{
//			sum+=pow(j % 10, count);
//			j /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，

//例如：2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int sum2 = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum = sum * 10 + 2;
//		sum2+=sum;
//
//	}
//	printf("%d", sum2);
//	return 0;
//}
