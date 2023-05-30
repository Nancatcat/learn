#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//模拟实现strlen
//int My_strlen(const char* str)
//{
//	int ret = 0;
//	while (*str != '\0')
//	{
//		ret++;
//		str++;
//	}
//	return ret;
//}
//int main()
//{	
//	char arr[] = "abcdefg";
//	int ret = My_strlen(arr);
//	printf("%d", ret);
//	return 0;
//
//模拟实现strcpy
//char* My_strcpy(char* best, const char* src)
//{
//	assert(best && src);
//	char* ret = best;
//	while (*src != '\0')
//	{
//		*best = *src;
//		best++;
//		src++;
//	}
//	*best = *src;
//	return ret;
//
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	char arr1[20] = { 0 };
//	My_strcpy(arr1, arr);
//	printf("%s", arr1);
//	return 0;
//}
//模拟实现strcat
char* My_strcat(char * arr, const char*arr2)
{
	assert(arr && arr2);
	char* p = arr;
	while (*arr != '\0')
	{
		arr++;
	}
	while (*arr++ = *arr2++);
	return p;
}
int main()
{
	char arr[20] = "hello";
	char arr2[20] = {" world"};
	My_strcat(arr, arr2);
	printf("%s", arr);
	return 0;
}

