#include <stdio.h>

void Max(int &a, int &b)	//判断两个数值谁更大，并将更大的数值放在前面 
{
	int t;
	if (a < b)	//判断 
	{
		t = a;
		a = b;
		b = t;
	}
}

int main() //主函数 
{
	while (1)	//人机交互（死循环 XD） 
	{
			int i, j, l;	//定义 
		
		printf("请输入两个数，用以判断其中的最大公约数：");
		scanf("%d %d", &i, &j);
		
		Max(i,j);	//预处理 
		
		while (j != 0)
		{
			l = i%j; 
			i = j;
			j = l;	
		}
		printf("最大公约数为：%d\n", i);	//输出XD 
	}
	
	return 0;
}
