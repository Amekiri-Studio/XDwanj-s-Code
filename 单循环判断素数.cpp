#include <stdio.h>
#include <stdlib.h>

bool /*布尔类型，只返回真或者假(只存在于C++语法中，C语言中不存在)*/ IsPrime(int val)// 被调函数 
{
	int i;
		
	for(i=2; i<val; ++i)//将从1到变量本身都取一次余数，若余数为零则中断for循环 
	{
		if (val%i == 0)
			break;
	} 
	if(i == val)//判断得到的数是否等同于输入的变量，并返回真或假 
		return true;//返回真 
	else
		return false;//返回假 
} 

int main()//主调函数 
{
	int val;
	int i;
	do
	{
		printf("请输入一串数字以判断是否为素数:");
		scanf("%d", &val);
			
		if( IsPrime(val) )
			printf("YES!\n");
		else
			printf("NO!\n");
			
	}while(1);	//人机交互，无限循环
	 
} 
/*
——————————————————————————————————————
2020年11月14日 14点50分 
 结论：
 	含有一个进行判断是否为素数的算法
 	
	运用了简单的函数。
	
	简单的了解了一下布尔类型 
	
—————————————————————————————————————— 
*/ 
