//ͼ�����ϵͳ
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

//�������� 
struct format_date
{
	char year[100];//�� 
	char month[100];//�� 
	char day[100];//�� 
};

//����ؽṹ������ 
struct book
{
	char ID[100];//�鱾��� 
	char name[100]; //�鱾���� 
	struct format_date date;//�������� 
};

void Input(struct book * books, int number);//���뺯�� 
bool pthread_exit(struct book * books, int i);//�жϺ��� 
void resets(struct book * books, int i);//�����û����������ֵ 

//������ Ĭ������1000����  
int main(void)
{
	int val = 1000;//��ĸ��� 
	int i, j;//ѭ������
	char ch_temp[100]; 
	int num_input = 0;
	
	struct book * books = (struct book *)malloc(sizeof(struct book)*val);//����val�� book �ṹ�� 
	
	printf("��ӭʹ��ͼ�����ϵͳ��(����1000��)\n\n"); 
	do
	{
		for (; num_input<val; num_input++) 
		{
			Input(&books[num_input], num_input);
			
			if (pthread_exit(&books[num_input], num_input) )
				break;
		}
		
		printf("��ϲ���Ѿ������������ͼ�����ݿ�!\n"); 
		system("pause");

		printf("�����ǵ������ݣ������ַ������Ǽ����������ݣ����룩��");
 	}while(strcmp(gets(ch_temp), "����") == 0); 
 	
 	
 	
	return 0;
}

void Input(struct book * books, int number)//����ģ�� 
{
	
	printf("�������%d����ı��:", number+1);
	gets(books[number].ID);
	
	printf("�������%d���������:", number+1);
	gets(books[number].name);
	
	printf("�������%d�������:", number+1);
	gets(books[number].date.year);
	printf("�������%d�������:", number+1);
	gets(books[number].date.month); 
	printf("�������%d�������:", number+1);
	gets(books[number].date.day);
	printf("����Сд no �˳����룡\n");
	
	printf("\n");
}

bool pthread_exit(struct book * books, int i)//�жϺ���
{
	if (
			strcmp(books[i].date.year, "no") == 0 || 
			strcmp(books[i].date.month, "no") == 0 || 
			strcmp(books[i].date.day, "no") == 0 || 
			strcmp(books[i].ID, "no") == 0 || 
			strcmp(books[i].name, "no") == 0
		)
		return true;//��Ϊ�˳�; 
	else 
		return false;//��Ϊ����; 
}

void resets(struct book * books, int i)//�����û����������ֵ
{
	strcpy(books[i].date.year, "NULL");
	strcpy(books[i].date.month, "NULL"); 
	strcpy(books[i].date.day, "NULL");
	strcpy(books[i].ID, "NULL"); 
	strcpy(books[i].name, "NULL"); 
}
