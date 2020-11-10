#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
static int tmp;
void ColorEnable()
{
	switch(tmp)
		{
			case 1:
				system("color 01");
				break;
			case 2:
				system("color 02");
				break;
			case 3:
				system("color 04");
				break;
			case 4:
				system("color 0F");
				break;
			default:
				system("color 0A");
				tmp = 0;
				break;
		}
}
int main()
{
	int i, j;
	
	printf("      ****         ****\n");
	printf("   *********     *********\n");
	printf("*************   *************\n");
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 29; j++)
		{
			printf("*");
		}
		printf("\n");
		Sleep(1000);
		tmp++;
		ColorEnable();
	}
	
	for(i = 0; i < 7; i++)
	{
		for(j = 0; j < 2*(i + 1) - 1; j++)
		{
			printf(" ");
		}
		for(j = 0; j < 27 - i*4; j++)
		{
			printf("*");
		}
		printf("\n");
		tmp++;
		ColorEnable();
		Sleep(1000);
		
	}
	printf("          我爱你!\n"); 
	system("color 04");
	system("pause");
	return 0;
}
