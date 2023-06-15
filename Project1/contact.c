#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"
void check_capacity(Contact* pc)//����ͨѶ¼
{
	assert(pc);
	if (pc->sz == pc->catacity)
	{
		PeoInfo* ptr =
			(PeoInfo*)realloc(pc->date,
				(pc->catacity + DEFAULT_SZ) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			perror("check_capacity");
			return;
		}
		pc->date = ptr;
		pc->catacity += DEFAULT_SZ;
		printf("���ݳɹ�\n");
	}
}
void InitContact(Contact* pc)//��ʼ��ͨѶ¼
{
	assert(pc);
	PeoInfo* ptr = (PeoInfo*)(calloc(DEFAULT_SZ, sizeof(PeoInfo)));
	pc->sz = 0;
	if (ptr == NULL)
	{
		perror("InitContact");
		return;
	}
	pc->date = ptr;
	pc->catacity = DEFAULT_SZ;
	LoadContact(pc);
}
void LoadContact(Contact* pc)
{
	assert(pc);
	FILE* ptr = fopen("Contact.txt", "rb");
	if (ptr == NULL)
	{
		perror("LoadContact");
		return;
	}
	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, ptr) == 1)
	{	
		check_capacity(pc);
		pc->date[pc->sz]= tmp;
		pc->sz++;
	}
	fclose(ptr);
	ptr = NULL;
}

int FindByName(const Contact* pc, char arr[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->date[i].name, arr)== 0)
		{
			return i;
		}
	}
	return -1;
}
void ADDContact(Contact* pc)//���
{
	assert(pc);
	check_capacity(pc);
	printf("��ʼ����\n");
	printf("������Ҫ���ӵ�����\n");
	scanf("%s", pc->date[pc->sz].name);
	printf("����������\n");
	scanf("%d", &(pc->date[pc->sz].age));
	printf("�������Ա�\n");
	scanf("%s", pc->date[pc->sz].sex);
	printf("������绰\n");
	scanf("%s", pc->date[pc->sz].tell);
	printf("�������ͥ��ַ\n");
	scanf("%s", pc->date[pc->sz].addr);
	printf("��ӳɹ�\n");
	pc->sz++;
}
void DelContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	printf("������Ҫɾ���Ķ���\n");
	char arr[50];
	scanf("%s", arr);
	int i = 0;
	int tmp = FindByName(pc, arr);
	if (tmp == -1)
	{
		printf("Ҫɾ���Ķ��󲻴���\n");
		return;
	}
	for (i = tmp; i < pc->sz-1; i++)
	{
		pc->date[i] = pc->date[i + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ�\n");

}
void SearchContact(const Contact* pc)//����
{
	printf("������Ҫ���ҵĶ���\n");
	char arr[50];
	scanf("%s", arr);
	int i = 0;
	int tmp = FindByName(pc, arr);
	if (tmp == -1)
	{
		printf("Ҫ���ҵĶ��󲻴���\n");
		return;
	}
	printf("%-20s\t%-4s\t%-5s\t%-20s\t%-12s\n", "����", "����", "�Ա�", "��ַ", "�绰");
	printf("%-20s\t%-4d\t%-5s\t%-20s\t%-12s\n", pc->date[tmp].name,
		pc->date[tmp].age,
		pc->date[tmp].sex,
		pc->date[tmp].addr,
		pc->date[tmp].tell);
}

void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s\t%-4s\t%-5s\t%-20s\t%-12s\n", "����", "����", "�Ա�", "��ַ", "�绰");
	printf("\n");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-4d\t%-5s\t%-20s\t%-12s\n", pc->date[i].name,
			pc->date[i].age,
			pc->date[i].sex,
			pc->date[i].addr,
			pc->date[i].tell);
	}
}

void ModifyContact(Contact* pc)
{
	assert(pc);
	assert(pc);
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷��޸�\n");
		return;
	}
	printf("������Ҫ�޸ĵĶ���\n");
	char arr[50];
	scanf("%s", arr);
	int i = 0;
	int tmp = FindByName(pc, arr);
	if (tmp == -1)
	{
		printf("Ҫ�޸ĵĶ��󲻴���\n");
		return;
	}
	printf("��ʼ�޸�\n");
	printf("������Ҫ�޸ĵ�����\n");
	scanf("%s", pc->date[tmp].name);
	printf("����������\n");
	scanf("%d", &(pc->date[tmp].age));
	printf("�������Ա�\n");
	scanf("%s", pc->date[tmp].sex);
	printf("������绰\n");
	scanf("%s", pc->date[tmp].tell);
	printf("�������ͥ��ַ\n");
	scanf("%s", pc->date[tmp].addr);
	printf("�޸ĳɹ�\n");
}
int cmp(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name,((PeoInfo*)e2)->name);
}
void SortContact(const Contact* pc)
{   
	qsort(pc->date, pc->sz, sizeof(PeoInfo), cmp);
	printf("����ɹ�\n");
}
void SaveContact(Contact* pc)
{
	assert(pc);
	FILE* ptr = fopen("Contact.txt", "wb");
	if (ptr == NULL)
	{
		perror("SaveContact");
		return;
	}
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->date + i, sizeof(PeoInfo), 1, ptr);
	}
	fclose(ptr);
	ptr = NULL;
}
