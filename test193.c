
#include<stdio.h>

int main(void)
{
	int i, j;
	int  w;
	
	puts("右下直角等辺三角形を作ります。");
	printf("短辺:"); scanf("%d", &w);
	
	for (i = 1; i <= w; i++) {
		for (j = 1; j <= w - i; j++)
		 putchar(' ');
		for (j = 1; j <= i; j++)
		 putchar('*');
		putchar('\n');
	}
	
	
	
	
	
	return 0;
}
