#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int(is_leap_year( int y))
//{
//	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//
//		return 1;
//	else
//		return 0;
//	
//}
//			
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//�ж�y�Ƿ�Ϊ����
//		//��������귵��1
//		//�������귵��0
//		if (is_leap_year(y))
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}
//	
#include<math.h>
//int sushu(int m)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(m); i++)//�ж��ǲ�������
//	{
//		if (m % i == 0)//���������01�������������Է���0��
//			return 0;
//	}
//			return 1;//��������û�б�������������һ�������������������
//}
//int main()
//{
//	int m = 0;//����һ��ֵ
//	for(m=100;m<=200;m++)//�涨�������ݷ�Χ
//		if (1 == sushu(m))
//		{
//			printf("%d\n", m);
//		}
//
//	return 0;
//}
int runn(int n)
   
{
	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
	return 1;
	else
	return 0;
      }
int main()
{
	int n = 0;
	for (n = 1000; n <= 2000; n++)//���ݷ�Χ
	{
		if (1 == runn(n))
		{
			printf("%d\n", n);
		}
	}
	















	return 0;
}