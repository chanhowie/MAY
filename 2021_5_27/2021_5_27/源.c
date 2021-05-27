#define _CRT_SECURE_NO_WARNINGS 1
//Ä£Äâstrcat
#include <stdio.h>
void mystrcat(char* arr1,char* arr2)
{
	int len = strlen(arr2);
	int i = 0;
	while (*arr2)
	{		
		*(arr1+len+i) = *arr2;
		i++;
		arr2++;
	}
	*(arr1 + len + i) = 0;
}
int main()
{
	char arr1[] = { "hello\0           " };
	char arr2[] = { " world" };
	mystrcat(arr1, arr2);
	printf("%s", arr1);
	return 0;
}