
#include<stdio.h>

int main(void)
{
	int i, j;
	int  w;
	
	puts("�E�����p���ӎO�p�`�����܂��B");
	printf("�Z��:"); scanf("%d", &w);
	
	for (i = 1; i <= w; i++) {
		for (j = 1; j <= w - i; j++)
		 putchar(' ');
		for (j = 1; j <= i; j++)
		 putchar('*');
		putchar('\n');
	}
	
	
	
	
	
	return 0;
}
