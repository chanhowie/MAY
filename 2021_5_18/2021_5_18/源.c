#define _CRT_SECURE_NO_WARNINGS 1
//调整数组中的奇偶数顺序，将奇数放在偶数的前面
#include <stdio.h>
#include <assert.h>
void solution(int arr[],int sz)
{
	assert(arr);

	int *tail = arr + sz - 1;
	while (arr < tail)
	{
		while (arr<tail&&*arr % 2 != 0)//指针头是奇数
			arr++;
		while (tail>arr&&*tail % 2 == 0)//指针尾是偶数
			tail--;

		if (arr < tail)
		{
			int tmp = *arr;
			*arr = *tail;
			*tail = tmp;
		}
	}


}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	solution(arr, sz);
	return 0;
}