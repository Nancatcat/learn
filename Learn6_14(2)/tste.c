#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void menu()
{
	printf(" ********************************************\n");
	printf("******1.Add(增加)            2.Del(删除)******\n");
	printf("******3.Search(查找）        4.Modify(修改)***\n");
	printf("******5.Show(显示)           6.Sort(排序)*****\n");
	printf(" ****************   0.Exit  *****************\n");

}
int main()
{
	int input = 0;
	Contact con;//存放人数信息
	InitContact(&con);//初始化通讯录
	do
	{	
		menu();
		scanf("%d", &input);
		switch(input)
		{
		case ADD:
		{	
			AddContact(&con);//增加通讯录
			break;
		}
		case DEL:
		{	
			DelContact(&con);//删除通讯录
			break;
		}
		case SEARCH:
		{	printf("请输入要查找的对象\n");
			char arr[] = { 0 };
			scanf("%s", arr);
			SearchContact(&con,arr);
			break;
		}
		case MODIFY:
		{	printf("请输入要修改的对象\n");
			char arr[] = { 0 };
			scanf("%s", arr);
			ModifyContact(&con, arr);
			break;
		}
		case SHOW:
		{
			ShowContact(&con);
			break;
		}
		case SORT:
		{	
			SortContact(&con);
			break;
		}
		case 0:
		{	
			SaveContact(&con);//保存通讯录
			DestroyContact(&con);//释放空间
			printf("退出成功\n");
			break;
		}
		default:
		{
			printf("输入有误，请重新输入\n");
		}
		}

	} while (input);
	return 0;
}