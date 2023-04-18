#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.计算n的阶乘
//int main()
//{
//	int n = 0;//取值
//	int i = 0;
//	scanf("%d", &n);
//	int m = 1;
//	for ( i = 1; i <= n;i++)//判断循环的次数
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
//	int n = 0;//取值
//	int i = 0;
//	scanf("%d", &n);
//	int m = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)//判断循环的次数
//	{
//		m *= i;
//		sum += m;
//		
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}
//二分查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个数组
//	int k = 7;//寻找的值
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = arr[0];//定义数组的第一个下标
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
//			printf("找到了，下标是%d：", mid);
//			
//		}
//	
//		
//	}
//	   if(fluat == 0)
//		printf("没找到");
//	
//	
//
//	return 0;
//}
//替换打印
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