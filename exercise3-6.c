
#include<stdio.h>

int main(void)
{
	int n1, n2, min ;
	
	
	puts("�O�̐�������͂��Ă��������B");
	printf("����A:"); scanf("%d", &n1);
	printf("����B:"); scanf("%d", &n2);
	printf("����C:"); scanf("%d", &min);
	if (n1 < min)
		min = n1;
	if (n2 < min)
		min = n2;
	printf("�ŏ��l��%d�ł��B", min);
		
	
	
	return 0;
}
