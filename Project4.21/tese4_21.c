#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////��ַ����
//void num(int* pa, int* pb)//����a,b��ַ��ָ�����
//{
//	int tab = *pa;
//	*pa = *pb;
//	*pb = tab;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d\n", a, b);
//	num(&a, &b);//����a��b�ĵ�ַ
//	printf("%d %d\n", a, b);
//
//	return 0;
//}



//Ƕ�׵���
//void xunhuan()
//{
//	printf("hehe\n");
//}
//void num()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		xunhuan();
//	}
//}
//int main()
//{
//	num();
//	return 0;
//}


//�ݹ���ϰ1
//��˳���ӡ1234��������
//void print(n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d\n", n % 10);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//		return 0;
//}


//��ϰ2
//int sushu(int  *pa)
//{
//	int coumm = 0;
//	while(*pa!='\0')
//	{
//		coumm++;
//		pa++;
//	}
//	return coumm;
//}
//int main()
//{
//	 int arr[10] = { 1,2,3,4,5 };
//	 int ren = sushu(arr);
//	 printf("%d\n", ren);
//
//	return 0;
//}
//������ʱ����
//int sushu(int* pa)
//{
//	if (*pa!= '\0')
//	{
//		return 1 + sushu(pa + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int ren = sushu(arr);
//	printf("%d\n", ren);
//
//
//	return 0;
//}


//��n�Ľ׳�
//int nx(int n)
//{
//	if (n <= 1)
//	return 1;
//	else
//		return n * nx(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = nx(n);
//	printf("%d\n", ret);
//	return 0;
//}

//��n��쳲�������
//��쳲���������1 1 2 3 5 8 13 21 34 55
//�ݹ鷨
int fei(int n)
{
	if (n <= 2)
		return 1;
	else
		return fei(n - 1) + fei(n - 2);
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	int ret = fei(n);
	printf("%d\n",ret);
	return 0;
}
//����
//��n��쳲�������
//��쳲���������1 1 2 3 5 8 13 21 34 55
int fei(int n)
{
	int a = 1;
	int b = 1; 
	int c = 0;
	while (n>=3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	int ret = fei(n);
	printf("%d\n",ret);
	return 0;
}
