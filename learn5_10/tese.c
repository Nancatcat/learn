#define _CRT_SECURE_NO_WARNINGS 1
//水仙花
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
//判断大小端存储；
int main()
{
	int i = 1;
	int* p = (char*)&i;
	if (*p == 1)
	{
		printf("小端\n");
	}
	else
		printf("大端\n");
	return 0;
}