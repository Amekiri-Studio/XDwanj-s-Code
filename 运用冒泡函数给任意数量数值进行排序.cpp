#include <stdio.h>

int swap(int &i, int &j)//�����������н���λ�õĺ��� 
{
	int t;//�������� 
	
	t = i;
	i = j;
	j = t;
}

int main()//������ 
{
	do{
		int a[10];//��10�������ж��� 
		int i, j;
		int num;
		
		printf("����������ٸ���ֵ:");
		scanf("%d", &num);
		
		printf("������%d�������ÿո������", num);
		for(i=0; i<num; i++)//���Ӱ��scanf	XD 
		{
			scanf("%d",&a[i]);
		}		
	
		for(i=0; i<num; i++)//����ð������Ļ��� 
			for(j=0; j<(num - 1); j++)//���жϽ����ı�������"����ƽ��" 
				if(a[j] > a[j+1])//�ж� 
					swap(a[j], a[j+1]);//���� 
		
	
		for(i=0; i<num; i++)//���Ӱ�printf	   XD 
		{
			printf("%d ",a[i]);
		}
	}while(1);
	return 0;				 
} 
