#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//整形
//int cmp(const void* e1, const void* e2)
//{
//	return *(char*)e1 - *(char*)e2;
//}
//浮点型
// int cmp(const void* e1, const void* e2)
//{
//	return *(float*)e1 > *(float*)e2?1:-1;
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
 //浮点型
// int cmp(const void* e1, const void* e2)
// {
//	 if (*(float*)e1 > *(float*)e2)
//	 {
//		 return 1;
//	 }
//	 else if (*(float*)e1 < *(float*)e2)
//	 {
//		 return -1;
//	 }
//	 else
//	 {
//		 return 0;
//	 }// 因为浮点型的精度问题，所以采用比较大小更不容易出错；
// }
//int main()
//{
//	float arr[10] = { 9.9,8.8,7.7,6.6,5.5,4.4,3.3,2.2,1.1,0.0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%.1f ", arr[i]);
//	}
//	return 0;
//}
//char型
//int cmp(const void* e1, const void* e2)
//{
//	return *(char*)e1 - *(char*)e2;
//}
//int main()
//{
//	char arr[] = "mnbvcxz";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}
//结构体
//#include<string.h>
//struct book
//{
//	char name[50];
//	int year[20];
//};
//int cmp(const void* e1, const void* e2)
//{
//	return strcmp(((struct book*)e1)->name, ((struct book*)e2)->name);
//}
//int main()
//{
//	struct book s1[] = { {"zhangsan",20220707},{"apple",20210707 } };
//	int sz = sizeof(s1) / sizeof(s1[0]);
//	qsort(s1, sz, sizeof(s1[0]), cmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s\n", s1[i].name);
//	}
//	return 0;
//}
int cmp(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void Exchange(char* e1, char* e2, int size)
{
	for (int i = 0; i < size; i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}

void Myqsort(void* base, int num, int size, int (*cmp)(const void*, const void*))
{
	for (int i = 0; i < num-1; i++)
	{
		for (int j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)base + (j * size), (char*)base + (j + 1) * size) > 0)
			{
				Exchange((char*)base + (j * size), (char*)base + (j + 1) * size, size);
			}
		}
	}
}
int main()
{
	int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	Myqsort(arr, sz, sizeof(arr[0]), cmp);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0; 
}
