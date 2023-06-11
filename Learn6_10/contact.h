#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#define Max 100
#define Name 20
#define Sex 10
#define Tele 20
#define Addr 20

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
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
	PeoInfo data[Max];
	int count;
}Contact;
void InitContact(Contact * pc);//��ʼ��ͨѶ¼
void AddContact(Contact * pc );//����ͨѶ¼��ϵ��
void ShowContact(const Contact * pc);//��ʾͨѶ¼��ϵ��
void DelContact(Contact * pc);//��ȷɾ��
void SearchContact(Contact* pc,char arr[]);//��ȷ����
void ModifyContact(Contact *pc,char arr[]);//��ȷ�޸�
void SortContact(Contact* pc);
