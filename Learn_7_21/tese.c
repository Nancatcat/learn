#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//int main()
//{
//	int m;
//	while (~scanf("%d", &m)) 
//	{
//		int start = m * (m - 1) + 1;//�ҵ���Ӧm^3����ʼ����
//		char buf[10240] = { 0 };
//		//sprintf(buf, format, ...) ��printf�÷����ƣ���ʽ���ַ������ǲ����ڴ�ӡ���Ƿŵ�һ��buf��
//		sprintf(buf, "%d", start);//�Ƚ���ʼ����ת����Ϊ�ַ�������buf��
//		for (int i = 1; i < m; i++)
//		{
//			//Ȼ�󽫽�������m-1����������ת��Ϊ�ַ���������ָ����ʽ����buf��
//			//%s+%d, Ҫ������һ���ַ�����Ȼ����+���ţ�Ȼ���Ǹ����ֵĸ�ʽ����Ӧ��bufԭ�ȵ����ݣ�������
//			sprintf(buf, "%s+%d", buf, start += 2);
//		}
//		printf("%s\n", buf);
//	} 
//		return 0;
//}
#include <stdio.h>
#include <math.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int sum = pow(n, 3);
//    int i = pow(n, 2) -(n - 1);
//    for (int j = 0; j < n; j++)
//    {
//        if (j == n - 1)
//        {
//            printf("%d", i);
//        }
//        else
//            printf("%d+", i);
//        i += 2;
//    }
//    return 0;
//}
//int main()
//{
//	int n = 0;
//	int a = 2;
//	scanf("%d", &n);
//	int sum = a + (n - 1) * 3;
//	printf("%d\n", n * (sum + a) / 2);
//	return 0;
//}

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
bool hasCycle(struct ListNode* head)
{
    struct ListNode* slow, * fast;
    slow = fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }
    retu

