#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
void SeqListTest()
{
	SeNode* plist = NULL;
	SeqListPushFront(&plist, 5);
	SeqListPushFront(&plist, 4);
	SeqListPushFront(&plist, 3);
	SeqListPushFront(&plist, 2);
	SeqListPushFront(&plist, 1);
	SeqListPushFront(&plist, 0);
	SeqListPrint(plist);
	SeNode* ptr = SeqListFind(plist, 3);
	if (ptr != NULL)
	{
		SeqListEraseAfter(&plist, ptr);
	}
	else
	{
		printf("数据有误\n");
	}
	SeqListPrint(plist);
	/*SeNode* ptr = SeqListFind(plist, 3);
	if (ptr != NULL)
	{
		printf("%p %d", ptr,ptr->data);
	}
	else
	{
		printf("数据有误\n");
	}*/
	//SeqListPopFront(&plist);
	//SeqListPopFront(&plist);
	//SeqListPopFront(&plist);
	//SeqListPopFront(&plist);
	//SeqListPopFront(&plist);
	//SeqListPrint(plist);
	//SeqListPopFront(&plist);
	//SeqListPrint(plist);
	/*SeqListPushBack(&plist, 1);
	SeqListPushBack(&plist, 2);
	SeqListPushBack(&plist, 3);
	SeqListPushBack(&plist, 4);
	SeqListPushBack(&plist, 5);
	SeqListPrint(plist);
	SeqListPopBack(&plist);
	SeqListPrint(plist);
	SeqListPopBack(&plist);
	SeqListPrint(plist);
	SeqListPopBack(&plist);
	SeqListPrint(plist);
	SeqListPopBack(&plist);
	SeqListPrint(plist);
	SeqListPopBack(&plist);
	SeqListPrint(plist);
	SeqListDestroy(&plist);*/

}
int main()
{
	SeqListTest();
	return 0;
}