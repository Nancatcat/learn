#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//struct stu
//{
//	int arr;
//	char b;
//	float c;
//
//};
//#define MYoffsetof(struct,name) (int)&(((struct stu*)0)->name)
//int main()
//{
//	printf("%d\n", MYoffsetof(struct, arr));
//	printf("%d\n", MYoffsetof(struct, b));
//	printf("%d\n", MYoffsetof(struct, c));
//
//	return 0;
//}
#define Bit(a) (a = ((a&0xaaaaaaaa)>>1)+((a&0x55555555)<<1))
int main()
{
	int a = 10;
	Bit(a);
	printf("%d", a);
	return 0;
}