#define _CRT_SECURE_NO_WARNINGS 1
//柔性数组实现
//文件
#include<stdio.h>
#include<stdlib.h>
//struct i
//{
//	int a;
//	char c;
//	int b[];
//};
//int main()
//{
//	struct i* ps = (struct i*)malloc(sizeof(struct i) + 40);
//	if (ps == NULL)
//	{
//		perror("ps");
//	}
//	struct i* ptr = (struct i*)realloc(ps, sizeof(struct i) + 80);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//		ptr = NULL;
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}
//struct i
//{
//	int a;
//	char c;
//	int *b;
//};
//int main()
//{
//	struct i* ps = (struct i*)malloc(sizeof(struct i));
//	if (ps == NULL)
//	{
//		perror("ps");
//	}
//	ps->a = 100;
//	ps->c = 1;
//	ps->b = (int*)malloc(40);
//
//	struct i* ps = (struct i*)malloc(sizeof(struct i) + 40);
//	struct i* ptr = (struct i*)realloc(ps, sizeof(struct i) + 80);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//		ptr = NULL;
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}
//int main()
//{
//	char arr[] = { 0 };
//	FILE* p = fopen("ADD.txt", "r");
//	if (p == NULL)
//	{
//		perror("p");
//	}
//	fgetc(arr);
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	FILE* p = fopen("ADD.txt", "w");
//	if (p == NULL)
//	{
//		perror("p");
//	}
//	for (i = 'a'; i < 'z'; i++)
//	{
//		fputc(i , p);
//	}
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	FILE* p = fopen("ADD.txt", "r");
//	if (p == NULL)
//	{
//		perror("p");
//	}
//	int pf = fgetc(p);
//	printf("%c\n", pf);
//	pf = fgetc(p);
//	pf = fgetc(p);
//	pf = fgetc(p);
//	printf("%c\n", pf);
//	printf("%c\n", pf);
//	printf("%c\n", pf);
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	FILE* p = fopen("ADD.txt", "w");
//	if (p == NULL)
//	{
//		perror("p");
//	}
//	fputs("hello,world", p);
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	FILE* p = fopen("ADD.txt", "w");
//	if (p == NULL)
//	{
//		perror("p");
//	}
//	fputs("hello,world", p);
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	FILE* p = fopen("ADD.txt", "r");
//	if (p == NULL)
//	{
//		perror("p");
//	}
//	//fputs("hello,world", p);
//	char arr[20];
//	fgets(arr, 20, p);
//	printf("%s\n", arr);
//	fclose(p);
// 	p = NULL;
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("%d", a + b);
//	return 0;
//}
//struct s
//{
//	char arr[20];
//	int a;
//	double j;
//};
//int main()
//{
//	struct s i = { "zhangsan",20,18.00f};
//	FILE* p = fopen("ADD.txt", "wb");
//	if (p == NULL)
//	{
//		perror("p");
//		return;
//	}
//	//fwrite(&i, sizeof(struct s), 1, p);
//	fclose(p);
//	p = NULL;
//	return 0;
//}
struct s
{
	char arr[20];
	int a;
	double j;
};
int main()
{
	struct s i = { 0 };
	FILE* p = fopen("ADD.txt", "rb");
	if (p == NULL)
	{
		perror("p");
		return;
	}
	//fwrite(&i, sizeof(struct s), 1, p);
	fread(&i, sizeof(struct s), 1, p);
	printf("%s %d %lf\n", i.arr, i.a, i.j);
	fclose(p);
	p = NULL;
	return 0;
}