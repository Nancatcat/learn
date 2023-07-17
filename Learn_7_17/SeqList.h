#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>


typedef int SLDataType;//这是我们自行定义的类型

typedef struct SeqList
{
	SLDataType * a;//指向动态开辟的内存
	int sz;//记录使用的空间个数
	int capacity;//记录空间总容量
}SL;
void SLInit(SL* ps);//初始化
void SLprint(SL* ps);//打印函数
void SLPushBack(SL* ps, SLDataType x);//后插
void SLPushFront(SL* ps, SLDataType x);//头插
void SLPopBack(SL* ps);//尾删
void SLPopFront(SL* ps);//头删
int SLFind(SL* ps, SLDataType x);//查找
void SLModify(SL* ps, int pos);//删除任意数据