#define _CRT_SECURE_NO_WARNINGS 1
//使用qsort
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int arr_sort(const void* e1,const void* e2)
{
	return *(int*)e1 - *(int*)e2;//前一个数-后一个数的
}
int float_sort(const void* e1, const void* e2)
{
	if (*(float*)e1 > *(float*)e2)
		return 1;
	else if (*(float*)e1 == *(float*)e2)
		return 0;
	else
		return -1;
}
void test1()
{
	int arr[] = { 2, 4, 6, 8, 1, 3, 5, 7, 9, 3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), arr_sort);
	int i = 0;
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
}
void test2()
{
	float arr[] = { 5.5, 6.6, 8.8, 1.1, 2.2, 4.4, 3.3, 7.7, 9.9, 0.0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), float_sort);
	int i = 0;
	for (i = 0; i < sz; i++)
		printf("%f ", arr[i]);
}
//void test3()
//{
//	struct student wang = {"wangwei",001};
//	struct student li = { "lisong", 003 };
//	struct student z = { "zhangli", 002 };
//	int sz = sizeof(struct student0)
//}
struct student
{
	char name[20];
	int ID;
};
int main()
{
	test1();//数组排序
	printf("\n");
	test2();//浮点数组排序
	printf("\n");
	//test3();//结构体排序
	//return 0;
}