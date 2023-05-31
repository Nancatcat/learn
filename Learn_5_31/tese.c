#define _CRT_SECURE_NO_WARNINGS 1
//×¢ÊÍ
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
//char* My_strstr(const char* arr, const char* arr2)
//{
//    assert(arr && arr2);
//    const char* str = arr;
//    const char* str2 = arr2;
//    const char* p = arr;
//    while (*p)
//    {
//        str = p;
//        str2 = arr2;
//        while (*str != '\0' && *str2 != '\0' && *str == *str2)
//        {
//            str++;
//            str2++;
//        }
//        if (*str2 == '\0')
//        {
//            return (char*)p;
//        }
//        p++;
//    }
//    return NULL;   
//}
//int main()
//{   
//    char arr[] = "yl@bite.com";
//    char arr2[] = "bite";
//    /*char * ret = strstr(arr, arr2);*/
//    char* ret = My_strstr(arr, arr2);
//    if (ret == NULL)
//    {
//        printf("×Ó´®²»´æÔÚ\n");
//    }
//    else
//    {
//        printf("%s\n", ret);
//    }
// 	return 0;
//}
//int main()
//{
//	char arr[] = "ylnancat@163.com";
//	const char* arr2 = "@.";
//	char arr3[30] = { 0 };
//	strcpy(arr3, arr);
//	/*char * ret = strtok(arr3, arr2);
//	printf("%s\n", ret);
//	ret = strtok(NULL, arr2);
//	printf("%s\n", ret);
//	ret = strtok(NULL, arr2);
//	printf("%s\n", ret);*/
//	char* ret = NULL;
//	for (ret = strtok(arr3, arr2); ret != NULL; ret=strtok(NULL, arr2))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}
//int main()
//{
//	FILE* PFILe=fopen("tese.sets", "r");
//	if (PFILe == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[40] = { 0 };
//	memcpy(arr2, arr, 40);
//	for (int i = 0; i <10; i++)
//	{
//		printf("%d\n", arr2[i]);
//	}
//	return 0;
//}