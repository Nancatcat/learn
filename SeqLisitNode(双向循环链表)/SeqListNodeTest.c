#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqListNode.h"
void SeqListNodeTest()
{
	LNode* plist =ListNodeCreate();
	//ListNodePushBack(plist, 1);
	//ListNodePushBack(plist, 2);
	//ListNodePushBack(plist, 3);
	//ListNodePushBack(plist, 4);
	//ListNodePushBack(plist, 5);
	//ListNodePrint(plist);
	//ListNodePopBack(plist);
	//ListNodePopBack(plist);
	//ListNodePopBack(plist);
	//ListNodePopBack(plist);

	ListNodePushFront(plist, 5);
	ListNodePushFront(plist, 4);
	ListNodePushFront(plist, 3);
	ListNodePushFront(plist, 2);
	ListNodePushFront(plist, 1);
	ListNodePushFront(plist, 0);
	ListNodePrint(plist);

	/*LNode* ptr = ListNodeFind(plist,4);
	if (ptr != NULL)
	{
		ListNodeErase(ptr);
	}
	ListNodePrint(plist);*/
	ListNodePopFront(plist);
	ListNodePopFront(plist);
	ListNodePopFront(plist);
	ListNodePopFront(plist);
	ListNodePopFront(plist);
	ListNodePrint(plist);
	ListNodeDestroy(plist);
}
int main()
{
	SeqListNodeTest();
	return 0;
}