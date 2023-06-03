
#include<stdio.h>

int main(void)
{
	int i, j;
	int h, w;
	
	puts("’·•ûŒ`‚ğì‚è‚Ü‚·B");
	printf("‚‚³:"); scanf("%d", &h);
	printf("•:"); scanf("%d", &w);
	
	for (i = 1; i <= h; i++) {
		for (j = 1; j <= w; j++)
			putchar('*');
		putchar('\n');
	}
	
	
	
	
	
	return 0;
}
