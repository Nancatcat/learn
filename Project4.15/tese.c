#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int ADD(int x, int  y)
//{
//	return(x > y ? x : y);
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int x = ADD(m, n);
//	printf("%d", x);
//	return 0;
//}
//#include <stdio.h>
//////
////int main()
////{   //÷µ
////    
////    int n = 0;
////    // ‰»Î
////    scanf("%d", &n);
////    int m = ((n / 12) * 4) + 2;//≈–∂œ
////    printf("%d", m);//¥Ú”°
////    return 0;
////}
////int main()
////{
////	int a = 0;
////
////	a = printf("Hello world!");
////	printf("\n%d", a);
////
////	return 0;
////}
////
////
////#include <stdio.h>
////int main()
////{
////    int a = 0;
////    int b = 0;
////    int c = 0;
////
////    while (scanf("%d %d %d", &a, &b, &c) != EOF)
////    {
////        if (a + b > c && a + c > b && b + c > a)
////        {
////            if (a == b && b == c)
////            {
////                printf("Equilateral triangle!\n");
////            }
////            else if (a == b || b == c || a == c)
////            {
////                printf("Isosceles triangle!\n");
////            }
////            else
////            {
////                printf("Ordinary triangle!\n");
////            }
////        }
////        else
////        {
////            printf("Not a triangle!\n");
////        }
////    }
////    return 0;
////}
////
////
////
//

//int main()
//{
//    float a; float b;
//    scanf("%f %f", &a, &b);
//	float c = a /((b / 100) *(b / 100));
//
//	printf("%.2f",c);
//
//	return 0;
//}
//
//int main()
//{
//	int agr = 0;
//	int n = 0;
//	int c
//
//	return 0;
//}

#include <stdio.h>

int main() 
{
    int age;
    while (scanf("%d", &age) != EOF) 
    {
        printf("%lld", age * (long long)3.156e7);
    }
    return 0;
}
