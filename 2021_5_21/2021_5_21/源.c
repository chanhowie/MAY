#define _CRT_SECURE_NO_WARNINGS 1
//将字符串转换为一个整数
//待完善
int StrToInt(char* string)
{
	int number = 0;
	while (*string != 0){
		number = number * 10 + *string - '0';
		++string;
	}
	return number;
}

int main()
{
	char arr[] = { "q123456" };
	int num=StrToInt(arr);
	printf("num=%d", num);
	return 0;
}