#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void sort(int * p, int len)//排序的函数 
{
	int i, j;
	int t;
	
	for (i=1; i<len; i++)
	{
		t = p[i];//用来装那个用来插入的数值 
		j = i - 1;
		
		while ( (j>=0) && ( p[j]>t ) )//将数组向右挪 
		{
			p[j+1] = p[j];
			j--; 
		}
		
		p[j+1] = t;//插入步骤 
	}
}

int main(void)
{
	int val;
	int i, j;
	//int arr[val];
	int * arr;
	
	printf("请输入一个数来确定你要排序的数目：");
	scanf("%d", &val);//用户自定义一段数组长度 
	
	//int arr[val];
	arr = (int *)malloc(int (val*4));//初始化一个数组arr 
	
	for (i=0; i<val; i++)
		scanf("%d", &arr[i]);
		
	sort(arr, val);//向sort函数传递数组的地址和长度 
	
	for (i=0; i<val; i++)//输出 
		printf("%d ", arr[i]);
	printf("\n");
		
	system("pause");//暂留终端 
	
	return 0;
}
/*
______________________________________
2020年12月10日	10:22:50 
结论：
	1_用指针在函数中传递地址，来进行排序 
	2_有利用动态内存进行定义一段数组
	3_利用插入排序的算法 
______________________________________
*/
