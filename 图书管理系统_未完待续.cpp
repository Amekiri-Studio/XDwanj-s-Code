//图书管理系统
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

//出版日期 
struct format_date
{
	char year[100];//年 
	char month[100];//月 
	char day[100];//日 
};

//书相关结构体内容 
struct book
{
	char ID[100];//书本编号 
	char name[100]; //书本名字 
	struct format_date date;//出版日期 
};

void Input(struct book * books, int number);//输入函数 
bool pthread_exit(struct book * books, int i);//判断函数 
void resets(struct book * books, int i);//处理用户输入的垃圾值 

//主函数 默认上限1000本书  
int main(void)
{
	int val = 1000;//书的个数 
	int i, j;//循环因子
	char ch_temp[100]; 
	int num_input = 0;
	
	struct book * books = (struct book *)malloc(sizeof(struct book)*val);//定义val个 book 结构体 
	
	printf("欢迎使用图书管理系统！(上限1000本)\n\n"); 
	do
	{
		for (; num_input<val; num_input++) 
		{
			Input(&books[num_input], num_input);
			
			if (pthread_exit(&books[num_input], num_input) )
				break;
		}
		
		printf("恭喜您已经把数据输入进图书数据库!\n"); 
		system("pause");

		printf("请问是调用数据（任意字符）还是继续输入数据（输入）：");
 	}while(strcmp(gets(ch_temp), "输入") == 0); 
 	
 	
 	
	return 0;
}

void Input(struct book * books, int number)//输入模块 
{
	
	printf("请输入第%d本书的编号:", number+1);
	gets(books[number].ID);
	
	printf("请输入第%d本书的名字:", number+1);
	gets(books[number].name);
	
	printf("请输入第%d本书的年:", number+1);
	gets(books[number].date.year);
	printf("请输入第%d本书的月:", number+1);
	gets(books[number].date.month); 
	printf("请输入第%d本书的日:", number+1);
	gets(books[number].date.day);
	printf("输入小写 no 退出输入！\n");
	
	printf("\n");
}

bool pthread_exit(struct book * books, int i)//判断函数
{
	if (
			strcmp(books[i].date.year, "no") == 0 || 
			strcmp(books[i].date.month, "no") == 0 || 
			strcmp(books[i].date.day, "no") == 0 || 
			strcmp(books[i].ID, "no") == 0 || 
			strcmp(books[i].name, "no") == 0
		)
		return true;//真为退出; 
	else 
		return false;//假为继续; 
}

void resets(struct book * books, int i)//处理用户输入的垃圾值
{
	strcpy(books[i].date.year, "NULL");
	strcpy(books[i].date.month, "NULL"); 
	strcpy(books[i].date.day, "NULL");
	strcpy(books[i].ID, "NULL"); 
	strcpy(books[i].name, "NULL"); 
}
