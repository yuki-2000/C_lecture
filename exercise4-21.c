
#include<stdio.h>

int main(void)
{
	int i, j;
	int  w;
	
	puts("正方形を作ります。");
	printf("何段ですか:"); scanf("%d", &w);
	
	for (i = 1; i <= w; i++) {
		for (j = 1; j <= w; j++)
		 putchar('*');
		putchar('\n');
	}
	
	
	
	
	
	return 0;
}
