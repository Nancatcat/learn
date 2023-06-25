#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//1.strlen函数
int main()
{
	char arr[] = "hello world";
	//strlen函数的参数是字符串的首地址，
	//同时计算的长度需要保存在整型变量中；
	int len = strlen(arr);
	printf("%d", len);
	return 0;
}
//2.strcmp
//int main()
//{
//	char arr[] = "hello world";
//	char bit[] = "hello bit";
//	int size = strcmp(arr, bit);//strlen的详细参数
//	if (size < 0)//判断
//	{
//		printf("arr<bit\n");
//	}
//	else if(size == 0)
//	{
//		printf("arr=bit\n");
//
//	}
//	else
//	{
//		printf("arr>bit\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	char arr[20];
//	char *p = "hello csdn";
//	strcpy(arr, p);//使用指针拷贝
//	char str[] = "hello world";
//	char arr2[20];
//	strcpy(arr2, str);//使用字符串首地址拷贝
//	printf("%s\n", arr);
//	printf("%s\n", arr2);
//
//	return 0;
//}
//int main()
//{
//	char Moon[100] = "今夜月色真美";
//	char wind[] = " 风也温柔";
//	strcat(Moon, wind);//把wind字符串中的内容追加到Moon的词尾后
//	printf("%s\n", Moon);
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello world i live you";
//	char str[] = "world";
//	char *ret = strstr(arr, str);//ret接受的是arr中str字符串的起始位置
//	if (ret != NULL)
//	{
//		printf("arr中存在str字符串\n");
//	}
//	else
//	{
//		printf("arr中不存在str字符串\n");
//	}
//	return 0;
//}
//int main()
//{
//	char mailbox[] = "Nancat@bi,sheng.com";//主串
//	char arr[] = "@,.";//需要分割的符号集合体
//	char* ret = NULL;
//	for (ret = strtok(mailbox, arr); ret != NULL; ret = strtok(NULL, arr))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//int main()
//{
//	FILE* p = fopen("red.exe", "r");
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	return 0;
//}