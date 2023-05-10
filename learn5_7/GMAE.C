#define _CRT_SECURE_NO_WARNINGS 1
#include"GMAE.h"

void InitBoard(char board[ROW][COL], int row, int col)//��ʼ������
{
	int i = 0;
	for (i = 0; i < row; i++)//������ѭ��
	{
		int j = 0;
		for (j = 0; j < col; j++)//������ѭ��
		{
			board[i][j] = ' ';//��ʼ��Ϊ�ո�
		}
		
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)//��ӡ����
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
	printf("�������\n");
	while (1)
	{
		printf("���������꣬����������>");
		scanf("%d %d", &x, &y);//�����������
		if (x<=row&&x>=1&&y<=col&&y>=1)//��Ҳ���֪����ά����Ķ��壬����Ϊ��������齫���������±��һ
		{
			if (board[x-1][y-1] == ' ')//�����겻Ϊ�ո��ǣ���������
			{
				board[x-1][y-1] = 'o';
				break;
			}
			else
			{
				printf("��λ���ѱ�ռ��\n");//�����걻ռ��ʱ����������
			}
		}

		else
		{
			printf("�����������������\n");//�������������ʱ����������
		}

	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = rand() %row;//����һ��������õ�������
	int y = rand() %col;
	printf("��������\n");
	while (1)
	{
		if (board[x][y] == ' ')//�����겻Ϊ�ո��ǣ��������ӣ�ֱ����������������ѭ��
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
