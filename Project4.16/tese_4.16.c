#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while((ch = getchar())!=EOF)
//		{
//		putchar(ch);
//		}
//	return 0;
//} 
//
int main()
{
	int x = 0;
	for (x = 0; x < 10; x++)
	{	
		if (x == 5)
	
			continue;
		
		printf("%d ", x);
	}
	return 0;
}