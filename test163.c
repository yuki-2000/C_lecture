
#include<stdio.h>

int main(void)
{
	int n, i;
	printf("上限の正の整数を入力してください。:");
	scanf("%d", &n);
	i = 0;
	while (n >= i) 
		printf("%d ", i++);
	printf("\n");
	
	
	
	return 0;
}
