#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>

//kmp�㷨
//void GetNext( int *next, char*sub)
//{
//	next[0] = -1;
//	next[1] =  0;
//	int i = 2;
//	int j = 0;
//	int lensub = strlen(sub);
//	while (i < lensub)
//	{
//		if (j == -1 || sub[i - 1] == sub[j])
//		{
//			next[i] = j + 1;
//			i++;
//			j++;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//	
//}
//int My_strstr(char* str, char* sub)
//{
//
//	int len1 = strlen(str);
//	int len2 = strlen(sub);
//	int i = 0;
//	int j = 0;
//
//	//int* next = (int*)malloc(len2 * sizeof(int));
//	int next[8] = { 0 };
//	GetNext(next,sub);
//	while (i < len1 && j < len2)
//	{
//		if (j==-1||str[i] == sub[j])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//	if (j >= len2)
//	{	
//		return i - j;
//	}
//	else
//		return -1;
//}
//int main()
//{
//	char arr1[] = "Nancatbisheng";
//	char arr2[] = "bisheng";
//	char ret;
//	ret =My_strstr(arr1, arr2);
//	printf("%d\n", ret);
//	printf("%s\n", arr1 + 6);
//
//	return 0;
//}
 
//����ͼ��
//int main()
//{
//	int n = 0;
//	printf("������Ҫ��ӡ�Ĳ���>");
//	scanf("%d", &n);
//	int len = n / 2;
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		int j = 0;
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	len = n / 2;
//	for (i = 0; i < len - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (len - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//��ӡˮ�ɻ���
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10001; i++)
//	{
//		int j = i;
//		int n = 1;
//		int sum = 0;
//		while (j /= 10)
//		{
//			n++;
//		}
//		j = i;
//		while (j)
//		{
//			
//			sum += pow(j%10, n);
//			j /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;	
//}
//��sn=2+22+222+2222+2222
//����s��Ϊ���֣�nΪ������
//int main()
//{
//	int n = 0;
//	int m = 0;
//	printf("��������������ǰ��Ϊ�����ʼֵ������Ϊ�������>");
//	scanf("%d %d", &n, &m);
//	int sum = 0;
//	int j = 0;
//	for (int i = 0; i < m; i++)
//	{
//
//		j = (j * 10) + 2;
//		sum += j;
//	}
//	printf("%d", sum);
//	return 0;
//}
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{ 
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total );
//	return 0;	
//}

//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//void Sort(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//
//	
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Sort(arr, sz);
//	int i = 0;
//	for (i - 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
// X��ͼ��
//�������룬һ��������2~20������ʾ�����������Ҳ��ʾ��ɡ�X���ķ�б�ߺ���б�ߵĳ��ȡ�
//���������
//���ÿ�����룬����á� * ����ɵ�X��ͼ����
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n)==1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{	
//			for (j = 0; j < n; j++)
//			{
//				if (i == j||(i + j) == n - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//			
//		}
//	}
//	return 0;
//}

//����������
//�������룬һ��������2~20������ʾֱ��������ֱ�Ǳߵĳ��ȣ����� * ����������Ҳ��ʾ���������

//���������
//���ÿ�����룬����á� * ����ɵĶ�Ӧ���ȵ�ֱ�������Σ�ÿ���� * ��������һ���ո�
//int main()
//{
//	int n = 0;
//	printf("������Ҫ��ӡ�������δ�С>");
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n-i-1; j++)
//			{	
//				printf("  ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf(" *");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}