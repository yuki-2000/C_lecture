
#include<stdio.h>

int min3(int a, int b, int c)
{
	int min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return min;
}



int main(void)
{
	int n1, n2, n3;
	
	puts("O‚Â‚Ì”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	printf("®”1:");	scanf("%d", &n1);
	printf("®”2:");	scanf("%d", &n2);
	printf("®”3:");	scanf("%d", &n3);
	
	printf("Å¬’l‚Í%d‚Å‚·B\n", min3(n1, n2, n3));
		
	
	
	return 0;
}
