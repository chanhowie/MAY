#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//����ռ�
	int *p = (int*)malloc(10*sizeof(int));
	//ʹ�ÿռ�
	//****
	
	*p = 6666;//�ڴ���p���鿴��������
	//�ͷſռ�
	free(p);
	p = NULL;
	return 0;
}
