#define _CRT_SECURE_NO_WARNINGS 1
//关于strlen的各种形式计算
int main()
{

	char arr[] = "abcdef";

	printf("%d\n", strlen(arr));//截止到\0     6
	printf("%d\n", strlen(arr + 0));//首元素地址+0开始    6
//	printf("%d\n", strlen(*arr));//err
//	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));//随机
	printf("%d\n", strlen(&arr[0] + 1));//5


	char arr1[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", strlen(arr1));//截止到\0   随机
	printf("%d\n", strlen(arr1 + 0));//首元素地址+0开始  随机
	//	printf("%d\n", strlen(*arr1));//err
	//	printf("%d\n", strlen(arr1[1]));//err
	printf("%d\n", strlen(&arr1));//随机-6
	printf("%d\n", strlen(&arr1 + 1));//随机
	printf("%d\n", strlen(&arr1[0] + 1));//随机-1

	return 0;
}