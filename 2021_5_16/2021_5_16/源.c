#define _CRT_SECURE_NO_WARNINGS 1
//给一个薪水的列表, 要求一个cap使得调整过后的薪水总和至少为target.
//cap的定义是：当前薪水小于cap, 则用cap当作新的薪水，否则保持原本的薪水。
#include <stdio.h>
int solution_1(int* arr,int sz,int cap)
{
	int num = 0;
	int bucket[100] = {0};
	int i = 0;
	for (i; i < sz; i++)
	{
			bucket[arr[i]]++;
	}
	i = 0;
	for (i; i < sz; i++)
	{
		if (bucket != 0)
			if (i < cap)
				num +=bucket[i] * cap;		 
			else
				num += bucket[i] * i;			
	}
	
	return num;
}
int main()
{
	int arr[] = { 1, 2, 2, 6, 5, 2, 7, 8, 5, 3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int cap = 6;
//	scanf("%d", &cap);
	//解法1：先排序，再将小于cap的数字全部替换为cap，继而求出总和。
	printf("%d \n", solution_1(arr, sz, cap));
	return 0;
}