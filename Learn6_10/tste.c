#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void menu()
{
	printf(" ********************************************\n");
	printf("******1.Add(����)            2.Del(ɾ��)******\n");
	printf("******3.Search(���ң�        4.Modify(�޸�)***\n");
	printf("******5.Show(��ʾ)           6.Sort(����)*****\n");
	printf(" ****************   0.Exit  *****************\n");

}
int main()
{
	int input = 0;
	Contact con;//���������Ϣ
	InitContact(&con);//��ʼ��ͨѶ¼
	do
	{	
		menu();
		scanf("%d", &input);
		switch(input)
		{
		case 1:
		{
			AddContact(&con);//����ͨѶ¼
			break;
		}
		case 2:
		{	
			DelContact(&con);//ɾ��ͨѶ¼
			break;
		}
		case 3:
		{	printf("������Ҫ���ҵĶ���\n");
			char arr[] = { 0 };
			scanf("%s", arr);
			SearchContact(&con,arr);
			break;
		}
		case 4:
		{	printf("������Ҫ�޸ĵĶ���\n");
			char arr[] = { 0 };
			scanf("%s", arr);
			ModifyContact(&con, arr);
			break;
		}
		case 5:
		{
			ShowContact(&con);
			break;
		}
		case 6:
		{	
			SortContact(&con);
			break;
		}
		case 0:
		{
			printf("�˳��ɹ�\n");
			break;
		}
		default:
		{
			printf("������������������\n");
		}
		}

	} while (input);
	return 0;
}