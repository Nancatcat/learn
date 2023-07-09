#define _CRT_SECURE_NO_WARNINGS 1
#include"Seqlist.h"
//int Mystrlen(char* arr)
//{
//	assert(arr);
//	int count = 0;
//	while (*arr++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
////strlen
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = Mystrlen(arr);
//	printf("%d", len);
//	return 0;
//}
//strcpy
//char *  Mystrcpy(char* arr, const char* arr2)
//{
//	char* ps = arr;
//	assert(arr && arr2);
//
//	while ((*arr++ = *arr2++))
//	{
//		;
//	}
//	return ps;
//	
//}
//int main()
//{
//	char arr[20] = { 0 };
//	char arr2[] = "xiaobitedamengxiang";
//	printf("%s", Mystrcpy(arr, arr2));
//	return 0;
//}
//strcmp
//int Mystrcmp(const char* arr, const char* arr2)
//{
//	assert(arr);
//	assert(arr2);
//	while (*arr==*arr2)
//	{
//		if (*arr == '\0')
//		{
//			return 0;
//		}
//		arr++;
//		arr2++;
//	}
//	return ((*arr) - (*arr2));
//}
//int main()
//{
//	char arr[] = "abcd";
//	char arr2[] = "aced";
//	int ret = Mystrcmp(arr, arr2);
//	if (ret > 0)
//	{
//		printf("arr>arr2\n");
//	}
//	else if (ret < 0)
//	{
//		printf("arr<arr2\n");
//	}
//	else
//	{
//		printf("arr=arr2\n");
//	}
//}
//strcat
//char* Mystrcat(char* arr, const char* arr2)
//{
//	assert(arr && arr2);
//	char* ret = arr;
//	while (*arr)
//	{
//		arr++;
//	}
//	while ((*arr++ = *arr2++))
//	{
//		;
//	}
//	return ret;	
//}
//int main()
//{
//	char arr[50] = "xiaobit";
//	char arr2[] = "damengxiang";
//	Mystrcat(arr, arr2);
//	printf("%s\n",arr);
//	return 0;
//}
//strstr
char* Mystrstr(const char* dest, const char* src)
{
	assert(dest && src);
	char* ps = dest;
	char* str = ps;
	char* str2 = src;
	while (*ps)
	{
		str = ps;
		str2 = src;
		while (*str && *str2 && *str == *str2)
		{
			str++;
			str2++;
		}
		if (*str2 == '\0')
		{
			return ps;
		}
		ps++;
	}

		return NULL;
}
int main()
{
	char arr[] = "xiaobitedamengxiang";
	char arr2[] = "damengxiang";
	char * ret = Mystrstr(arr, arr2);
	if (ret == NULL)
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
	return 0;
}