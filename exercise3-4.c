
#include<stdio.h>

int main(void)
{
	int n1, n2;
	
	
	puts("��̐�������͂��Ă��������B");
	printf("����A:"); scanf("%d", &n1);
	printf("����B:"); scanf("%d", &n2);
	if (n1 == n2)
		puts("A��B�͓������ł��B");		
	else if (n1 > n2)
		puts("A��B���傫���ł��B");
	else
		puts("A��B��菬�����ł��B");
		
	
	
	return 0;
}
