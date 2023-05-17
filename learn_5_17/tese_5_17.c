#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int i = 0;
//	
//	for (i = 0; i < 1000; i++)
//	{
//		int k = 1;
//		int j = 0;
//		for (j =2 ; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				k = 0;
//				break;
//			}
//		}
//		if (k == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
////指针数组
//int main()
//{
//	int a, b, c;
//	int* arr[10] = { &a,&b, &c };
//	return 0; 
//}
////数组指针
//int main()
//{
//	
//	int arr[1];
//	int arr2[1];
//	int arr3[1];
//	int(*p2)[1] = &arr;
//	int(*prr3[10])[5];
//	int arr1[5] = { 0 };
//	int(*p1)[5] = &arr1;
//	int (*parr3[10])[5] = {&p1, &p2 };
//	return 0;
//}
////数组指针数组
//int main()
//{
//	int arr[1] = { 0 };
//	int*p[1]=&arr;
//	char* arr3[6];
//	char* (*p3)[6] = &arr3;
//	return 0;
//}
//int main()
//{	
//	int(*parr[10])[5];
//
//	//取出parr单独的地址
//	int**b=parr;
//	//把parr的首地址赋值给b;因为b是个指针所以要先和*结合（*b）；
//	//又因为parr第一个元素是int 类型的指针，所以得出
//
//	//int* (*b)=&parr;
//
//	int*(*b1)[10] = &parr;
//	//把parr数组的地址赋值给b；因为是整个数组所以【10】；
//	//b1又是指针，所以先和*结合，（*b1）；
//	// (*b)指向的地址是个10个元素的数组；所以（*b）[10]；
//	// 又因为parr的每个元素都是一个int 类型的指针，最后得出
//
//
//	//int*(*b1)[10] = &parr;
//	
//	return 0;
//}
