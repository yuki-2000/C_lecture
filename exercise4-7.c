
#include<stdio.h>

int main(void)
{
	int n, i;
	printf("上限の正の整数を入力してください。:");
	scanf("%d", &n);
	i = 2;
	while (n >= i) {
		printf("%d ", i);
		i *= 2;
	}
	printf("\n");
	
	
	
	return 0;
}
