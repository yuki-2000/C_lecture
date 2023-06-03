
#include<stdio.h>

int main(void)
{
	int i, no, sum;
	
	printf("n‚Ì’l:");
	scanf("%d", &no);
	sum = 0;
	
	for(i = 1; i <= no; i++) 
		sum += i;
	
	printf("1‚©‚ç%d‚Ü‚Å‚Ì˜a‚Í%d‚Å‚·B", no, sum);
	
	
	
	
	
	return 0;
}
