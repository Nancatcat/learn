#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//
//void nume()
//{
//	printf("***************************\n");
//	printf("*****1.paly  0.exet.*******\n");
//	printf("***************************\n");
//}
//void tese()
//{
//	int ret = rand() % 100 + 1;
//	int y = 0;
//	printf("��ʼ��Ϸ����������Ҫ�µ�����\n");
//	while (1)
//	{
//		
//		scanf("%d", &y);
//		if (y < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (y > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int x = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		nume();
//
//		printf("��Ҫ����Ϸ��:");
//		scanf("%d", &x);
//		switch (x)
//		{
//			case 1:
//				tese();
//				break;
//
//			case 0:
//			
//				printf("���˳�\n");
//				break;
//			
//			default:
//			
//				printf("��������\n");
//				break;
//			
//			
//		}
//	
//	} while (x);
//	
//	return 0;
// }
//
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	int i = 0;
//	scanf("%d", &x);
//	long long sum = 0;
//	for (i = 0; i <= x; i++)
//	{
//		sum += i;
//	}
//	printf("%lld", sum);
//	return 0;
//}
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	int n = 0;
//	int max = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[n]);
//		if (max< arr[n])
//		{
//			max = arr[n];
//		}
//
//	}
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	char a = 0;
//	while (scanf("%c", &a) !=EOF)
//	{
//		getchar();
//		if ((a <='z' && a>='a') || (a >='A' && a<='Z'))
//			printf("%cis an alphabet.\n", a);
//		else
//			printf("%cis an alphabet.\n", a);
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char a = 0;
//    while (scanf("%c", &a) != EOF)
//    {
//        getchar();
//        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
//            printf("%c is an alphabet.\n", a);
//        else
//            printf("%c is not an alphabet.\n", a);
//    }
//    return 0;
//}
#include <stdio.h>

int main()
{
	double a, b, c, d;

	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
	if (b == 11 && c == 11)
	{
		a = a * 0.7 - (50 * d);
	}
	else if (b == 12 && c == 12)
	{
		a = a * 0.8 - (50 * d);
	}
	printf("%0.2lf\n", a > 0 ? a : 0.0);
	return 0;
}