#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//申请空间
	int *p = (int*)malloc(10*sizeof(int));
	//使用空间
	//****
	
	*p = 6666;//内存中p来查看储存内容
	//释放空间
	free(p);
	p = NULL;
	return 0;
}
