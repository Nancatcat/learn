#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//struct ListNode 
//{	int val;
//	struct ListNode* next;
//};
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//    struct ListNode* cur = head;//判断条件
//    struct ListNode* phead = NULL;
//    while (cur)//如果不为NULL则继续
//    {
//        if (cur->val == val)//如果是头删
//        {
//            if (cur == head)
//            {
//                head = head->next;
//                free(cur);
//                cur = head;
//            }
//            else//正常删除
//            {
//                phead->next = cur->next;
//                free(cur);
//                cur = phead->next;
//            }
//        }
//        else//如果不相等各走异步
//        {
//            phead = cur;
//            cur = cur->next;
//        }
//
//    }
//    return head;
//}
//int main()
//{
//	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    assert(n1);
//	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    assert(n2);
//
//	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    assert(n3);
//
//	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    assert(n4);
//
//	struct ListNode* n5 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    assert(n5);
//
//	struct ListNode* n6 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    assert(n6);
//
//	struct ListNode* n7 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    assert(n7);
//
//	n1->val = 1;
//	n2->val = 2;
//	n3->val = 1;
//	n4->val = 1;
//	n5->val = 1;
//	n6->val = 1;
//	n7->val = 1;
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = n4;
//	n4->next = n5;
//	n5->next = n6;
//	n6->next = n7;
//	n7->next = NULL;
//    struct ListNode* head= removeElements(n1,2);
//    printf("%d",head);
//	return 0;
//}
#include"SeqList.h"
void Test()
{
	SL s1;
	SLInit(&s1);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPushBack(&s1, 5);
	SLPushBack(&s1, 6);
	SLprint(&s1);
	SLModify(&s1, 3);
	SLprint(&s1);

}
int main()
{
	Test();
	return 0;
}