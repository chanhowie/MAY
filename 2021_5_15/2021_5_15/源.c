#define _CRT_SECURE_NO_WARNINGS 1
//喝汽水问题    1瓶1元   2瓶子换1瓶
#include<stdio.h>
int main()
{
	//输入钱的数量
	int money = 1;
	int candrink = money; //这一轮能喝多少瓶
	int bottle=money;//总体喝了多少
	while (candrink/=2)
	{
		bottle += candrink ;
	}
	printf("%d", bottle);
	return 0;

}
