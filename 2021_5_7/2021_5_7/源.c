#define _CRT_SECURE_NO_WARNINGS 1
//����strlen�ĸ�����ʽ����
int main()
{

	char arr[] = "abcdef";

	printf("%d\n", strlen(arr));//��ֹ��\0     6
	printf("%d\n", strlen(arr + 0));//��Ԫ�ص�ַ+0��ʼ    6
//	printf("%d\n", strlen(*arr));//err
//	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));//���
	printf("%d\n", strlen(&arr[0] + 1));//5


	char arr1[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", strlen(arr1));//��ֹ��\0   ���
	printf("%d\n", strlen(arr1 + 0));//��Ԫ�ص�ַ+0��ʼ  ���
	//	printf("%d\n", strlen(*arr1));//err
	//	printf("%d\n", strlen(arr1[1]));//err
	printf("%d\n", strlen(&arr1));//���-6
	printf("%d\n", strlen(&arr1 + 1));//���
	printf("%d\n", strlen(&arr1[0] + 1));//���-1

	return 0;
}