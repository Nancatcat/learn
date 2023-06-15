#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void Expansion(Contact* pc)//扩容函数
{
	if (pc->count == pc->Capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->Capacity + Increase) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			printf("%s", strerror(errno));
			return;
		}
		else
		{
			printf("增容成功\n");
			pc->data = ptr;
			pc->Capacity += Increase;
		}
	}
}
void CloneContact(Contact* pc)
{
	FILE* p = fopen("ADD.txt", "rb");
	if (p == NULL)
	{
		perror("CloneContact");
		return;
	}
	PeoInfo tmp = { 0 };
	while(fread(&tmp,sizeof(PeoInfo), 1, p)==1)
	{	
		Expansion(pc);
		pc->data[pc->count] = tmp;
		pc->count++;
	}
	fclose(p);
	p = NULL;
}
void InitContact(Contact* pc)//初始化通讯录
{
	pc->count = 0;
	PeoInfo* ptr = (PeoInfo*)calloc(Increase, sizeof(PeoInfo));
	if (ptr == NULL)
	{`11`	
		printf("%s", strerror(errno));
		return;
	}
	pc->Capacity = Increase;
	pc->data = ptr;
	CloneContact(pc);
}
void AddContact(Contact* pc)//增加通讯录人数
{
	assert(pc);
	printf("请注意，您在增加联系人\n");
	Expansion(pc);
	printf("请输入名字>");
	scanf("%s", pc->data[pc->count].name);
	printf("请输入年龄\n");
	scanf("%d", &(pc->data[pc->count].age));
	printf("请输入性别\n");
	scanf("%s", pc->data[pc->count].sex);
	printf("请输入电话\n");
	scanf("%s", pc->data[pc->count].tele);
	printf("请输入地址\n");
	scanf("%s", pc->data[pc->count].addr);
	pc->count++;
	printf("增加成功\n");
}

void ShowContact(const Contact* pc)//显示通讯录
{
	assert(pc);
	int i = 0;
	for (; i < pc->count; i++)
	{
		printf("%-20s\t%-5s\t%-12s\t%-20s\t%-30s\n",
			"姓名", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-5d\t%-12s\t%-20s\t%-30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}
int FindByName(Contact* pc, char name[])//查找通讯录中的某人
{
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
void DelContact(Contact* pc)//删除通讯录的某人
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("通讯录为空，无法删除\n");
	}
	printf("请输入姓名\n");
	char arr[Name] = { 0 };
	scanf("%s", arr);
	int pos = FindByName(pc, arr);//查找函数
	if (pos == -1)
	{
		printf("查找失败，请确认是否存在改联系人\n");
		return;
	}
	int i = 0;
	for(i = pos; i < pc->count - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("删除成功\n");
}

void SearchContact(Contact* pc, char arr[])//查找联系人
{
	assert(pc);
	assert(arr);
	int ret = FindByName(pc, arr);
	if (ret == -1)
	{
		printf("查找失败，请确认是否存在该联系人\n");
	}
	printf("%-20s\t%-5s\t%-12s\t%-20s\t%-30s\n",
		"姓名", "年龄", "性别", "电话", "地址");
	printf("%-20s\t%-5d\t%-12s\t%-20s\t%-30s\n",
		pc->data[ret].name,
		pc->data[ret].age,
		pc->data[ret].sex,
		pc->data[ret].tele,
		pc->data[ret].addr);
}

void ModifyContact(Contact* pc, char arr[])//修改通讯录
{
	assert(pc);
	assert(arr);
	int pos = FindByName(pc, arr);
	if (pos == -1)
	{
		printf("修改失败，请确认是否存在该联系人\n");
		return;
	}
	printf("请输入名字:>");
	scanf("%s", pc->data[pos].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pos].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pos].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pos].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pos].addr);

	printf("修改成功\n");
}

int cmp(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name , ((PeoInfo*)e2)->name);
}
void SortContact(Contact* pc)
{
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp);
}
void DestroyContact(Contact* pc)//释放空间
{
	free(pc->data);
	pc->data = NULL;
	pc = NULL;
}

void SaveContact(const Contact* pc)//储存数据
{
	assert(pc);
	FILE* p = fopen("ADD.txt", "wb");
	if (p == NULL)
	{
		perror("SaveContact");
		return;
	}
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		fwrite(pc->data + i, sizeof(PeoInfo), 1, p);
	}
	fclose(p);
	p = NULL;
}


