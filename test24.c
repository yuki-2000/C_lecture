
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
	
	puts("二つの数字を入力してください");
	printf("整数x:");	scanf("%d", &n1);
	printf("整数y:");	scanf("%d", &n2);
	
	printf("xとyの二乗の差は%dです。\n", diff(sqr(n1), sqr(n2)));
		
	
	
	return 0;
}
