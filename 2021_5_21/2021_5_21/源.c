#define _CRT_SECURE_NO_WARNINGS 1
//���ַ���ת��Ϊһ������
//������
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