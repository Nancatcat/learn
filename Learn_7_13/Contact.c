#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"
void ContactInit(Contact* pc)
{
	assert(pc);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}
void ContactCHECKCapacity(Contact* pc)
{
	if (pc->capacity == pc->sz)
	{
		int newsz = pc->capacity == 0 ? 4 :pc->capacity*2;
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, sizeof(PeoInfo) * newsz);
		if (ptr == NULL)
		{
			perror(ContactInit);
			return;
		}
		pc->data = ptr;
		pc->capacity = newsz;
		printf("���ݳɹ�\n");
	}
	
}
void ContactSHOW(const Contact* pc)
{
	assert(pc);
	printf("%-10s\t%-5s\t%-4s\t%-12s\t%-30s\n",
		"����", "�Ա�", "����", "�绰", "��ַ");
	for (int i = 0; i < pc->sz; i++)
	{
		printf("%-10s\t%-5s\t%-4d\t%-12s\t%-30s\n",
			pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].age,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}
int  ContactFind(const Contact* pc,char name[])
{
	for (int i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void ContactADD(Contact* pc)
{
	assert(pc);
	ContactCHECKCapacity(pc);
	printf("������Ҫ��¼������\n");
	scanf("%s", pc->data[pc->sz].name);
	printf("������Ҫ��¼���Ա�\n");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������Ҫ��¼������\n");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("������Ҫ��¼�ĺ���\n");
	scanf("%s", pc->data[pc->sz].tele);
	printf("������Ҫ��¼�ĵ�ַ\n");
	scanf("%s", pc->data[pc->sz].addr);
	printf("��ӳɹ�\n");
	pc->sz++;
}
void ContactDEL(Contact* pc)
{
	assert(pc);
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	char name[NAME];
	printf("������Ҫɾ��������\n");
	scanf("%s", name);
	int del = 0;
	del = ContactFind(pc, name);
	if (del<0)
	{
		printf("���Ҵ�����ȷ��\n");
		return;
	}
	for (int i = del; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ�\n");
}
void ContactSEARCH(const Contact* pc)
{
	assert(pc);
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	char name[NAME];
	printf("������Ҫ���ҵ�����\n");
	scanf("%s", name);
	int del = 0;
	del = ContactFind(pc, name);
	if (del < 0)
	{
		printf("���Ҵ�����ȷ��\n");
		return;
	}
	printf("%-10s\t%-5s\t%-4s\t%-12s\t%-30s\n",
		"����", "�Ա�", "����", "�绰", "��ַ");
	printf("%-10s\t%-5s\t%-4d\t%-12s\t%-30s\n",
		pc->data[del].name,
		pc->data[del].sex,
		pc->data[del].age,
		pc->data[del].tele,
		pc->data[del].addr);

}
void ContactMODIFY(Contact* pc)
{
	assert(pc);
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	char name[NAME];
	printf("������Ҫɾ��������\n");
	scanf("%s", name);
	int del = 0;
	del = ContactFind(pc, name);
	if (del < 0)
	{
		printf("���Ҵ�����ȷ��\n");
		return;
	}
	for (int i = del; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ�\n");
}
int cmp(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
void  ContactSQORT(const Contact* pc)
{
	assert(pc);
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	qsort(pc->data, pc->sz,sizeof(PeoInfo), cmp);
	printf("����ɹ�\n");
}

void ContactDESTROY(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}