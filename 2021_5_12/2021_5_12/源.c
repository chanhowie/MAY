#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<assert.h>
void reverse(char* str)
{
	assert(str);//�ж��Ƿ�Ϊ��ָ��
	int len = strlen(str);

	char* left = str;
	char* right = str + len - 1;

	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[256] = { 0 };
	//scanf("%s", arr);   //�ܶ�ȡһ���ַ������������ո�ͻ�ֹͣ
	gets(arr);//��ȡһ����
	reverse(arr);

	printf("%s\n", arr);//



	int a = 0;
	int n = 0;
	scanf("%d%d", &a, &n);
	int sum = 0;
	int i = 0;
	int ret = 0;
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		printf("%d", ret);
		sum += ret;
		if(i+1 < n)
			printf(" + ");
		else
			printf(" = %d\n", sum);

	}
	return 0;
}


