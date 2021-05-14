#define _CRT_SECURE_NO_WARNINGS 1
//水仙花数
#include<stdio.h>
#include<math.h>
int main()
{
	//  算出他的位数
	//取出每一位
	//计算出每位的幂次方相加是否等于本身

	int i = 0;
	for (i; i < 100000; i++)
	{
		//123
		int tmp = i;
		int n = 1;//位数
		while (tmp/=10)
		{
			n++;
		}
		int sum = 0;
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		if (i == sum)
			printf("%d ", sum);
	}

	return 0;
}