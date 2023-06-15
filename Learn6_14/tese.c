#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>	
#include<stdlib.h>
//int main()
//{
//	FILE* p = fopen("add.txt","r");
//	if (p == NULL)
//	{
//		perror("p");
//		return;
//	}
//	//fputs("hello,world hello,bit",p);
//	//char arr[50];
//	//fgets(arr, 50, p);
//	//printf("%s\n", arr);
//	//fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* p = fopen("add.txt", "r");
//	if (p == NULL)
//	{
//		perror("p");
//		return;
//	}
//	char ch = 0;
//	ch = fgetc(p);
//	printf("%c\n", ch);
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* p = fopen("add.txt", "w");
//	if (p == NULL)
//	{
//		perror("p");
//		return;
//	}
//	fputc(97-32, p);
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* p = fopen("pf.txt", "wb");
//	if (p == NULL)
//	{
//		perror("p");
//		return 0;
//	}
//	fputs("这是一个测试文件", p);
//	fclose(p);
//	p == NULL;
//	return 0;
//}
//int main()
//{
//	FILE* p = fopen("pf.txt", "rb");
//	if (p == NULL)
//	{
//		perror("p");
//		return 0;
//	}
//	fseek(p, 12, SEEK_SET);
//	int arr= fgetc(p);
//	printf("%c\n", arr);
//	fseek(p, 12, SEEK_SET);
//	arr = fgetc(p);
//	printf("%c\n", arr);
//	fseek(p, 2, SEEK_CUR);
//	arr = fgetc(p);
//	printf("%c\n", arr);
//	fseek(p, -4, SEEK_END);
//	arr = fgetc(p);
//	printf("%c\n", arr);
//	printf("%d\n", ftell(p));
//	rewind(p);
//	arr = fgetc(p);
//	printf("%c\n", arr);
//	fclose(p);
//	p == NULL;
//	return 0;
//}
