#define _CRT_SECURE_NO_WARNINGS 1
//模拟实现strstr
#include<stdio.h>
#include<assert.h>
#include<string.h>
char* mystrstr(const char* arr1, const char* arr2)
{
	assert(arr1);
	assert(arr2);
	if (*arr2 == 0)
		return(char*) arr1;
	char* p1 = arr1;//用于试图检索
	char* p2 = arr2;
	char* cur = arr1;//用于返回首地址
	while (*cur)
	{
		p1 = cur;
		p2 = (char*)arr2;//p2归位
		while ((*p1 != '\0') && (*p1 == *p2) && (*p2 != '\0'))
		{
			p1++;
			p2++;
		}
		if (*p2 == 0)//成功找到
			return cur;
		if(*p1==0)
			return NULL;
		cur++;//本轮未找到 下一循环
	}
}
int main()
{
	char arr1[] = { "abbbcdexxxxx" };
	char arr2[] = { "bcde" };
	;//find arr2 from arr1
	printf("%s", mystrstr(arr1, arr2));
	return 0;
}