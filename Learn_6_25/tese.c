#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//1.strlen����
int main()
{
	char arr[] = "hello world";
	//strlen�����Ĳ������ַ������׵�ַ��
	//ͬʱ����ĳ�����Ҫ���������ͱ����У�
	int len = strlen(arr);
	printf("%d", len);
	return 0;
}
//2.strcmp
//int main()
//{
//	char arr[] = "hello world";
//	char bit[] = "hello bit";
//	int size = strcmp(arr, bit);//strlen����ϸ����
//	if (size < 0)//�ж�
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
//	strcpy(arr, p);//ʹ��ָ�뿽��
//	char str[] = "hello world";
//	char arr2[20];
//	strcpy(arr2, str);//ʹ���ַ����׵�ַ����
//	printf("%s\n", arr);
//	printf("%s\n", arr2);
//
//	return 0;
//}
//int main()
//{
//	char Moon[100] = "��ҹ��ɫ����";
//	char wind[] = " ��Ҳ����";
//	strcat(Moon, wind);//��wind�ַ����е�����׷�ӵ�Moon�Ĵ�β��
//	printf("%s\n", Moon);
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello world i live you";
//	char str[] = "world";
//	char *ret = strstr(arr, str);//ret���ܵ���arr��str�ַ�������ʼλ��
//	if (ret != NULL)
//	{
//		printf("arr�д���str�ַ���\n");
//	}
//	else
//	{
//		printf("arr�в�����str�ַ���\n");
//	}
//	return 0;
//}
//int main()
//{
//	char mailbox[] = "Nancat@bi,sheng.com";//����
//	char arr[] = "@,.";//��Ҫ�ָ�ķ��ż�����
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