#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//С������̨��
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return n;	
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("�����ж���̨��>");
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("��%d���߷�\n", ret);
//	return 0;
//
//}

//int main()
//{
//	int n = 0;
//	printf("������Ҫ�����������С");
//	scanf("%d", &n);
//	int del = 0;
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	printf("����������Ԫ��");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("������Ҫɾ��������");
//	scanf("%d", &del);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}

int main()
{
	int n = 0;
	printf("�������ܿ�Ŀ�ɼ�");
	scanf("%d", &n);
	int arr[100] = { 0 };
	int i = 0;
	int max = 0;
	int min = 0;
	printf("�����뵥��Ŀ�ɼ�");
	for (i = 0; i < n; i++)
	{
		scanf("%d ", &arr[i]);
		if (arr[max] < arr[i])
		{
			max = i;
		}
		if (arr[min] > arr[i])
		{
			min = i;
		}

	}
	printf("��߷ֺ���ͷֵĲ�Ϊ%d",max-min);
	return 0;
}