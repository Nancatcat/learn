#define _CRT_SECURE_NO_WARNINGS 1
#include <assert.h>
#include <stdio.h>
//size_t my_strlen(char const* p)
//{
//	assert(p!= NULL);
//	size_t count = 0;
//	while (*p)
//	{
//		p++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";
//	size_t len = my_strlen(arr);
//	printf("%zd\n",len);
//	return 0;
//}
//����һ���������飬ʵ��һ��������

//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�

//����ż��λ������ĺ�벿�֡�

//void Sqort(int arr[], int sz)
//{
//	int *left = arr;
//	int *right = arr+sz - 1;
//	while (left < right)
//	{
//		if (*left% 2 == 1)
//		{
//			left++;
//		}
//		else if (*right% 2 == 0)
//		{
//			right--;
//		}
//		else
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	Sqort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ�X��ͼ����

//int main()
//{
//    int n = 0;
//    int i = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (i==j || j==(n-i-1))
//                {
//                    printf("*"); 
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n - i - 1; j++)
//            {
//                printf("  ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

