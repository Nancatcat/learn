#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int i = 0;
//	
//	for (i = 0; i < 1000; i++)
//	{
//		int k = 1;
//		int j = 0;
//		for (j =2 ; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				k = 0;
//				break;
//			}
//		}
//		if (k == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
////ָ������
//int main()
//{
//	int a, b, c;
//	int* arr[10] = { &a,&b, &c };
//	return 0; 
//}
////����ָ��
//int main()
//{
//	
//	int arr[1];
//	int arr2[1];
//	int arr3[1];
//	int(*p2)[1] = &arr;
//	int(*prr3[10])[5];
//	int arr1[5] = { 0 };
//	int(*p1)[5] = &arr1;
//	int (*parr3[10])[5] = {&p1, &p2 };
//	return 0;
//}
////����ָ������
//int main()
//{
//	int arr[1] = { 0 };
//	int*p[1]=&arr;
//	char* arr3[6];
//	char* (*p3)[6] = &arr3;
//	return 0;
//}
//int main()
//{	
//	int(*parr[10])[5];
//
//	//ȡ��parr�����ĵ�ַ
//	int**b=parr;
//	//��parr���׵�ַ��ֵ��b;��Ϊb�Ǹ�ָ������Ҫ�Ⱥ�*��ϣ�*b����
//	//����Ϊparr��һ��Ԫ����int ���͵�ָ�룬���Եó�
//
//	//int* (*b)=&parr;
//
//	int*(*b1)[10] = &parr;
//	//��parr����ĵ�ַ��ֵ��b����Ϊ�������������ԡ�10����
//	//b1����ָ�룬�����Ⱥ�*��ϣ���*b1����
//	// (*b)ָ��ĵ�ַ�Ǹ�10��Ԫ�ص����飻���ԣ�*b��[10]��
//	// ����Ϊparr��ÿ��Ԫ�ض���һ��int ���͵�ָ�룬���ó�
//
//
//	//int*(*b1)[10] = &parr;
//	
//	return 0;
//}
