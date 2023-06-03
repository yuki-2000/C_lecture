
#include<stdio.h>

int main(void)
{
	int i, j;
	int  w;
	
	puts("³•ûŒ`‚ğì‚è‚Ü‚·B");
	printf("‰½’i‚Å‚·‚©:"); scanf("%d", &w);
	
	for (i = 1; i <= w; i++) {
		for (j = 1; j <= w; j++)
		 putchar('*');
		putchar('\n');
	}
	
	
	
	
	
	return 0;
}
