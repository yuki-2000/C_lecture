
#include<stdio.h>

int max3(int a, int b, int c)
{
	int max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	return max;
}



int main(void)
{
	int n1, n2, n3;
	
	puts("O‚Â‚Ì”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	printf("®”1:");	scanf("%d", &n1);
	printf("®”2:");	scanf("%d", &n2);
	printf("®”3:");	scanf("%d", &n3);
	
	printf("Å‘å’l‚Í%d‚Å‚·B\n", max3(n1, n2, n3));
		
	
	
	return 0;
}
