#define _CRT_SECURE_NO_WARNINGS 1
//Ä£ÄâÊµÏÖstrcmp
#include<assert.h>
int mystrcmp(const char* arr1,const char* arr2)
{
	assert(arr1);
	assert(arr2);
	while (1)
	{
		if (*arr1 - *arr2 > 0)
			return 1;
		else if (*arr1 - *arr2 == 0)
		{
			arr1++;
			arr2++;
		}
		else
			return -1;
		if (*arr1 == *arr2 &&*arr1== 0)
			return 0;
	}
}
int main()
{
	char arr1[] = { "abcd1" };
	char arr2[] = { "abcd" };
	int ret = mystrcmp(arr1, arr2);
	return 0;
}