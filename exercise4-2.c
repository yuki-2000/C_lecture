
#include<stdio.h>

int main(void)
{
	int sum,a ,b, min, max, i;
	printf("二つの整数を入力してください。\n");
	printf("整数a:"); scanf("%d", &a);
	printf("整数b:"); scanf("%d", &b);
	sum = 0;
	max = (a >= b) ? a : b;
	min = (a <= b) ? a : b;
	i = min;
	
	do {
		sum += i;
		i++;
	} while (i <= max);
	
	printf("%d以上%d以下の全整数の和は%dです。",min, max, sum);
	
		
	
	
	return 0;
}
