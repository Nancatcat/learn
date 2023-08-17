#define _CRT_SECURE_NO_WARNINGS 1
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* detectCycle(struct ListNode* head)
{
    struct ListNode* fast, * slow;
    fast = slow = head;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            struct ListNode* newHead;
            newHead = head;
            while (head != fast)
            {
                head = head->next;
                fast = fast->next;
            }
            return fast;
        }
    }
    return NULL;

}
/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */

struct Node* copyRandomList(struct Node* head)
{
    struct Node* cur = head;
    while (cur)
    {
        struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
        copy->val = cur->val;
        copy->next = cur->next;
        cur->next = copy;
        cur = copy->next;
    }
    cur = head;
    while (cur)
    {
        struct Node* copy = cur->next;
        if (cur->random == NULL)
        {
            copy->random = NULL;
        }
        else
        {
            copy->random = cur->random->next;
        }
        cur = copy->next;
    }
    cur = head;
    struct Node* copyHead = NULL;
    struct Node* copyTail = NULL;
    while (cur)
    {
        struct Node* copy = cur->next;
        struct Node* next = copy->next;
        if (copyTail == NULL)
        {
            copyHead = copyTail = copy;
        }
        else
        {
            copyTail->next = cur->next;
            copyTail = copyTail->next;
        }
        cur->next = next;
        cur = cur->next;
    }
    return copyHead;
}