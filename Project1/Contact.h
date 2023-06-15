#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#define NAME 20
#define SEX  10
#define ADDR 20
#define TELL 20
#define DEFAULT_SZ 3

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
};
typedef struct PeoInfo
{
	char name[NAME];
	int age;
	char sex[SEX];
	char tell[TELL];
	char addr[ADDR];
}PeoInfo;
typedef struct Contact
{
	PeoInfo* date;
	int sz;
	int catacity;
}Contact;

void InitContact(Contact * pc);
void ADDContact(Contact* pc);
void DelContact(Contact* pc);
void SearchContact(const Contact* pc);
void ShowContact(const Contact * pc);
void ModifyContact(Contact*pc);
void SortContact(const Contact * pc);
void SaveContact(Contact* pc);
void LoadContact(Contact* pc);