
#include<stdio.h>

int cube(int x)
{
	return x * x * x;
}

int main(void)
{
	int n1;
	
	puts("数字を入力してください");
	scanf("%d", &n1);
	
	printf("三乗の値は%dです。\n", cube(n1));
		
	
	
	return 0;
}
