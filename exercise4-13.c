
#include<stdio.h>

int main(void)
{
	int i, no, sum;
	
	printf("n�̒l:");
	scanf("%d", &no);
	sum = 0;
	
	for(i = 1; i <= no; i++) 
		sum += i;
	
	printf("1����%d�܂ł̘a��%d�ł��B", no, sum);
	
	
	
	
	
	return 0;
}
