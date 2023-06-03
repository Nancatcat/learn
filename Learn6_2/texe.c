#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "ef";
	char* p = strstr(arr1, arr2);
	printf("%s",p);
	return 0;
}