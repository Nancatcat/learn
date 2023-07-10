#define _CRT_SECURE_NO_WARNINGS 1
#include"Seqlist.h"
//test.c
void TestSeqList()
{





	SeqList s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	seqlistpushback(&s1, 3);
	seqlistpushback(&s1, 4);
	SeqListPrint(&s1);
	SeqListErase(&s1, 1);
	SeqListPrint(&s1);



	//SeqList s1;
	//SeqListInit(&s1);
	//SeqListPushBack(&s1, 1);
	//SeqListPushBack(&s1, 2);
	//SeqListPushBack(&s1, 3);
	//SeqListPushBack(&s1, 4);
	//SeqListPrint(&s1);
	//SeqListInsert(&s1, 1, 10);
	//SeqListPrint(&s1);





	//SeqListFind(&s1, 4);
	/*SeqListInsert(&s1, 2, 5);
	SeqListPrint(&s1);*/


	//SeqList s1;
	//SeqListInit(&s1);
	//SeqListPushBack(&s1, 1);
	//SeqListPushBack(&s1, 2);
	//SeqListPushBack(&s1, 3);
	//SeqListPushBack(&s1, 4);
	//SeqListPrint(&s1);
	//SeqListPopFront(&s1);
	//SeqListPrint(&s1);
	//SeqListFind(&s1, 4);




	//SeqListPushFront(&s1, 9);
	//SeqListPrint(&s1);
	//SeqListPushFront(&s1, 8);
	//SeqListPushFront(&s1, 7);
	//SeqListPushFront(&s1, 6);
	//SeqListPrint(&s1);
	//SeqListDestory(&s1);



	/*/SeqListPushBack(&s1, 5);
	SeqListPushBack(&s1, 6);
	SeqListPushBack(&s1, 7);
	SeqListPushBack(&s1, 8);
	SeqListPrint(&s1);
	SeqListPushBack(&s1, 9);
	SeqListPushBack(&s1, 10);
	SeqListPrint(&s1);*/
}
int main()
{
	TestSeqList();
	return 0;
}