#define _CRT_SECURE_NO_WARNINGS 1
//ˮ�ɻ�
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int sum = 0;
//		int tmp = i;
//		int k = 1;
//		while (tmp/10)
//		{
//			k++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, k);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//�жϴ�С�˴洢��
int main()
{
	int i = 1;
	int* p = (char*)&i;
	if (*p == 1)
	{
		printf("С��\n");
	}
	else
		printf("���\n");
	return 0;
}