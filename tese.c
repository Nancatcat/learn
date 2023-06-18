#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define OFFSETOF(type,name) (size_t)&(((type*)a)->name)
//struct s
//{
//	char s;
//	int g;
//	char j;
//};
//#define OFFSETOF(type,name) (size_t)&(((type*)0)->name)
//struct s
//{
//	char s;
//	int g;
//	char j;
//};
//int main()
//{
//	struct s j= { 0 };
//	printf("%d\n", OFFSETOF(struct s ,s ));
//	printf("%d\n", OFFSETOF(struct s ,g));
//	printf("%d\n", OFFSETOF(struct s ,j));
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n)==1)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n-i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (i = 0; i < n + 1; i++)
//		{
//			int j = 0;
//			for (j = 0; j <i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j < n + 1-i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	FILE* file = fopen("file.txt", "wb");//打开一个文件，以二进制输出的方式打开;
//	if (file == NULL)//判断文件指针是否接收成功
//	{
//		perror("file");
//		return;
//	}
//	for (int i = 'a'; i < 'z'; i++)//循环写入
//	{
//		fputc(i, file);
//	}
//	fclose(file);//关闭文件
//	file = NULL;//释放内存
//
//	return 0;
//}
//int main()
//{
//	FILE* file = fopen("file.txt", "rb");//打开一个文件，以二进制输入的方式打开;
//	if (file == NULL)//判断文件指针是否接收成功
//	{
//		perror("file");
//		return;
//	}
//	char arr;
//	for (int i = 0; i < 27; i++)//循环输入
//	{
//		arr =fgetc(file);
//		printf("%c ", arr);
//	}
//	fclose(file);//关闭文件
//	file = NULL;//释放内存
//
//	return 0;
//}
//int main()
//{
//	FILE* file = fopen("file.txt", "wb");//打开一个文件，以二进制输入的方式打开;
//	if (file == NULL)//判断文件指针是否接收成功
//	{
//		perror("file");
//		return;
//	}
//	fputs("hello,world", file);
//	fclose(file);//关闭文件
//	file = NULL;//释放内存
//
//	return 0;
//}
//int main()
//{
//	FILE* file = fopen("file.txt", "rb");//打开一个文件，以二进制输入的方式打开;
//	if (file == NULL)//判断文件指针是否接收成功
//	{
//		perror("file");
//		return;
//	}
//	char arr[20];//创建数组接收从文件中输入的字符串
//	int len = strlen("hello,world");
//	fgets(arr,len+1, file);//输入字符串，fgtes的特性会导致'\0'也算一个字符，所以+1；
//	printf("%s", arr);//打印
//	fclose(file);//关闭文件
//	file = NULL;//释放内存
//
//	return 0;
//}
//int main()
//{
//	FILE* file = fopen("file.txt", "wb");//打开一个文件，以二进制输入的方式打开;
//	if (file == NULL)//判断文件指针是否接收成功
//	{
//		perror("file");
//		return;
//	}
//	struct s i = { 'a',100,'c' };//结构体初始化
//	fprintf(file, "%c %d %c", i.arr, i.b, i.c);//输出到文件中
//	fclose(file);//关闭文件
//	file = NULL;//释放内存
//
//	return 0;
//}
//struct s//定义一个结构体
//{
//	char arr[10];
//	int b;
//	char c[10];
//};
//int main()
//{
//	FILE* file = fopen("file.txt", "rb");//打开一个文件，以二进制输入的方式打开;
//	if (file == NULL)//判断文件指针是否接收成功
//	{
//		perror("file");
//		return;
//	}
//	struct s i = { 0 };//结构体初始化
//	fscanf(file, "%s %d %s", i.arr, &(i.b), i.c);
//	printf("%s %d %s", i.arr, i.b, i.c);
//	fclose(file);
//	file = NULL;//释放内存
//
//	return 0;
//}
//int main()
//{
//	int n[7] = { 0 };
//	int max = 0;
//	int min =100;
//	double sum = 0.00;
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &n[i]);
//	}
//	for (i = 0; i < 7; i++)
//	{
//		if (max <= n[i])
//		{
//			max = n[i];
//		}
//		else if (min >= n[i])
//		{
//			min = n[i];
//		}
//		sum += n[i];
//	}
//	printf("%.2lf", (sum - max - min) / 5.00);
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int max = 0;
//	int min = 100;
//	double sum = 0.00;
//	int i = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		i++;
//		if (max <= n)
//			max = n;
//		
//		if (min >= n)
//			min = n;
//		sum += n;
//		if (i == 7)
//		{
//			printf("%.2lf\n", (sum - max - min) / 5.00);
//			i = 0;
//			max = 0;
//			min = 0;
//			sum = 0;
//		}
//	}
//	return 0;
//}