#define _CRT_SECURE_NO_WARNINGS 1
//ˮ�ɻ���
#include<stdio.h>
#include<math.h>
int main()
{
	//  �������λ��
	//ȡ��ÿһλ
	//�����ÿλ���ݴη�����Ƿ���ڱ���

	int i = 0;
	for (i; i < 100000; i++)
	{
		//123
		int tmp = i;
		int n = 1;//λ��
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