////#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////struct ListNode* removeElements(struct ListNode* head, int val)
////{
////    struct ListNode* cur = head;
////    struct ListNode* tail = NULL;
////    head = tail = (struct ListNode*)malloc(sizeof(struct ListNode));
////    tail->next = NULL;
////    while (cur)
////    {
////        if (cur->val == val)
////        {
////            struct ListNode* del = cur;
////            cur = cur->next;
////            free(del);
////        }
////        else
////        {
////            tail->next = cur;
////            tail = tail->next;
////            cur = cur->next;
////        }
////    }
////    if (tail != NULL)
////        tail->next = NULL;
////    struct ListNode* del = head;
////    head = head->next;
////    free(del);
////    return head;
////}
////
////
/////**
//// * Definition for singly-linked list.
//// * struct ListNode {
//// *     int val;
//// *     struct ListNode *next;
//// * };
//// */
////    struct ListNode* removeElements(struct ListNode* head, int val)
////{
////
////    struct ListNode* tail = NULL;
////    struct ListNode* cur = head;
////    head = NULL;
////    while (cur)
////    {
////        if (cur->val == val)
////        {
////            struct ListNode* del = cur;
////            cur = cur->next;
////            free(del);
////        }
////        else
////        {
////            if (tail == NULL)
////            {
////                tail = head = cur;
////            }
////            else
////            {
////                tail->next = cur;
////                tail = tail->next;
////            }
////            cur = cur->next;
////        }
////    }
////    if (tail)
////    {
////        tail->next = NULL;
////    }
////    return head;
////}
////    struct ListNode* removeElements(struct ListNode* head, int val)
////    {
////        struct ListNode* pevr = NULL;
////        struct ListNode* cur = head;
////        while (cur)
////        {
////            if (cur->val == val)
////            {
////                if (head == cur)
////                {
////                    head = head->next;
////                    free(cur);
////                    cur = head;
////                }
////                else
////                {
////                    struct ListNode* del = cur;
////                    cur = cur->next;
////                    pevr->next = cur;
////                    free(del);
////                }
////            }
////            else
////            {
////                pevr = cur;
////                cur = cur->next;
////            }
////        }
////        return head;
////    }
////struct ListNode* reverseList(struct ListNode* head)
//{
//struct ListNode* n1, * n2, * n3;//n1代表NULL;n2代表尾，n3代表尾的前一个
//if (head == NULL)//如果为空，返回NULL
//{
//    return NULL;
//}
//n1 = NULL;
//n2 = head;
//n3 = head->next;
//while (n2)
//{
//    n2->next = n1;//头插；
//    n1 = n2;
//    n2 = n3;
//    if (n3)//如果n3已经是NULL;就结束循环
//        n3 = n3->next;
//}
//head = n1;
//return head;
//}
//struct ListNode* reverseList(struct ListNode* head)
//{   //头插法
//    struct ListNode* newnode = NULL;//创建尾
//    struct ListNode* cur = head;
//    while (cur)
//    {
//        struct ListNode* next = cur->next;//next永远指向cur的下一个
//        cur->next = newnode;//cur的next反向
//        newnode = cur;//更新newnode
//        cur = next;//更新cur;
//    }
//    head = newnode;//此时newnode为头指针，赋值给head;
//    return  head;
//}
#include<malloc.h>
//struct ListNode
//{
//    int val;
//    struct ListNode* next;
//};
//struct ListNode* middleNode(struct ListNode* head)
//{
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//    while (fast&&fast->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    head = slow;
//    return head;
//}
struct ListNode {
    int val;
    struct ListNode* next;
};

//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k)
//{
//    // write code here
//    struct ListNode* cur = pListHead;
//    struct ListNode* newnode = NULL;
//    int count = 0;
//    while (cur)
//    {
//        struct ListNode* next = cur->next;
//        cur->next = newnode;
//        newnode = cur;
//        cur = next;
//        count++;
//    }
//    if (count < k)
//    {
//        return NULL;
//    }
//    else
//    {
//        for (int i = 0; i < k-1; i++)
//        {
//            newnode = newnode->next;
//        }
//    }
//    struct ListNode* new = newnode;
//    new->next = NULL;
//    return new;
//}
//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k)
//{
//    // write code here
//    struct ListNode* cur = pListHead;
//    struct ListNode* newnode = NULL;
//    int count = 0;
//    while (cur)
//    {
//        struct ListNode* next = cur->next;
//        cur->next = newnode;
//        newnode = cur;
//        cur = next;
//        count++;
//    }
//    if (k>count||k<=0)
//    {
//        return NULL;
//    }
//    while (--k)
//    {
//        newnode = newnode->next;
//    }
//    newnode->next = NULL;
//    return newnode;
//}
//
struct ListNode* FindKthToTail(struct ListNode* pListHead, int k)
{
    // write code here'
    struct ListNode* n1 = pListHead;
    struct ListNode* n2 = pListHead;
    if (k <= 0)
    {
        return NULL;
    }
    int count = 0;
    while (n1)
    {
        n1 = n1->next;
        count++;
    }    
    k = count - k;
    while(k--)
    {
        pListHead = pListHead->next;
    }
    return pListHead;
}
int main()
{
    struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n5 = (struct ListNode*)malloc(sizeof(struct ListNode));
    n1->val = 1;
    n2->val = 2;
    n3->val = 3;
    n4->val = 4;
    n5->val = 5;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;
    int k = 4;
    struct ListNode* n6 = FindKthToTail(n1, k);

    printf("%d", n6->val);
    return 0;
}
