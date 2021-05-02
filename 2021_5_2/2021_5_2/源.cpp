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
	printf("请选择\n1:加法  2:减法\n3:乘法  4:除法\n" );
	scanf("%d", &input);
	if (input >= 1 && input <= 4)
	{
		printf("输入操作数:\n");
		scanf("%d%d", &x, &y);
		//函数数组指针的定义
		printf("%d\n", (*p[input])(x, y));
	}
	else if(input == 0)
	{
		printf("退出\n");
	}
	else
	{
		printf("输入错误\n");
	}

	return 0;
}