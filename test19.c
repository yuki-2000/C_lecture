
#include<stdio.h>

int main(void)
{
	int i, j;
	int h, w;
	
	puts("長方形を作ります。");
	printf("高さ:"); scanf("%d", &h);
	printf("幅:"); scanf("%d", &w);
	
	for (i = 1; i <= h; i++) {
		for (j = 1; j <= w; j++)
			putchar('*');
		putchar('\n');
	}
	
	
	
	
	
	return 0;
}
