#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//×Ö·û´®×óÐý

//void left_arr(char* arr, int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		char a = arr[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = a;
//	}
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int k = 0;
//	scanf("%d", &k);
//	left_arr(arr, k);
//	printf("%s", arr);
//	return 0;
//}
//void left_arr(char*left, char*right)
//{
//	while (left < right)
//	{
//		char a = *left;
//		*left = *right;
//		*right = a;
//		left++;
//		right--;
//	}
//}
//void arr1(char arr[], int k)
//{
//	int len = strlen(arr);
//	left_arr(arr, arr+k - 1);
//
//	left_arr(arr + k, arr+len - 1);
//	left_arr(arr, arr+len - 1);
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int k = 0;
//	scanf("%d", &k);
//	arr1(arr, k);
//	printf("%s", arr);
//	return 0;
//}

//ÑîÊÏ¾ØÕó
//int panduan(int arr[3][3],int r,int c,int n)
//{
//	int i = 0;
//	int j = c - 1;
//	while (i<= r-1&& j >=0)
//	{
//		if (arr[i][j] > n)
//		{
//			j--;
//		}
//		else if (arr[i][j] < n)
//		{
//			i++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int n = 0;
//	scanf("%d", &n);
//	int ret = panduan(arr,3,3,n);
//	printf("%d", ret);
//	return 0;
//}
//int panduan(int arr[3][3], int *px, int *py, int n)
//{
//	int i = 0;
//	int j = *py - 1;
//	while (i <= *px - 1 && j >= 0)
//	{
//		if (arr[i][j] > n)
//		{
//			j--;
//		}
//		else if (arr[i][j] < n)
//		{
//			i++;
//		}
//		else
//		{
//			*px = i;
//			*py = j;
//			return 1;
//		}
//	}
//	*px = -1;
//	*py = -1;
//	return 0;
//}
//
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int n = 0;
//	scanf("%d", &n);
//	int x = 3;
//	int y = 3;
//	int ret = panduan(arr, &x, &y, n);
//	printf("%d\n", ret);
//	printf("%d %d", x, y);
//	return 0;
//}
//ÅÐ¶ÏÐý×ª×Ö·û
#include<assert.h>
//
//int My_left(char* arr1, char* arr2)
//{
//	int len = strlen(arr1);
//	strncat(arr1, arr1, len);
//	char* ret = strstr(arr1, arr2);
//		if (ret == NULL)
//		{
//			return 0;
//		}
//		else
//		{
//			return 1;
//		}
//}
//int main()
//{
//	char arr1[20] = "abcdefg";
//	char arr2[] = "efgabcd";
//	int ret = My_left(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}
//qsortº¯ÊýÊµÏÖ
//int cmp(const void* best, const void* best2)
//{
//	return  *(int*)best2-*(int*)best ;
//}
//int main()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int cmp(const void* best, const void* best2)
//{
//	return  *(int*)best2 - *(int*)best;
//}
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void My_qsort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
//			{
//				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	My_qsort(arr, sz, sizeof(arr[0]), cmp);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//¾ØÕó×ªÖÃ
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int j = 0;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//ÉÏÈý½Ç¾ØÕóÅÐ¶¨
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int flang = 1;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				flang = 0;
//				goto end;
//			}
//		}
//	}
//end:
//	if (flang == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//
//	return 0;
//}
//ÓÐÐòÊýÁÐÅÐ¶Ï

//int main()
//{
//	int n = 0;
//	int flang1 = 0;
//	int flang2 = 0;
//	scanf("%d", &n);
//	int arr[10] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (i > 0)
//		{
//			if (arr[i] > arr[i - 1])
//			{
//				flang1 = 1;
//			}
//			if (arr[i] < arr[i - 1])
//			{
//				flang2 = 1;
//			}
//			if (arr[i] == arr[i - 1])
//			{
//				;
//			}
//		}
//	}
//	if (flang1 + flang2 <= 1)
//	{
//		printf("ÓÐÐò\n");
//	}
//	else
//	{
//		printf("ÎÞÐò\n");
//	}
//	return 0;
//}