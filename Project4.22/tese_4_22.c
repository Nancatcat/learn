#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void sal(int n)
//{
//	int i = 0;
//	int j = 0;
//	int time = 1;
//	for (i = 1; i <= n; i++)//�����ܳ˽�
//	{	
//		for (j = 1; j <= i; j++)//���Ƶ������ֵĳ˷�
//		{
//			time = j * i;
//			printf("%d*%d=%d ",j,i,time);
//		}
//		printf("\n");//�жϵ���ѭ���Ƿ������������
//	
//	}
//}
//int main()
//{
//	int n = 0;//������������
//	printf("������Ҫ��������֣�");
//	scanf("%d", &n);//����
//	sal(n);//�������ݵ�ֵ
//	
//	return 0;
//}
//
//void com(int* pa, int* pb)
//{
//	int tab = *pa;
//	*pa = *pb;
//	*pb = tab;
//
//}
//int main()
//{
//	int a = 0;//����Ҫ������ֵ
//	int b = 0;
//	scanf("%d%d", &a, &b);//����
//	printf("����ǰ\n");
//	printf("%d %d\n", a, b);//���δ����ǰ����
//	com(&a, &b);//����
//	printf("������\n");
//	printf("%d %d\n", a, b);//������������
//
//	return 0;
//}
//int Year(int year)
//{
//	return ((year % 4 == 0) && (year / 100 != 0) || (year % 400 == 0));//�ж��Ƿ�Ϊ����
//}
//int main()
//{
//	int year = 0;//����Ҫ�жϵ�ֵ
//	printf("������Ҫ�жϵ����: ");
//	scanf("%d", &year);//����
//	int ret = Year(year);//����ret��ֵ����year����������ص�ֵ
//	if (ret==1)//�������ret��ֵ��1����������
//	{
//		printf("%d:������", year);
//	}
//	if (ret == 0)//�������ret��ֵ��0������������
//	{
//		printf("%d:��������", year);
//	}
//	return 0;
//}
#include<math.h>
int prime(int i)
{
	int j = 0;
	for (j = 2; j <= sqrt(i); j++)
	{
		if (i % j == 0)
			return 0;
	}
	return i;
	
}
int main()
{	int i = 0;
	
	for (i = 100; i <= 200; i++)
	{
		int ret = prime(i);
		if (ret)
		{
			printf("%d ", ret);
		}
	}

	return 0;
}
