#include <stdio.h>

int main(void)
{
	int i, j;
	int val;
	int num;
	
	scanf("%d", &val);
	//������ 
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

	//������ 
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
	printf("���������ף�"); 
	return 0;
}
