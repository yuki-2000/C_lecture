
#include<stdio.h>

int main(void)
{
	int i, no, sum;
	
	printf("nの値:");
	scanf("%d", &no);
	sum = 0;
	
	for(i = 1; i <= no; i++) 
		sum += i;
	
	printf("1から%dまでの和は%dです。", no, sum);
	
	
	
	
	
	return 0;
}
