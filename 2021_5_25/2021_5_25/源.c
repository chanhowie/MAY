#define _CRT_SECURE_NO_WARNINGS 1
//�����ַ���
#include <stdio.h>
#include <string.h>
#include <assert.h>
void change(char arr[],int i)//�������
{
	int len = strlen(arr);
	//
	int x = 0;
	for (x; x < i; x++)
	{
		char tmp = 0;
		int j = 0;

		tmp = arr[0];
		for (j = 1; j < len; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[j - 1] = tmp;
	}
}
void change_1(char arr[], int i)//��������
{
	assert(arr);
	int len = strlen(arr);
	char* mid = arr + i - 1;
	char* end = arr + len-1;
	char* head = arr;
	int j = 0;
	while (head < mid)//ǰ�����
	{
		char tmp = 0;
		tmp = *head;
		*head = *mid;
		*mid = tmp;
		mid--;
		head++;
	}
	mid = arr + i - 1;
	if (mid < end)
		mid++;

	while (mid < end)//�������
	{
		char tmp = 0;
		tmp = *mid;
		*mid = *end;
		*end = tmp;
		mid++;
		end--;
	}
	head = arr;
	end = arr + len - 1;
	while (head< end)//�������
	{
		char tmp = 0;
		tmp = *head;
		*head = *end;
		*end = tmp;
		head++;
		end--;
	}



}
int main()
{
	char arr[] = { "abcdef" };
//	change(arr,5);  
//	change_1(arr, 4);
	printf("%s", arr);
	return 0;
}