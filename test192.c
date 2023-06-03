
#include<stdio.h>

int main(void)
{
	int i, j;
	int h, w;
	
	puts("¶‰º’¼Šp‚É“™•ÓOŠpŒ`‚ğì‚è‚Ü‚·B");
	printf("’Z•Ó:"); scanf("%d", &w);
	
	for (i = 1; i <= w; i++) {
		for (j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}
	
	
	
	
	
	return 0;
}
