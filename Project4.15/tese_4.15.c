#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) 
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	int sum = 0;
//	for (m = 3; m <= 100; m++)
//	{
//		
//		if (m % 3 == 0)
//
//			sum++;
//
//			printf("%d ", m);		
//	}
//
//		printf("\n%d\n",sum);
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int big = 0;
//	scanf("%d %d %d", &a, &b, &c);
//		if(a<b)
//		{
//			big = a;
//			a = b;		
//			b = big;
//		}
//		 if (a < c)
//		{
//			 big = a;
//			 a = c;
//			 c = big;
//
//		}
//		 if (b < c)
//		 {
//			 big = b;
//			 b = c;
//			 c = big;
//		 }
//		 
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int n = 0;
//	for (n = 1000; n <= 2000; n++)
//	{
//		if ((n % 4 == 0) && (n / 100 != 0) || (n % 400 == 0))
//			printf("%d ",n);
//	}
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d", &a, &b);
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d\n",b);
	return 0;
}
//#include<math.h>
//int main()
//{
//	int a = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		int c = 1;
//		int b = 0;		
//		for (b = 2; b <= sqrt(a); b++)
//		{
//			if (a % b == 0)
//			{
//				c = 0;
//				break;
//			}
//		}
//		if (c == 1)
//		{
//			printf("%d ", a);
//		}
//	}	
//	return 0;
//}