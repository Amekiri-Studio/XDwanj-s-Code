#include <stdio.h>

void Max(int &a, int &b)	//�ж�������ֵ˭���󣬲����������ֵ����ǰ�� 
{
	int t;
	if (a < b)	//�ж� 
	{
		t = a;
		a = b;
		b = t;
	}
}

int main() //������ 
{
	while (1)	//�˻���������ѭ�� XD�� 
	{
			int i, j, l;	//���� 
		
		printf("�������������������ж����е����Լ����");
		scanf("%d %d", &i, &j);
		
		Max(i,j);	//Ԥ���� 
		
		while (j != 0)
		{
			l = i%j; 
			i = j;
			j = l;	
		}
		printf("���Լ��Ϊ��%d\n", i);	//���XD 
	}
	
	return 0;
}
