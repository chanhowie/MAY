#define _CRT_SECURE_NO_WARNINGS 1
//Ä£ÄâÊµÏÖstrncpy
#include <stdio.h>
#include <assert.h>
void mystrncpy( char* arr1, const char* arr2, int k)
{
	assert(arr1);
	assert(arr2);
	int len = strlen(arr2);
	int i = 0;
	for (i; i < k; i++)
	{
		if (i >= len)
		{
			*arr1 = 0;
			arr1++;
		}
		else
		{
			*arr1 = *arr2;
			arr1++;
			arr2++;
		}
	}
}
int main()
{
	char arr1[] = { "abcdefg" };
	char arr2[] = { "123" };
	mystrncpy(arr1, arr2, 2);
	printf("%s\n", arr1);
	return 0;
}