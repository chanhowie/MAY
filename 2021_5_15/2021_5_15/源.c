#define _CRT_SECURE_NO_WARNINGS 1
//����ˮ����    1ƿ1Ԫ   2ƿ�ӻ�1ƿ
#include<stdio.h>
int main()
{
	//����Ǯ������
	int money = 1;
	int candrink = money; //��һ���ܺȶ���ƿ
	int bottle=money;//������˶���
	while (candrink/=2)
	{
		bottle += candrink ;
	}
	printf("%d", bottle);
	return 0;

}
