#define _CRT_SECURE_NO_WARNINGS 1
//ָ�븴ϰ��
#include <stdio.h>
int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };//ָ��c�����ַE��N��P��F
	char**cp[] = { c + 3, c + 2, c + 1, c };//cp����ָ��*c
	char***cpp = cp;//cppָ��cp���׵�ַ

	printf("%s\n", **++cpp);//cpp�Լ�1 ָ��cp�ĵڶ���Ԫ��(c+2)ΪPOINT 
	printf("%s\n", *--*++cpp + 3);//cpp�ٴμ�1, ָ��cp�е�����Ԫ��c+1���������Ժ��Լ�1 ��ʱc+1��Ϊc ָ��ENTER���������Ժ�+3�ӵ�4��Ԫ�ؿ�ʼ��ӡ�ַ���   ER
	printf("%s\n", *cpp[-2] + 3);//**(cpp-2)+3��cpp-2ָ��cp�е���Ԫ�ؽ������ٴν�����  ָ��FIRST  +3Ϊ�ӵ�4��Ԫ�ؿ�ʼ��ӡ  ST
	printf("%s\n", cpp[-1][-1] + 1);//*(*(cpp-1)-1)+1, cpp-1ָ��c+2    c+2-1=c+1ָ��NEW  ���+1�ӵ�2Ԫ�ؿ�ʼ��ӡEW


	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
	unsigned long *pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 3) += 3;//��puter��Ԫ��+3   �ҵ���4��Ԫ�صĵ�ַ���н�����   �õ�9   ��9����+3����  ��Ϊ12

	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));  //��ӡ��pulptr���׵�ַ��������֣�   ��ӡ��pulptr�е��ĸ�Ԫ�ر���ĵ�ַ
	
	return 0;
}
