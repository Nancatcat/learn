#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void Expansion(Contact* pc)//���ݺ���
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
			printf("���ݳɹ�\n");
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
void InitContact(Contact* pc)//��ʼ��ͨѶ¼
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
void AddContact(Contact* pc)//����ͨѶ¼����
{
	assert(pc);
	printf("��ע�⣬����������ϵ��\n");
	Expansion(pc);
	printf("����������>");
	scanf("%s", pc->data[pc->count].name);
	printf("����������\n");
	scanf("%d", &(pc->data[pc->count].age));
	printf("�������Ա�\n");
	scanf("%s", pc->data[pc->count].sex);
	printf("������绰\n");
	scanf("%s", pc->data[pc->count].tele);
	printf("�������ַ\n");
	scanf("%s", pc->data[pc->count].addr);
	pc->count++;
	printf("���ӳɹ�\n");
}

void ShowContact(const Contact* pc)//��ʾͨѶ¼
{
	assert(pc);
	int i = 0;
	for (; i < pc->count; i++)
	{
		printf("%-20s\t%-5s\t%-12s\t%-20s\t%-30s\n",
			"����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-5d\t%-12s\t%-20s\t%-30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}
int FindByName(Contact* pc, char name[])//����ͨѶ¼�е�ĳ��
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
void DelContact(Contact* pc)//ɾ��ͨѶ¼��ĳ��
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
	}
	printf("����������\n");
	char arr[Name] = { 0 };
	scanf("%s", arr);
	int pos = FindByName(pc, arr);//���Һ���
	if (pos == -1)
	{
		printf("����ʧ�ܣ���ȷ���Ƿ���ڸ���ϵ��\n");
		return;
	}
	int i = 0;
	for(i = pos; i < pc->count - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("ɾ���ɹ�\n");
}

void SearchContact(Contact* pc, char arr[])//������ϵ��
{
	assert(pc);
	assert(arr);
	int ret = FindByName(pc, arr);
	if (ret == -1)
	{
		printf("����ʧ�ܣ���ȷ���Ƿ���ڸ���ϵ��\n");
	}
	printf("%-20s\t%-5s\t%-12s\t%-20s\t%-30s\n",
		"����", "����", "�Ա�", "�绰", "��ַ");
	printf("%-20s\t%-5d\t%-12s\t%-20s\t%-30s\n",
		pc->data[ret].name,
		pc->data[ret].age,
		pc->data[ret].sex,
		pc->data[ret].tele,
		pc->data[ret].addr);
}

void ModifyContact(Contact* pc, char arr[])//�޸�ͨѶ¼
{
	assert(pc);
	assert(arr);
	int pos = FindByName(pc, arr);
	if (pos == -1)
	{
		printf("�޸�ʧ�ܣ���ȷ���Ƿ���ڸ���ϵ��\n");
		return;
	}
	printf("����������:>");
	scanf("%s", pc->data[pos].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pos].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pos].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pos].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pos].addr);

	printf("�޸ĳɹ�\n");
}

int cmp(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name , ((PeoInfo*)e2)->name);
}
void SortContact(Contact* pc)
{
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp);
}
void DestroyContact(Contact* pc)//�ͷſռ�
{
	free(pc->data);
	pc->data = NULL;
	pc = NULL;
}

void SaveContact(const Contact* pc)//��������
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


