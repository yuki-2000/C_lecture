
#include<stdio.h>

int sqr(int x)
{
	return x * x;
}

int diff(int a, int b)
{
	return (a > b) ? a-b : b-a;
}


int main(void)
{
	int n1, n2;
	
	puts("“ñ‚Â‚Ì”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	printf("®”x:");	scanf("%d", &n1);
	printf("®”y:");	scanf("%d", &n2);
	
	printf("x‚Æy‚Ì“ñæ‚Ì·‚Í%d‚Å‚·B\n", diff(sqr(n1), sqr(n2)));
		
	
	
	return 0;
}
