#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void sort(int * p, int len)//����ĺ��� 
{
	int i, j;
	int t;
	
	for (i=1; i<len; i++)
	{
		t = p[i];//����װ�Ǹ������������ֵ 
		j = i - 1;
		
		while ( (j>=0) && ( p[j]>t ) )//����������Ų 
		{
			p[j+1] = p[j];
			j--; 
		}
		
		p[j+1] = t;//���벽�� 
	}
}

int main(void)
{
	int val;
	int i, j;
	//int arr[val];
	int * arr;
	
	printf("������һ������ȷ����Ҫ�������Ŀ��");
	scanf("%d", &val);//�û��Զ���һ�����鳤�� 
	
	//int arr[val];
	arr = (int *)malloc(int (val*4));//��ʼ��һ������arr 
	
	for (i=0; i<val; i++)
		scanf("%d", &arr[i]);
		
	sort(arr, val);//��sort������������ĵ�ַ�ͳ��� 
	
	for (i=0; i<val; i++)//��� 
		printf("%d ", arr[i]);
	printf("\n");
		
	system("pause");//�����ն� 
	
	return 0;
}
/*
______________________________________
2020��12��10��	10:22:50 
����:���� 20662130224 
���ۣ�
	1_��ָ���ں����д��ݵ�ַ������������ 
	2_�����ö�̬�ڴ���ж���һ������
	3_���ò���������㷨 
______________________________________
*/
