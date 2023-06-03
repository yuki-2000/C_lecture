
#include<stdio.h>

int max2(int a, int b)
{
	return (a > b) ? a : b;
}

int max4(int a, int b, int c, int d)
{
	return max2(max2(a,b), max2(c,d));
}

int main(void)
{
	int n1, n2, n3, n4;
	
	puts("l‚Â‚Ì”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	printf("®”1:");	scanf("%d", &n1);
	printf("®”2:");	scanf("%d", &n2);
	printf("®”3:");	scanf("%d", &n3);
	printf("®”4:");	scanf("%d", &n4);
	
	printf("Å‘å’l‚Í%d‚Å‚·B\n", max4(n1, n2, n3, n4 ));
		
	
	
	return 0;
}
