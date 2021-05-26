#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
int is_move(char* arr1,char* arr2)
{
	char arr[50] = { 0 };
	strcpy(arr,arr1);//
	int len = strlen(arr1);
	strcpy(arr+len, arr1);//
	//arr//Ϊ
	
	if (strstr(arr, arr2) != 0)
		return 1;
	return 0;
}

int main()
{
	char arr1[] = { "abcdef" };
	char arr2[] = { "cdefab" };
	int ret = is_move(arr1, arr2);

	if (ret==1)
		printf("YES");
	if (ret == 0)
		printf("NO");
	return 0;
}