#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	while (scanf("%d %d", &m, &n) != EOF)
//	{
//		int count = 1;
//		int sum = 0;
//		int flang =0;
//		for (int i = m; i <= n; i++)
//		{
//			count = 1;
//			sum = 0;
//			int y = m;
//			while (y / 10)
//			{
//				count++;
//				y = y / 10;
//			}
//			y = m;
//			for (int j = 0; j < count; j++)
//			{
//				sum += pow((y % 10), count);
//				y = y / 10;
//			}
//			if (sum == i)
//			{
//				flang =1;
//				printf("%d ", sum);
//			}
//			m++;
//		}
//		if (flang == 0)
//		{
//			printf("no");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 10000; i < 100000; i++)
//	{
//		int count = 0;
//		int sum = 0;
//		int  j = i;
//		while (j / 10)
//		{
//			count++;
//			j /= 10;
//		}
//		j = i;
//		for (int x = 1; x<=count; x++)
//		{
//			sum+=j%pow(10,x)*j/pow(10,x);
//		}
//		if (sum == i)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 10000; i < 100000; i++)
//	{
//		int sum = 0;
//		int j = i;
//		sum = (j / 10000) * (j % 10000)+ 
//			(j / 1000) * (j % 1000) + 
//			(j / 100) * (j % 100) + 
//			(j / 10) * (j % 10);
//		if (sum == i)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}

//void Sort(int arr[]) {
//	for (int i = 0; i < 7; i++) {
//		for (int j = i + 1; j < 7; j++) {
//			if (arr[i] > arr[j]) {
//				int temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[7] = { 0 };
//	while (scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]) != EOF) {
//		int sum = 0;
//		Sort(arr);
//		for (int i = 1; i <= 5; i++) {
//			sum += arr[i];
//		}
//		printf("%.2f\n", (float)sum / 5);
//	}
//	return 0;
//}
//int main()
//{
//	float arr[7] = { 0.0 };
//	float max = 0.0;
//	float min = 100.0;
//	float sum = 0.0;
//	while (1)
//	{
//		for (int i = 0; i < 7; i++)
//		{
//			scanf("%f", &arr[i]);
//			if (arr[i] > max)
//			{
//				max = arr[i];
//			}
//			if (arr[i] < min)
//			{
//				min = arr[i];
//			}
//			sum += arr[i];
//		}
//		sum = (float)(sum - max - min) / 5.0;
//		printf("%.2f", sum);
//		printf("\n");
//		sum = 0.0;
//	}
//	return 0;
//}