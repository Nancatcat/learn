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

//��ʼ��
void ContactInit(Contact* pc);
//��ʾ
void ContactSHOW(const Contact* pc);

//����
void ContactADD(Contact* pc);
//ɾ��
void ContactDEL(Contact* pc);
//����
void ContactSEARCH(const Contact* pc);
//����ɾ��
void ContactMODIFY(Contact* pc);
//����
void  ContactSQORT(const Contact* pc);

void ContactDESTROY(Contact* pc);