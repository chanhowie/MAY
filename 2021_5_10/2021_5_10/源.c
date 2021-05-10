#define _CRT_SECURE_NO_WARNINGS 1
//指针复习题
#include <stdio.h>
int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };//指针c保存地址E、N、P、F
	char**cp[] = { c + 3, c + 2, c + 1, c };//cp反向指向*c
	char***cpp = cp;//cpp指向cp的首地址

	printf("%s\n", **++cpp);//cpp自加1 指向cp的第二个元素(c+2)为POINT 
	printf("%s\n", *--*++cpp + 3);//cpp再次加1, 指向cp中第三个元素c+1，解引用以后自减1 此时c+1变为c 指向ENTER，解引用以后+3从第4个元素开始打印字符串   ER
	printf("%s\n", *cpp[-2] + 3);//**(cpp-2)+3，cpp-2指向cp中的首元素解引用再次解引用  指向FIRST  +3为从第4个元素开始打印  ST
	printf("%s\n", cpp[-1][-1] + 1);//*(*(cpp-1)-1)+1, cpp-1指向c+2    c+2-1=c+1指向NEW  最后+1从第2元素开始打印EW


	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
	unsigned long *pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 3) += 3;//将puter首元素+3   找到第4个元素的地址进行解引用   得到9   将9进行+3操作  变为12

	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));  //打印出pulptr中首地址保存的数字，   打印出pulptr中第四个元素保存的地址
	
	return 0;
}
