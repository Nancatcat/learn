#define _CRT_SECURE_NO_WARNINGS 1
#include"Seqlist.h"
void TestSeqListInit()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl,2);
	SeqListPushBack(&sl,3);
	SeqListPushBack(&sl,4);
	SeqListPushBack(&sl,5);
	SeqListPushBack(&sl,6);
	SeqListPushFront(&sl,9);
	print(&sl);
	SeqListPopBack(&sl);
	print(&sl);
}
int main()
{
	TestSeqListInit();
	return 0;
}
