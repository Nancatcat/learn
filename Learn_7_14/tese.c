#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int x = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int arr2[2] = { 0 };
//	for (int i = 0; i < sz; i++)
//	{
//		x ^= arr[i];
//	}
//	int pos = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((x >> pos) & 1) == 1)
//		{
//			break;
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			arr2[0] ^= arr[i];
//		}
//		else
//		{
//			arr2[1] ^= arr[i];
//
//		}
//	}
//	printf("%d %d", arr2[0], arr2[1]);
//	return 0;
//}
//char* MyStrncpy(char* arr, const char* arr2, size_t num)
//{
//	assert(arr && arr2);
//	char* ptr = arr;
//	while (*arr != '\0')
//	{
//		arr++;
//	}
//	while (*arr2 != '\0')
//	{
//		*arr= *arr2;
//		arr++;
//		arr2++;
//	}
//	*arr = *arr2;
//	return ptr;
//}
//int main()
//{
//	char arr[20] = "xiaobit";
//	char arr2[20]= "damengxiang";
//	MyStrncpy(arr, arr2, 7);
//	printf("%s", arr);
//	return 0;
//}
//char* Mystrncpy(char* arr, char* arr2, size_t num)
//{
//	assert(arr&&arr2);
//	char* ptr = arr;
//	while (num--)
//	{
//		if (*arr2 == '\0')
//		{
//			*arr++ = '\0';
//		}
//		else
//		{
//			*arr++ = *arr2++;
//		}
//	}
//	return ptr;
//}
//int main()
//{
//	char arr[20] = "bit";
//	char arr2[20] = "damengxiang";
//	Mystrncpy(arr, arr2, 11);
//	printf("%s\n", arr);
//	return 0;
//}
//int Myatoi(const char* str)
//{
//    long number = 0;
//    int flag = 1;   
//    if (NULL == str)
//    {
//        printf("str is NULL");
//        return 0;
//    }
//    while (*str == ' ')  
//    {
//        str++;
//    }
//    if (*str == '-') 
//    {
//        flag = -1;
//        str++;   
//    }
//    while ((*str >= '0') && (*str <= '9'))
//    {
//        number = number * 10 + *str - '0';
//        str++;
//    }
//    return flag * number;
//   
//}
//int main()
//{
//	char arr[20] = "123456789";
//	int val = 0;
//	val = Myatoi(arr);
//	printf("%d", val);
//
//	return 0;
//}
void tese()
{
	SeqList s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1,1);
	SeqListPushBack(&s1,2);
	SeqListPushBack(&s1,3);
	SeqListPushBack(&s1,4);
	SeqListPushBack(&s1,5);
	SeqListInsert(&s1, 0, 0);
	SeqListErase(&s1, 0);
	SeqListPrint(&s1);
}
int main()
{
	tese();
	return 0;
}