#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���"Hello Nowcoder!"����ʼ��ı��֮�ðɡ�
//int main()
//{
//	pritnf("Hello Nowcoder!");
//	return 0;
//}
//KiKiѧ����printf����Ļ�����Ϣ���������һ��С�ɻ����������д����������С�ɻ���

//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//
//	return 0;
//}
//ţţ�ոճ������໴�����һ��ʼ��ֻ��ѧ˵�򵥵����֣������˵һ�������������̾���ѧ�ᡣ

//����һ��������������������
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", n);
//	return 0;
//}
//��˵����֮��ţţ��ʼ���Ը�������С����
//����һ������������������������
//int main()
//{
//	float n = 0.0;
//	scanf("%f", &n);
//	printf("%.3f", n);
//
//	return 0;
//}
//��˵������֮��ţţ��ʼ�����ַ�

//����һ���ַ����������ַ���
//int main()
//{
//	
//	char a = getchar();
//	putchar(a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%c", a);
//	return 0;
//}
//ţţ�Ӽ�����������������������������Ļ����ʾ�ڶ���������
//int main()
//{
//	int arr[3] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	printf("%d", arr[1]);
//
//	return 0;
//}
//ţţ�����ü��̶���һ���ַ���Ȼ������Ļ����ʾ������ַ���ɵ� 3*3 �ľ��Ρ�
//int main()
//{
//	char arr[3][3] = { 0 };
//	int i = 0;
//	char a = getchar();
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%c", a);
//		
//		}
//		printf("\n");
//	}
//	return 0;
//}//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣

//arr��һ������һά���顣
//void print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}
//дһ����������������һ���ַ��������ݡ�
//void print(char* p,int len)
//{
//	char* left = p;
//	char* right = p + len-1;
//	int i = 0;
//	
//	while (left < right)
//	{
//		char tmp;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[10000];
//	gets(arr);
//	char* p = &arr;
//	int len = strlen(arr);
//	print(p,len);
//	printf("%s", arr);
//	return 0;
//}
//��C��������Ļ���������ͼ����
/*i*//*nt main()
{
	int len = 0;
	scanf("%d", &len);
	int i = 0;
	for (i = 0; i <len; i++)
	{
		int j = 0;
		for (j = 0; j <len-1-i; j++)
		{
			printf(" ");
		}
		for (j = 0; j <2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i <len-1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (len - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");

	}
	return 0;
}*/
#include <stdio.h>
//int main()
//{
//	char a = getchar();
//	int n = 3;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("%c",a);
//		}
//		printf("\n");
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (n - 1 - i) - 1; j++)
//		{
//			printf("%c",a);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//���0��100000֮������С�ˮ�ɻ������������

//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10001; i++)
//	{
//		int count = 1;
//		int sum = 0;
//		int j = i;
//		while (j/10)
//		{
//			count++;
//			j = j/10;					
//		}
//		j = i;
//		while (j)
//		{
//			sum+=pow(j % 10, count);
//			j /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�

//���磺2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int sum2 = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum = sum * 10 + 2;
//		sum2+=sum;
//
//	}
//	printf("%d", sum2);
//	return 0;
//}
