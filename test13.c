
#include<stdio.h>

int main(void)
{
	int m;
	
	
	printf("��������͂��Ă��������B:");
	scanf("%d", &m);
	
	switch (m % 3){
	 case 0 : puts("���̐���3�Ŋ���؂�܂��B"); break;
	 case 1 : puts("���̐��̗]���1�ł��B"); break;
	 case 2 : puts("���̐��̗]���2�ł��B"); break;
	}
	
	
	
	return 0;
}
