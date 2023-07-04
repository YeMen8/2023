#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//
//	}
//	printf("max=%d\n", max);
//	return 0 ;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i< 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	float sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum = sum + arr[i];
//
//	}
//	printf("%lf\n", sum/10);
//	return 0;
////}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ",*p);
		*p++;

	}
	return 0 ;
}