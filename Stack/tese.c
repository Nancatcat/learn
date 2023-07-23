#define _CRT_SECURE_NO_WARNINGS 1
//¸´ÔÓÁ´±íÁ·Ï°
//
//struct Node* copyRandomList(struct Node* head)
//{
//    struct Node* cur = head;
//    while (cur)
//    {
//        struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
//        copy->val = cur->val;
//        copy->next = cur->next;
//        cur->next = copy;
//        cur = copy->next;
//    }
//    cur = head;
//    while (cur)
//    {
//        struct Node* copy = cur->next;
//        if (cur->random == NULL)
//        {
//            copy->random = NULL;
//        }
//        else
//        {
//            copy->random = cur->random->next;
//        }
//        cur = copy->next;
//    }
//    cur = head;
//    struct Node* copyHead = NULL;
//    struct Node* copyTail = NULL;
//    while (cur)
//    {
//        struct Node* copy = cur->next;
//        struct Node* next = copy->next;
//        if (copyTail == NULL)
//        {
//            copyHead = copyTail = copy;
//        }
//        else
//        {
//            copyTail->next = cur->next;
//            copyTail = copyTail->next;
//        }
//        cur->next = next;
//        cur = cur->next;
//    }
//    return copyHead;
//}
#include"Stack.h"
void TeseStack()
{
	ST  pst;
	StackInit(&pst);
	StackPush(&pst, 1);
	StackPush(&pst, 2);
	StackPush(&pst, 3);
	StackPush(&pst, 4);
	StackPush(&pst, 5);
	StackPush(&pst, 6);
	while (!StackEmpty(&pst))
	{
		printf("%d ", StackTop(&pst));
		StackPop(&pst);
	}
	StackDestrony(&pst);
}
int main()
{
	TeseStack();
	return 0;
}