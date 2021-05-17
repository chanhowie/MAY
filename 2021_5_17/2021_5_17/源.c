#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char str[100];
	int i, j, n;
	gets(str);
	n = strlen(str);

	for (i = 0, j = n - 1; i < j; i++, j--)
		if (str[i] != str[j])
			break;
	if (i >= j)
		printf("是回文\n");
	else
		printf("不是回文\n");
}