
#include<stdio.h>

int main(void)
{
	int no;
	
	
	printf("��������͂��Ă��������F");
	scanf("%d", &no);
	if (no % 5)
		puts("���̐���5�ł͊���؂�܂���B");
	else
		puts("���̐���5�ł͊���؂�܂��B");
	
	return 0;
}
