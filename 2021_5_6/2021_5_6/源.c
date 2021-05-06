#define _CRT_SECURE_NO_WARNINGS 1
//火柴棍算数
int MatchNumber(int x)
{
	int num = 0;//用来计数的变量 
	int f[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
	while (x / 10 != 0)
	{		
		num = num + f[x % 10];
		x = x / 10;
	}
	num = num + f[x];
	return num;
}
int main()
{
	int a, b, c, m, sum = 0;
	m = 20;//初始火柴数量
	for (a = 0; a < 100; a++)
		for (b = 0; b < 100; b++)
			if (MatchNumber(a) + MatchNumber(b) + MatchNumber(a + b) == m - 4)
			{
				printf("%d+%d=%d\t", a, b, a + b);
				sum++;
			}
	printf("\n一共有 %d 种可能\n",sum);
	return 0;
}