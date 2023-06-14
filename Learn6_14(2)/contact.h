#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#define Max 100
#define Name 20
#define Sex 10
#define Tele 20
#define Addr 20
#define Increase 2
enum Function//枚举功能键
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
};
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>
typedef struct PeoInfo
{
	char name[Name];
	int age;
	char sex [Sex];
	char tele[Tele];
	char addr[Addr];
}PeoInfo;
typedef struct Contact
{
	PeoInfo* data;
	int count;
	int Capacity;
}Contact;
void InitContact(Contact * pc);//初始化通讯录
void AddContact(Contact * pc );//增加通讯录联系人
void ShowContact(const Contact * pc);//显示通讯录联系人
void DelContact(Contact * pc);//精确删除
void SearchContact(Contact* pc,char arr[]);//精确查找
void ModifyContact(Contact *pc,char arr[]);//精确修改
void SortContact(Contact* pc);//排序
void DestroyContact(Contact* pc);//释放空间
void SaveContact(const Contact* pc);
