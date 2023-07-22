#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqListNode.h"
void test()
{
	LNode*plist = ListNodeInit();
	/*ListNodePushBack(plist, 1);
	ListNodePushBack(plist, 2);
	ListNodePushBack(plist, 3);
	ListNodePushBack(plist, 4);
	ListNodePushBack(plist, 5);*/
	//ListNodePrint(plist);
	//ListNodePopBack(plist);
	//ListNodePopBack(plist);
	//ListNodePopBack(plist);
	//ListNodePopBack(plist);
	//ListNodePopBack(plist);
	//ListNodePopBack(plist);
	/*ListNodePopFront(plist);
	ListNodePopFront(plist);
	ListNodePopFront(plist);
	ListNodePopFront(plist);
	ListNodePopFront(plist);
	ListNodePopFront(plist);
	ListNodePrint(plist); */
	/*LNode* ptr = ListNodeFrind(plist, 6);
	if (ptr == NULL)
	{
		printf("≤È’“ ß∞‹\n");
	}
	else
	{
		printf("%d", ptr->data);
	}
	*/
	
	//ListNodePushFront(plist, 1);
	///*ListNodePushFront(plist, 2);
	//ListNodePushFront(plist, 3);
	//ListNodePushFront(plist, 4);
	//ListNodePushFront(plist, 5);
	//ListNodePushFront(plist, 6);*/
	//ListNodePrint(plist);
	/*LNode* ptr = ListNodeFrind(plist, 1);
	if (ptr == NULL)
	{
		printf("≤Â»Î ß∞‹\n");

	}
	else
	{
		ListNodeInsert(ptr, 10);
		ListNodeInsert(ptr, 9);
		ListNodeInsert(ptr, 8);
		ListNodeInsert(ptr, 6);
		ListNodeInsert(ptr, 5);
		ListNodeInsert(ptr, 4);
		printf("≤Â»Î≥…π¶\n");
	}*/
	//ListNodePushFront(plist, 1);
	//ListNodePushFront(plist, 2);
	//ListNodePushFront(plist, 3);
	//ListNodePushFront(plist, 4);
	//ListNodePushFront(plist, 5);
	//ListNodePushFront(plist, 6);
	///*ListNodePushBack(plist, 2);
	//ListNodePushBack(plist, 3);
	//ListNodePushBack(plist, 4);
	//ListNodePushBack(plist, 5); */
	//ListNodePrint(plist);
	//ListNodePopBack(plist);
	//ListNodePopBack(plist);
	//ListNodePopBack(plist);
	//ListNodePopBack(plist);
	//ListNodePopBack(plist);
	//ListNodePopBack(plist);
	ListNodePushFront(plist, 1);
	ListNodePushFront(plist, 2);
	/*ListNodePushFront(plist, 3);
	ListNodePushFront(plist, 4);
	ListNodePushFront(plist, 5);
	ListNodePushFront(plist, 6);
	ListNodePopFront(plist); 
	ListNodePopFront(plist);*/
	LNode* pos = ListNodeFrind(plist,2);
	if (pos == NULL)
	{
		printf("…æ≥˝ ß∞‹\n");
	}
	else
	{
		ListNodeErase(pos);
	}
	ListNodePrint(plist);

	
	

}
int main()
{
	test();
	return 0;
}
