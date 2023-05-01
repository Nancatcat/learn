#define _CRT_SECURE_NO_WARNINGS 1                             
#include"GMAE.h"
void menu()//游戏界面
{
	printf("***************************************\n");
	printf("**************  1.PALY   **************\n");
	printf("**************  0.EXIT   **************\n");
	printf("***************************************\n");

}
void Game()
{
	char board[ROW][COL] = { 0 };//创建数组
	InitBoard(board, ROW, COL);//对数组进行初始化
	DisplayBoard(board, ROW, COL);//打印棋盘
	char ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL);//玩家下棋
		DisplayBoard(board, ROW, COL);//打印棋盘
		ret = IsWin(board, ROW, COL);
		if (ret != '/')
			break;
		ComputerMove(board, ROW, COL);//电脑下棋
		DisplayBoard(board, ROW, COL);//打印棋盘
		ret = IsWin(board, ROW, COL);
		if (ret != '/')
			break;
	}
	if (ret == 'o')
		printf("玩家赢\n");
	else if (ret == 'x')
		printf("电脑赢\n");
	else
		printf("平局\n");
}
int main()
{
	int input = 0;//玩家输入
	srand((unsigned int)time(NULL));//定义随机数
	do//控制游戏界面循环
	{
		menu();//游戏界面函数调用
		scanf("%d", &input);
		switch (input)
		{
		case 1://选择1.游玩
		{	Game();
			break;
		}
		case 0:
		{
			printf("退出游戏\n");
			break;//选择0，退出
		}
		default://选择其他数字，重复循环
		{	printf("选择非法，请重新输入\n");
			break;
		}

		}
	} while (input);
		return 0;
}


