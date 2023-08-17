#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct ListNode* removeElements(struct ListNode* head, int val)
{
    struct ListNode* pevr = NULL;
    struct ListNode* cur = head;
    while (cur)
    {
        if (cur->val == val)
        {
            if (head == cur)
            {
                head = head->next;
                free(cur);
                cur = head;
            }
            else
            {
                struct ListNode* del = cur;
                cur = cur->next;
                pevr->next = cur;
                free(del);
            }
        }
        else
        {
            pevr = cur;
            cur = cur->next;
        }
    }
    return head;
}

struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* newHead = NULL;
    struct ListNode* cur = head;
    while (cur)
    {
        struct ListNode* next = cur->next;
        cur->next = newHead;
        newHead = cur;
        cur = next;
    }
    head = newHead;
    return head;
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;
    struct ListNode* head, * tail;
    head = tail = NULL;
    while (list1 && list2)
    {
        if (list1->val > list2->val)
        {
            if (tail == NULL)
            {
                head = tail = list2;
            }
            else
            {
                tail->next = list2;
                tail = tail->next;
            }
            list2 = list2->next;
        }
        else
        {
            if (tail == NULL)
            {
                head = tail = list1;
            }
            else
            {
                tail->next = list1;
                tail = tail->next;
            }
            list1 = list1->next;
        }
    }
    if (list1)
    {
        tail->next = list1;
    }
    if (list2)
    {
        tail->next = list2;
    }
    return head;
}
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    struct ListNode* head, * tail; (struct ListNode*)malloc(sizeof(struct ListNode));
    head = tail = (struct ListNode*)malloc(sizeof(struct ListNode));
    tail->next = NULL;
    while (list1 && list2)
    {
        if (list1->val > list2->val)
        {
            tail->next = list2;
            tail = tail->next;
            list2 = list2->next;
        }
        else
        {
            tail->next = list1;
            tail = tail->next;
            list1 = list1->next;
        }
    }
    if (list1)
    {
        tail->next = list1;
    }
    if (list2)
    {
        tail->next = list2;
    }
    struct ListNode* del = head;
    head = head->next;
    free(del);
    return head;

}

struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
    if (headA == NULL || headB == NULL)
    {
        return NULL;
    }
    struct ListNode* wind = headA, * Moon = headB;
    while (wind != Moon)
    {
        wind = wind == NULL ? headB : wind->next;
        Moon = Moon == NULL ? headA : Moon->next;
    }
    return wind;
}