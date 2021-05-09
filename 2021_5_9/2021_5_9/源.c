#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *ptr1 = (int *)(&aa + 1);//取aa数组的地址跳过整个数组
	int *ptr2 = (int *)(*(aa + 1));//取出数组中第二个元素(也就是从6开始的地址)在转换为地址
	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));//数组结尾往前一个字节是10      6开始的地址往前一个字节是5
	

	char* a[] = { "work", "at", "alibaba" };//三个常量字符串的首字符的地址存进a中
	char**pa = a;//将三个地址存入二级指针pa中
	pa++;//pa加1   为第二个地址
	printf("%s\n", *pa);//对第二个地址解引用  为at

	return 0;
}