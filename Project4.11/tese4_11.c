#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int hour = 0;
//	int minute = 0;
//	int k = 0;
//	scanf("%d:%d %d", &hour, &minute, &k);
//	hour = (hour + (minute + k) / 60);
//	k = (minute + k) % 60;
//		printf("%02d:%02d\n",hour,k);
//
//	return 0;
//
//}
//
//
//
//int main()
//{
//	char a = 0;
//	scanf("%c", &a);
//	printf("%d\n", a);
//
//
//	return 0;
//}
//int main()
//{
//	int k = 7;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int lifet = 0;
//	int sz = sizeof arr / sizeof arr[0];
//	int right = sz - 1;
//	while (lifet <= right)
//	{
//		int sum =lifet+ (right-lifet) / 2;
//			if (arr[sum]<k)
//		{
//				lifet =sum+ 1;
//	    }
//			else if (arr[sum] > k)
//			{
//				right =sum- 1;
//			}
//			else
//			{
//				printf("找到了，下标是%d\n", sum);
//			}
//
//	}
//
//	return 0;
//}
//int main()
//{
//	int m = 3;
//	int i = 0;
//	int x = 1;
//	for (i = 1; i <=3; i++)
//	{
//		x *= i;
//	}
//	printf("%d\n", x);
//
//	return 0;
//}
#include<string.h>
#include<Windows.h>
int main()
{
	char arr1[] = "1234567";
	char arr2[] = "*******";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	return 0;
}