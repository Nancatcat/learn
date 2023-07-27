#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"
void StackTest()
{
	St ps;
	StackInit(&ps);
	StackPush(&ps, 1);
	StackPush(&ps, 2);
	StackPush(&ps, 3);
	StackPush(&ps, 4);
	StackPush(&ps, 5);
	while (!StackEmpty(&ps))
	{
		printf("%d ", StackTop(&ps));
		StackPop(&ps);
	}
	StackDestory(&ps);
}
int main()
{
	StackTest();
	return 0;

}