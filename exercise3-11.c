
#include<stdio.h>

int main(void)
{
	int n1, n2;
	
	
	puts("��̐�������͂��Ă��������B");
	printf("����A:"); scanf("%d", &n1);
	printf("����B:"); scanf("%d", &n2);
	if (n1 - n2 >= 11 || n2 - n1 <= -11)
		puts("�����̍���11�ȏ�ł��B");		
	else
		puts("�����̍���10�ȉ��ł��B");
	
	
	return 0;
}
