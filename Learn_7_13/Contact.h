#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>



#define NAME 20
#define SEX 10
#define TELE 11
#define ADDR 20
#define MAX 1000
#define INT_SZ 2


typedef struct PeoInfo
{
	char name[NAME];
	int age;
	char sex[SEX];
	char tele[TELE];
	char addr[ADDR];
}PeoInfo;

typedef struct Contact
{
	PeoInfo *data;
	int sz;
	int capacity;
}Contact;

//初始化
void ContactInit(Contact* pc);
//显示
void ContactSHOW(const Contact* pc);

//增加
void ContactADD(Contact* pc);
//删除
void ContactDEL(Contact* pc);
//查找
void ContactSEARCH(const Contact* pc);
//查找删除
void ContactMODIFY(Contact* pc);
//排序
void  ContactSQORT(const Contact* pc);

void ContactDESTROY(Contact* pc);