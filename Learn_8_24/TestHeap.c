#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"
int main()
{
	Hp hp;
	HpInit(&hp);
	int a[] = { 65,100,70,32,50,60 };
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
	{
		HpPush(&hp, a[i]);
	}

	// 10:42¼ÌÐø
	while (!HpEmpty(&hp))
	{
		int top = HpTop(&hp);
		printf("%d ", top);
		HpPop(&hp);
	}

	return 0;
}