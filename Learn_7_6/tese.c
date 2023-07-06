#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int Find(int arr[3][3],int row,int col, int k)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x <= row - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if(arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,4,7,2,5,8,3,6,9 };
//	int k = 7;
//	int ret = Find(arr,3,3, k);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}

//void revolvestr(char arr[], int k)
//{
//	if (k == 0)
//	{
//		printf("%s\n", arr);
//	}
//	int len = strlen(arr);
//	k %= len;
//	for (int i = 0; i < k; i++)
//	{
//		char tmp = arr[0];
//		for (int j = 0; j < len-1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len] = tmp;
//	}
//	printf("%s\n", arr);
//}
//int main()
//{
//	char arr[] = "abcd";
//	int k = 0;
//	printf("请输入旋转次数>");
//	scanf("%d", &k);
//	revolvestr(arr, k);
//	return 0;
//}

//int judgment(char* arr, char* Compare)
//{
//	char* arr2 = "abcdefabcdef";
//	while (*arr2!='\0')
//	{
//		if ((*arr2 == *Compare)&&(*Compare!='\0'))
//		{	
//			arr2++;
//			Compare++;
//		}
//		else
//		{
//			arr2++;
//		}
//	}
//	if (*Compare == '\0')
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char Compare[] ="defabc";
//	int ret = judgment(arr, Compare);
//	if (ret < 0)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了\n");
//	}
//
//	return 0;
//}
#include<stdlib.h>
void Gnext(int* next, char* arr2)
{
	next[0] = -1;
	next[1] = 0;
	int i = 2;
	int j = 0;
	int len = strlen(arr2);
	while (i < len)
	{
		if (j == -1 || arr2[i - 1] == arr2[j])
		{
			next[i] = j + 1;
			i++;
			j++;
		}
		else
		{
			j = next[j];
		}
	}
}
int Mystrstr(char* arr1, char* arr2)
{
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	int i = 0;
	int j = 0;
	int* next = (int*)malloc(len2 * sizeof(int));
	Gnext(next, arr2);
	while (i < len1 && j < len2)
	{
		if (j == -1 || arr1[i] == arr2[j])
		{
			i++;
			j++;
		}
		else
		{
			j = next[j];
		}
	}
	if (j >= len2)
	{
		return i - j;
	}
	else
		return j;
}
int main()
{
	char arr1[] = "nanmiaobisheng";
	char arr2[] = "bisheng";
	char ret = Mystrstr(arr1, arr2);
	ret = Mystrstr(arr1, arr2);
	printf("%d\n", ret);
	printf("%s\n", arr1 + ret);
	return 0;

}