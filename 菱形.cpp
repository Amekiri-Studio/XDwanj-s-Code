#include <stdio.h>

int main(void)
{
	int i, j;
	int val;
	
	printf("请输入一个奇数，用于形成菱形："); 
	scanf("%d", &val);
	//正三角 
	for (i=1; i<=val/2; i++)
	{
		for(j=1; j<=(val/2)-i+1; j++)
		{
			printf(" ");
		}
		for (j=1; j<=i*2-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	//倒三角 
	for (i=0; i<val/2+1; i++)
	{
		for (j=0; j<i; j++)
		{
			 printf(" ");
		}
		for (j=0; j<val-2*i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("就尼玛离谱！"); 
	return 0;
}
/*
——————————————————————————————————————————
2020年11月26日 23点19分
结论：囊括一个递增和递减的算法 
—————————————————————————————————————————— 
*/ 
