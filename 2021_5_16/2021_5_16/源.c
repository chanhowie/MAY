#define _CRT_SECURE_NO_WARNINGS 1
//��һ��нˮ���б�, Ҫ��һ��capʹ�õ��������нˮ�ܺ�����Ϊtarget.
//cap�Ķ����ǣ���ǰнˮС��cap, ����cap�����µ�нˮ�����򱣳�ԭ����нˮ��
#include <stdio.h>
int solution_1(int* arr,int sz,int cap)
{
	int num = 0;
	int bucket[100] = {0};
	int i = 0;
	for (i; i < sz; i++)
	{
			bucket[arr[i]]++;
	}
	i = 0;
	for (i; i < sz; i++)
	{
		if (bucket != 0)
			if (i < cap)
				num +=bucket[i] * cap;		 
			else
				num += bucket[i] * i;			
	}
	
	return num;
}
int main()
{
	int arr[] = { 1, 2, 2, 6, 5, 2, 7, 8, 5, 3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int cap = 6;
//	scanf("%d", &cap);
	//�ⷨ1���������ٽ�С��cap������ȫ���滻Ϊcap���̶�����ܺ͡�
	printf("%d \n", solution_1(arr, sz, cap));
	return 0;
}