
#include<stdio.h>

int main(void)
{
	int no;
	
	
	printf("��������͂��Ă��������F");
	scanf("%d", &no);
	if (no >0)
		if (no % 2)
			puts("���̐��͊�ł��B");
		else 
			puts("���̐��͋����ł�");
	else
		puts("�������Ȃ����������͂���܂����B");
	return 0;
}
