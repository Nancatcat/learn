#define _CRT_SECURE_NO_WARNINGS 1                             
#include"GMAE.h"
void menu()//��Ϸ����
{
	printf("***************************************\n");
	printf("**************  1.PALY   **************\n");
	printf("**************  0.EXIT   **************\n");
	printf("***************************************\n");

}
void Game()
{
	char board[ROW][COL] = { 0 };//��������
	InitBoard(board, ROW, COL);//��������г�ʼ��
	DisplayBoard(board, ROW, COL);//��ӡ����
	char ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL);//�������
		DisplayBoard(board, ROW, COL);//��ӡ����
		ret = IsWin(board, ROW, COL);
		if (ret != '/')
			break;
		ComputerMove(board, ROW, COL);//��������
		DisplayBoard(board, ROW, COL);//��ӡ����
		ret = IsWin(board, ROW, COL);
		if (ret != '/')
			break;
	}
	if (ret == 'o')
		printf("���Ӯ\n");
	else if (ret == 'x')
		printf("����Ӯ\n");
	else
		printf("ƽ��\n");
}
int main()
{
	int input = 0;//�������
	srand((unsigned int)time(NULL));//���������
	do//������Ϸ����ѭ��
	{
		menu();//��Ϸ���溯������
		scanf("%d", &input);
		switch (input)
		{
		case 1://ѡ��1.����
		{	Game();
			break;
		}
		case 0:
		{
			printf("�˳���Ϸ\n");
			break;//ѡ��0���˳�
		}
		default://ѡ���������֣��ظ�ѭ��
		{	printf("ѡ��Ƿ�������������\n");
			break;
		}

		}
	} while (input);
		return 0;
}


