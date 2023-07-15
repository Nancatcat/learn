#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void Test()
{
	SeqListNode* plist = NULL;
	SeqListNodePushBack(&plist, 1);
	SeqListNodePushBack(&plist, 2);
	SeqListNodePushBack(&plist, 3);
	SeqListNodePopFront(&plist);
	SeqListNodePrint(plist);
}
int main()
{
	Test();
	return 0;
}