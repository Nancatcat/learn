#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.����n�Ľ׳�
//int main()
//{
//	int n = 0;//ȡֵ
//	int i = 0;
//	scanf("%d", &n);
//	int m = 1;
//	for ( i = 1; i <= n;i++)//�ж�ѭ���Ĵ���
//	{	
//		m *= i;
//		
//	}
//	printf("%d\n", m);
//
//	return 0;
//}
//int main()
//{
//	int n = 0;//ȡֵ
//	int i = 0;
//	scanf("%d", &n);
//	int m = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)//�ж�ѭ���Ĵ���
//	{
//		m *= i;
//		sum += m;
//		
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}
//���ֲ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//����һ������
//	int k = 7;//Ѱ�ҵ�ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = arr[0];//��������ĵ�һ���±�
//	int right = sz - 1;
//	int fluat = 0;
//	for (left = arr[0], right = sz - 1; left <= right; left++, right--)
//	{
//		int mid = (right - left) / 2 + left;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] = k)
//		{
//			fluat = 1;
//			printf("�ҵ��ˣ��±���%d��", mid);
//			
//		}
//	
//		
//	}
//	   if(fluat == 0)
//		printf("û�ҵ�");
//	
//	
//
//	return 0;
//}
//�滻��ӡ
//#include<string.h>
//#include<windows.h>
//
//int main()
//{
//	char arr1[] = "hello bit!!!";
//	char arr2[] = "************";
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		Sleep(500);
//		system("cls");
//		printf("%s\n", arr2);
//	}
//	return 0;
//}
i/*nt main()
{
	int n = 0;
	int sum = 0;
	int i = 1;
	int ret = 1;
	for (n = 1; n <=10; n++)
	{ ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret*= i;
		}
		sum +=ret;
	}
	printf("%d ", sum);
	return 0;
}*/
	int  main()
{
	int a = 2;
	printf("%d %d %d", i *= 2, ++a, a++);

	return 0;
}