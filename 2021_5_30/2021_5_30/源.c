#define _CRT_SECURE_NO_WARNINGS 1
//模拟实现strncat
#include<stdio.h>
#include<string.h>
#include <assert.h>
void mystrncat(char* arr1, const char* arr2, int k)
{
	assert(arr1);
	assert(arr2);
	int len = strlen(arr2);
	if (k > len)
		k = len;
	while (*arr1 != 0)
		arr1++;
	//让arr1指向\0的位置
	int i = 0;
	for (i = 0; i < k; i++,arr1++,arr2++)
		*arr1 = *arr2;
	*arr1 = 0;
}
int main()
{
	char arr1[20] = { "abcdefg" };
	char arr2[] = { "12345" };
	mystrncat(arr1, arr2, 2);
	printf("%s", arr1);
	return 0;
}