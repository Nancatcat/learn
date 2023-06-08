#define _CRT_SECURE_NO_WARNINGS 1
//kmpÀ„∑®
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<malloc.h>
#include<stdlib.h>
//void GetNext(int *Next,char* arr2)
//{
//	int sub = strlen(arr2);
//	Next[0] = -1;
//	Next[1] = 0;
//	int i = 2;
//	int j = 0;
//	while (i < sub)
//	{
//		if (j==-1||arr2[j] == arr2[i - 1])
//		{
//			Next[i] = j + 1;
//			j++;
//			i++;
//		}
//		else
//		{
//			j = Next[j];
//		}
//	}
//}
//int Kmp(char* arr1, char* arr2)
//{
//	int str = strlen(arr1);
//	int sub = strlen(arr2);
//	int i = 0;
//	int j = 0;
//	//int *Next = (int*)malloc(sizeof(int) * sub);
//	int Next[8] = { 0 };
//	GetNext(Next,arr2);
//	while (i < str && j < sub)
//	{
//		if (j==-1||arr1[i] == arr2[j])
//		{
//			i++; j++;
//		}
//		else
//		{
//			j = Next[j];
//		}
//	}
//	if (j >= sub)
//	{
//		return i - j;
//	}
//	else
//		return -1;
//	
//}
//int main()
//{
//	char str[] = "nanmiaobisheng";
//	char sub[] = "bisheng";
//	char ret =Kmp(str, sub);
//	printf("%d\n", ret);
//	printf("%s\n", str+ret);
//	return 0;
//}
//momcpy
//void* My_cpy(void* dest, const void *src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src= (char*)src + 1;
//
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[20] = { 0 };
//	memcpy(arr2, arr, 20);
//	My_cpy(arr2, arr, 20);
//	int i = 0;
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//memmove
//void* Mymove(void* dste, const void* src, size_t num)
//{
//	void* ret = dste;
//	assert(dste && src);
//		if (dste< src)
//		{
//			while (num--)
//			{
//				*(char*)dste = *(char*)src;
//				dste = (char*)dste + 1;
//				src = (char*)src + 1;
//			}
//		}
//		else
//		{
//			while (num--)
//			{
//				*((char*)dste + num) = *((char*)src + num);
//			}
//		}
//		return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	memmove(arr, arr +2, 20); 
//	Mymove(arr+2, arr , 20);
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//memcmp
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[] = { 1,2,3,5,6 };
//	int ret = memcmp(arr, arr2, 20);
//	printf("%d", ret);
//	return 0;
//}
//memset
//int main()
//{
//	char arr[10] ="abcdefghb";
//	memset(arr, 'x', 5);
//	printf("%s", arr);
//	return 0;
//}