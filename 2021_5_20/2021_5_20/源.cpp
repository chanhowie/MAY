#define _CRT_SECURE_NO_WARNINGS 1
//Ñî»ÔÈý½ÇÐÎ
#include<stdio.h>
int main()
{
	int arr[8][8] = { 0 };
	int i = 0, j = 0;
	for (j=0; j<8; j++)
	{
		for (i=0; i<8; i++)
		{
			if (i == 0)
				arr[j][i] = 1;
			if (i == j)
				arr[j][i] = 1;
			if (i > 0 && j>1)
				arr[j][i] = arr[j - 1][i - 1] + arr[j - 1][i];
		}
	}
	i = 0;
	for (j = 0; j<8; j++)
	{
		for (i; 8-i>=0; i++)
		{
			printf("  ");
		}
		
		for (i = 0; i<=j; i++)
		{
			printf("%d   ", arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}