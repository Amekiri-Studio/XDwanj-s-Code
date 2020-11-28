#include <stdio.h>

void swap(int i, int j)//此处只对形参i, j进行了交换，被调函数运行完后此处i, j的内存连同数值就被释放掉了，并没有影响主函数中的a, b变量
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

	 2020年11月28日 23点10分
	 
注意上面这个程序不能用函数进行变量交换
例子_1
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
	//但这个程序可以进行使用函数对两个变量进行交换，原因是这里使用C++中引用的概念（面对对象）
例子_2
(此处运用了C中的指针，做到了交换两个变量的功能)：
	void swap(int * i, int * j)//此处i, j获取了a, b的地址，于是i的内容就是a的地址，j同上
	{
		int t;
		
		//*i就是a，
		//*j就是b，
		//于是交换有效
		
		t = *i; 
		*i = *j;
		*j = t;	

		return;
	} 

	int main(void)
	{
		int a, b;

		a = 3;
		b = 5;

		swap(&a, &b); 

		printf("a = %d, b = %d", a, b);
	} 
	//这里的.c文件就可以成功做到交换变量的功能，因为此处运用了指针的概念（C语言独有）
—————————————————————————————————————————————— 
*/
