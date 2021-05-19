#define _CRT_SECURE_NO_WARNINGS 1
//ÕûĞÍÌáÉı
#include <stdio.h>
int main()
{
	unsigned char a = 100;
	//01100100
	//00000000 00000000 00000000 01100100
	unsigned char b = 200;
	//11001000
	//00000000 00000000 00000000 11001000
	unsigned char c = a + b;
	//00000000 00000000 00000001 00101100
	//00101100----44

	printf("%d,%d", a + b, c);
	return 0;
}