#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int ADD(int x, int y)
{
	return x + y;
}
int SUB(int x, int y)
{
	return x - y;
}
int MUL(int x, int y)
{
	return x *y;
}
int DIV(int x, int y)
{
	return x / y;
}
int main()
{
	int input = 0;
	int x = 0, y = 0;
	int(*p[5])(int x, int y) = { 0, ADD, SUB, MUL, DIV };
	printf("��ѡ��\n1:�ӷ�  2:����\n3:�˷�  4:����\n" );
	scanf("%d", &input);
	if (input >= 1 && input <= 4)
	{
		printf("���������:\n");
		scanf("%d%d", &x, &y);
		//��������ָ��Ķ���
		printf("%d\n", (*p[input])(x, y));
	}
	else if(input == 0)
	{
		printf("�˳�\n");
	}
	else
	{
		printf("�������\n");
	}

	return 0;
}