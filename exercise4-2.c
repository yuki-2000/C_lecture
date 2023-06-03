
#include<stdio.h>

int main(void)
{
	int sum,a ,b, min, max, i;
	printf("“ñ‚Â‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
	printf("®”a:"); scanf("%d", &a);
	printf("®”b:"); scanf("%d", &b);
	sum = 0;
	max = (a >= b) ? a : b;
	min = (a <= b) ? a : b;
	i = min;
	
	do {
		sum += i;
		i++;
	} while (i <= max);
	
	printf("%dˆÈã%dˆÈ‰º‚Ì‘S®”‚Ì˜a‚Í%d‚Å‚·B",min, max, sum);
	
		
	
	
	return 0;
}
