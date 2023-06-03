
#include<stdio.h>

int main(void)
{
	int n1, n2;
	
	
	puts("“ñ‚Â‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	printf("®”A:"); scanf("%d", &n1);
	printf("®”B:"); scanf("%d", &n2);
	if (n1 - n2 >= 11 || n2 - n1 <= -11)
		puts("‚»‚ê‚ç‚Ì·‚Í11ˆÈã‚Å‚·B");		
	else
		puts("‚»‚ê‚ç‚Ì·‚Í10ˆÈ‰º‚Å‚·B");
	
	
	return 0;
}
