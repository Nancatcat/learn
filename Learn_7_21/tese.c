#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//int main()
//{
//	int m;
//	while (~scanf("%d", &m)) 
//	{
//		int start = m * (m - 1) + 1;//找到对应m^3的起始奇数
//		char buf[10240] = { 0 };
//		//sprintf(buf, format, ...) 与printf用法类似，格式化字符串但是不用于打印而是放到一个buf中
//		sprintf(buf, "%d", start);//先将起始奇数转换成为字符串存入buf中
//		for (int i = 1; i < m; i++)
//		{
//			//然后将紧随随后的m-1个奇数数字转换为字符串，按照指定格式放入buf中
//			//%s+%d, 要求先有一个字符串，然后是+符号，然后是个数字的格式，对应是buf原先的数据，和奇数
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

