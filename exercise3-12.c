
#include<stdio.h>

int main(void)
{
	int m;
	
	
	printf("��������͂��Ă��������B:");
	scanf("%d", &m);
	
	switch (m % 2){
	 case 0 : puts("���̐��͋����ł��B"); break;
	 case 1 : puts("���̐��͊�ł��B"); break;
	}
	
	
	
	return 0;
}
