
#include<stdio.h>

int main(void)
{
	int n, i;
	printf("ãŒÀ‚Ì³‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B:");
	scanf("%d", &n);
	i = 2;
	while (n >= i) {
		printf("%d ", i);
		i += 2;
	}
	printf("\n");
	
	
	
	return 0;
}
