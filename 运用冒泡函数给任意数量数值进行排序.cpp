#include <stdio.h>

int swap(int &i, int &j)//对两个数进行交换位置的函数 
{
	int t;//交换参数 
	
	t = i;
	i = j;
	j = t;
}

int main()//主函数 
{
	do{
		int a[10];//对10个数进行定义 
		int i, j;
		int num;
		
		printf("您想输入多少个数值:");
		scanf("%d", &num);
		
		printf("请输入%d个数并用空格隔开：", num);
		for(i=0; i<num; i++)//复杂版的scanf	XD 
		{
			scanf("%d",&a[i]);
		}		
	
		for(i=0; i<num; i++)//进行冒泡排序的基数 
			for(j=0; j<(num - 1); j++)//对判断交换的变量进行"向右平移" 
				if(a[j] > a[j+1])//判断 
					swap(a[j], a[j+1]);//交换 
		
	
		for(i=0; i<num; i++)//复杂版printf	   XD 
		{
			printf("%d ",a[i]);
		}
		//from Amekiri
		char ct;
		printf("\n您是否还要继续？(Y/N)");
		ct = getchar();
		if(ct == 'y' || ct == 'Y');
		else if(ct == 'n' || ct == 'N')
			break;
	}while(1);
	return 0;				 
} 
