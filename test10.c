
#include<stdio.h>

int main(void)
{
	int no;
	
	
	printf("��������͂��Ă��������F");
	scanf("%d", &no);
	if (no == 0)
		puts("���̐���0�ł��B");
	else if (no > 0)
		puts("���̐��͐��ł��B");
	else 
		puts("���̐��͕��ł�");
	return 0;
}
