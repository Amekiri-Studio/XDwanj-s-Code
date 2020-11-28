#include <stdio.h>

void swap(i, j)
{
	int t;
	
	t = i; 
	i = j;
	j = t;	
	
	return;
} 

int main(void)
{
	int a, b;
	
	a = 3;
	b = 5;
	
	swap(a, b); 
	
	printf("a = %d, b = %d", a, b);
} 
/*
——————————————————————————————————————————————
注意这个程序不能用函数进行变量交换
例子
（注意这个例子和上面的程序几乎相同，但文件后缀是.cpp）： 
 
	#include <stdio.h>

	int swap(int &i, int &j)
	{
		int t;
		
		t = i; 
		i = j;
		j = t;	
	} 
	
	int main(void)
	{
		int a, b;
		
		a = 3;
		b = 5;
		
		swap(a, b); 
		
		printf("a = %d, b = %d", a, b);
	} 
	//但这个程序可以进行使用函数对两个变量进行交换 
—————————————————————————————————————————————— 
*/
