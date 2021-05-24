#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//每个人说了两句话，但是都只有一句话是真的，判断最终正确的名次
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;

	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((a == 3) + (b == 2) == 1) &&//a为3名或者b为5名，  满足其一
							((b == 2) + (e == 4) == 1) &&//同上
							((c == 1) + (d == 2) == 1) &&
							((d == 3) + (c == 5) == 1) &&
							((e == 4) + (a == 1) == 1))
						{
							if (a*b*c*d*e==120)
							printf("a=%d b=%d c=%d d=%d e=%d \n", a, b, c, d, e);
						}
					}
				}
			}
		}
	}
	return 0;
}