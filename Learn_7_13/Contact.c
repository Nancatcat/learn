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
		printf("扩容成功\n");
	}
	
}
void ContactSHOW(const Contact* pc)
{
	assert(pc);
	printf("%-10s\t%-5s\t%-4s\t%-12s\t%-30s\n",
		"名字", "性别", "年龄", "电话", "地址");
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
	printf("请输入要记录的姓名\n");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入要记录的性别\n");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入要记录的年龄\n");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入要记录的号码\n");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入要记录的地址\n");
	scanf("%s", pc->data[pc->sz].addr);
	printf("添加成功\n");
	pc->sz++;
}
void ContactDEL(Contact* pc)
{
	assert(pc);
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
	char name[NAME];
	printf("输入你要删除的姓名\n");
	scanf("%s", name);
	int del = 0;
	del = ContactFind(pc, name);
	if (del<0)
	{
		printf("查找错误，请确认\n");
		return;
	}
	for (int i = del; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
}
void ContactSEARCH(const Contact* pc)
{
	assert(pc);
	if (pc->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	char name[NAME];
	printf("输入你要查找的姓名\n");
	scanf("%s", name);
	int del = 0;
	del = ContactFind(pc, name);
	if (del < 0)
	{
		printf("查找错误，请确认\n");
		return;
	}
	printf("%-10s\t%-5s\t%-4s\t%-12s\t%-30s\n",
		"名字", "性别", "年龄", "电话", "地址");
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
		printf("通讯录为空\n");
		return;
	}
	char name[NAME];
	printf("输入你要删除的姓名\n");
	scanf("%s", name);
	int del = 0;
	del = ContactFind(pc, name);
	if (del < 0)
	{
		printf("查找错误，请确认\n");
		return;
	}
	for (int i = del; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
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
		printf("通讯录为空\n");
		return;
	}
	qsort(pc->data, pc->sz,sizeof(PeoInfo), cmp);
	printf("排序成功\n");
}

void ContactDESTROY(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}