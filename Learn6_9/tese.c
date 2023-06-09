#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct stu 
{
	char name[20];
	int num;
	double age;
};
void print1(struct stu* s1)
{
	printf("%s %d %.2lf", s1->name, s1->num, s1->age);
}
void print2(struct stu s1)
{
	printf("%s %d %.2lf", s1.name, s1.num, s1.age);
}
int main()
{
	struct stu s1 = { .age = 168.5,.name="zhangsan",.num = 20 };
	print1(&s1);
	print2(s1);
	return 0;
}
struct stu
{
	char name[20];
	int num;
	int age;
};
struct stu
{
	char name[20];
	int num;
	int age;
}s1,s2;
struct stu 
{
	char name[20];
	int num;
	int age;
	struct stu* next;
};
typedef struct stu
{
	char name[20];
	int num;
	int age;
	struct stu* next;
}Next;