#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int coun;
//void move(int x, int y)
//{
//	printf("%c->%c\n", x, y);
//}
//
//void hanoi(int n, char a, char b, char c)
//{	
//	if (n == 1)
//	{
//		coun++;
//		move(a, c);
//	} 
//	else
//	{
//		hanoi(n - 1, a, c, b);
//		move(a, c);
//		coun++;
//		hanoi(n - 1, b, a, c);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hanoi( n, 'a', 'b', 'c');
//	printf("%d\n", coun);
//
//	return 0;
//}
  //4.23 (8.51)��ʼ

////hanoi���⣬����˼��
//int sum;
//void move(int x, int y)
//{
//	printf("%c->%c\n", x,y);
//}
//void hanoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		sum++;//�������ƶ��Ĵ�����
//		move(a, c);
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);
//		move(a, c);
//		sum++;//�������ƶ��Ĵ�����
//		hanoi(n - 1, b, a, c);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("������Ҫ��������Ӵ���:");
//	scanf("%d", &n);
//	hanoi(n, 'a', 'b', 'c');
//	printf("%d", sum);
//	return 0;
//}
//������̨��
//int fib(int n)
//{
//	if (n <= 2)
//		return n;
//	if (n > 2)
//		return fib(n - 1)+ fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	printf("�������ж��ٲ�̨�ף�");		
//	scanf("%d",&n); 
//	int x = fib(n);
//	printf("\n��%d������", x);
//
//	return 0;
//	}

//��ϰ1
//void print(int n)
//{
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//}
//int main()
//{
//	int n = 0;
//	printf("����һ���������֣�");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//��ϰ2
//int strlen(char* arr)
//{
//	if (*arr == '\0')
//	{
//		return 0;
//	}
//	else
//		return  1 + strlen(arr + 1);
//}
//int main()
//{
//	char arr[20] = { 1,2,3,4,5,6};
//	 int ret = strlen(arr);
//	 printf("%d", ret);
//	return 0;
//}
//��ϰ3

//int mite(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n* mite(n - 1);
//		
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = mite(n);
//	printf("%d", ret);
//	return 0;
//}
//��ϰ4
//1 1 2 3 5 8 13 21 34 55
//int print(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	int i = 0;
//	for(i=2;i<n;i++)//������
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//
//	printf("������Ҫ���������");
//	scanf("%d",&n); 
//	int ret = print(n);
//	printf("%d", ret);
//	return 0;
//}
//int fib(int n)
//{
//	if (n <=2)
//	{
//		return 1;
//	}
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}
//int sum;
//int  move(char x, char y)//��ֻ��һ������ʱ��ʹ���������
//{
//	printf(" %c>%c ", x, y);
//	sum++;
//}
//int  hanoi(int n ,char a,char b,char c)
//{
//	if (n == 1) 
//	{
//		move(a, c);
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);//��A���ϵ�n-1�����ӽ���C������B��
//		move(a, c);//��A�������һ����������C��
//		hanoi(n - 1, b, a, c);//��B���ϵ�n-1�����ӽ���A������C��
//	}
//}
//int main()
//{
//	int n = 0;//������n������
//	printf("�����ж��ٸ�����");
//	scanf("%d", &n);//������Ҫ���������
//	hanoi(n,'a','b','c');//������Ҫһ�������������
//	//����������Ϊa��b��c
//	printf("%d", sum);
//	return 0;
//}