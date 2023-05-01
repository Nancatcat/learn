#define _CRT_SECURE_NO_WARNINGS 1
#include"GMAE.h"

void InitBoard(char board[ROW][COL], int row, int col)//初始化函数
{
	int i = 0;
	for (i = 0; i < row; i++)//控制行循环
	{
		int j = 0;
		for (j = 0; j < col; j++)//控制列循环
		{
			board[i][j] = ' ';//初始化为空格
		}
		
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)//打印棋盘
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j<col-1)
			printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{	
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
		
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋\n");
	while (1)
	{
		printf("请输入坐标，完成下棋操作>");
		scanf("%d %d", &x, &y);//玩家输入坐标
		if (x<=row&&x>=1&&y<=col&&y>=1)//玩家不会知道二维数组的定义，所以为了玩家体验将玩家输入的下标减一
		{
			if (board[x-1][y-1] == ' ')//当坐标不为空格是，输入棋子
			{
				board[x-1][y-1] = 'o';
				break;
			}
			else
			{
				printf("该位置已被占用\n");//当坐标被占用时，重新输入
			}
		}

		else
		{
			printf("输入错误，请重新输入\n");//当坐标输入错误时，重新输入
		}

	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = rand() %row;//定义一个随机数让电脑下棋
	int y = rand() %col;
	printf("电脑下棋\n");
	while (1)
	{
		if (board[x][y] == ' ')//当坐标不为空格是，输入棋子，直到完成下棋操作结束循环
		{
			board[x][y] = 'x';
			break;
		}
	}
}
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char IsWin(char board[ROW][COL], int row, int col)
{
	
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	if (IsFull(board, row, col) == 1)
	{
		return '*';
	}
	return '/';

}

