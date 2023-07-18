#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 0;
//	int b = 1;
//	int c = 1;
//	int tmp = 0;
//	while (1)
//	{
//		if (b == n)
//		{
//			printf("0\n");
//			break;
//		}
//		else if(b>n)
//		{
//			if ((a - n) > (b - n))
//			{			
//				tmp = ("%d", abs(b - n));
//				break;
//			}
//			else
//			{
//				tmp = ("%d", abs(a - n));
//				break;
//			}
//		}
//		a = b;
//		b = c;
//		c = a + b;
//	}
//	if (tmp < 0)
//	{
//		printf("%d", tmp * -1);
//	}
//	else
//	{
//		printf("%d", tmp);
//	}
//	return 0;
//}
#include<malloc.h>
#include<string.h>

//void replaceSpace(char* str, int length) 
//{
//    if (str == NULL || length <= 0) return;
//    int sz = 0, count = 0;
//    for (int i = 0; str[i] != '\0'; i++)
//    {
//        if (str[i] == ' ') count++;
//        sz++;
//    }
//    int new_sz = sz + count * 2;
//    int i = sz;
//    int j = new_sz;
//    while (sz >= 0 && j > i)
//    {
//        if (str[i] == ' ')
//        {
//            str[j--] = '0';
//            str[j--] = '2';
//            str[j--] = '%';
//        }
//        else
//            str[j--] = str[i];
//        i--;
//    }
//}
//void replaceSpace(char* str, int length)
//{
//    char* ptr = str;
//    int count = 0;
//    while (*ptr != ' ')
//    {
//        count++;
//    }
//    char* node = (char*)malloc((length + count * 2) * sizeof(char));
//    if (node == NULL)
//    {
//        perror("node");
//        return;
//    }
//    ptr = node;
//    while (*str != '\0')
//    {
//        if (*str == ' ')
//        {
//            *node = '%';
//            node++;
//            *node = '2';
//            node++;
//            *node = '0';
//        }
//        else
//        {
//            *node = *str;
//        }
//        node++;
//        str++;
//    }
//    str = ptr;
//    node = NULL;
//    ptr = NULL;
//}

//int main()
//{
//	char str[50] = "we come world";
//    int len = strlen(str);
//	replaceSpace(str, len);
//	printf("%s", str);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char arr[14] = { 0 };
//	int k = 0;
//	int i = 0;
//	while (n)
//	{
//		if (k != 0 && k % 3 == 0)
//		{
//			arr[i++] = ',';
//		}
//		arr[i++] = n % 10 + '0';
//		n /= 10;
//		k++;
//	}
//	for (i--; i >= 0; i--)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}
// ‰»Î£∫ They are students.aeiou
// ‰≥ˆ Thy r stdnts.
//int main()
//{
//	char arr1[101] = "abcdefg";
//	char arr2[101] = "bdf";
//	gets(arr1);
//	gets(arr2);
//	int len2 = strlen(arr2);
//	int len1 = strlen(arr1);
//	int begin = 0;
//	int j = 0;
//	while (begin < len1)
//	{
//		for(int i = 0; i < len2; i++)
//		{
//			if (arr1[len1] == arr2[i])
//				;
//		}
//	}
//	return 0;
//}
//980364535
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m = n;
//	char arr[20] = { 0 };
//	int i = 0;
//	int k = 0;
//	while (m)
//	{
//		if (k % 3 == 0 && k != 0)
//		{
//			arr[i++] = ',';
//		}
//		arr[i++] = m % 10+'0';
//		m /= 10;
//		k++;
//	}
//	for (i--; i >=0; i--)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char arr[14] = { 0 };
//	int k = 0;
//	int i = 0;
//	while (n)
//	{
//		if (k!= 0 && k % 3 == 0)
//		{
//			arr[i++] = ',';
//		}
//		arr[i++] = n % 10+'0';
//		n = n / 10;
//		k++;
//	}
//	for (i; i >=0; i--)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}
//#include<stdlib.h>
//int next1(char c, char arr[])
//{
//	int i = 0;
//	while (arr[i])
//	{
//		if (arr[i] == c)
//		return 1;
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[101] = { 0 };
//	char arr2[101] = { 0 };
//	gets(arr1);
//	gets(arr2);
//	int i = 0;
//	while (arr1[i])
//	{
//		if (next1(arr1[i], arr2)==0)
//			printf("%c",arr1[i]);
//		i++;
//	}
//	return 0;
