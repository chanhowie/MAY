#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *ptr1 = (int *)(&aa + 1);//ȡaa����ĵ�ַ������������
	int *ptr2 = (int *)(*(aa + 1));//ȡ�������еڶ���Ԫ��(Ҳ���Ǵ�6��ʼ�ĵ�ַ)��ת��Ϊ��ַ
	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));//�����β��ǰһ���ֽ���10      6��ʼ�ĵ�ַ��ǰһ���ֽ���5
	

	char* a[] = { "work", "at", "alibaba" };//���������ַ��������ַ��ĵ�ַ���a��
	char**pa = a;//��������ַ�������ָ��pa��
	pa++;//pa��1   Ϊ�ڶ�����ַ
	printf("%s\n", *pa);//�Եڶ�����ַ������  Ϊat

	return 0;
}