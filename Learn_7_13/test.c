#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"
void nume()
{
	printf("----------------------------------------------\n");
	printf("----------------------------------------------\n");
	printf("------     1.ADD   ------------2.DEL   -------\n");
	printf("------     3.SEARCH------------4.MODIFY-------\n");
	printf("------     5.SHOW  ------------6.SORT  -------\n");
	printf("-------------------- 0.EXIt ------------------\n");
	printf("----------------------------------------------\n");

}
void test()
{
	int input = 0;
	Contact s1;
	ContactInit(&s1);
	do
	{
		nume();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			ContactADD(&s1);
			break;
		case 2:
			ContactDEL(&s1);
			break;
		case 3:
			ContactSEARCH(&s1);
			break;
		case 4:
			ContactDEL(&s1);
			break;
		case 5:
			ContactSHOW(&s1);
			break;
		case 6:
			ContactSQORT(&s1);
			break;
		default:
			printf("输入有误，重新输入\n");
			break;
		case 0:
			ContactDESTROY(&s1);
			printf("推出成功\n");
			break;
		}

	} while (input);
}
int main()
{
	test();
	return 0;
}