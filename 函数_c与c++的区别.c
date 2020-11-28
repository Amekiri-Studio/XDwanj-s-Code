#include <stdio.h>

void swap(i, j)//此处只对形参i, j进行了交换，被调函数运行完后此处i, j的内存连同数值就被释放掉了，并没有影响主函数中的i, j变量
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
注意上面这个程序不能用函数进行变量交换
例子
（注意这个例子和上面的程序几乎相同，但文件后缀是.cpp）： 
 
	#include <stdio.h>

	int swap(int &i, int &j)//面对对象中的引用概念
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
	//但这个程序可以进行使用函数对两个变量进行交换，原因是这里使用C++中引用的概念
—————————————————————————————————————————————— 
*/
