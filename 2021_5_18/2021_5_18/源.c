#define _CRT_SECURE_NO_WARNINGS 1
//���������е���ż��˳�򣬽���������ż����ǰ��
#include <stdio.h>
#include <assert.h>
void solution(int arr[],int sz)
{
	assert(arr);

	int *tail = arr + sz - 1;
	while (arr < tail)
	{
		while (arr<tail&&*arr % 2 != 0)//ָ��ͷ������
			arr++;
		while (tail>arr&&*tail % 2 == 0)//ָ��β��ż��
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