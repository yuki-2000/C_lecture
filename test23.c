
#include<stdio.h>

int max2(int a, int b)
{
	if (a>b)
		return a;
	else
		return b;
}



int main(void)
{
	int n1, n2;
	
	puts("二つの数字を入力してください");
	printf("整数1:");	scanf("%d", &n1);
	printf("整数2:");	scanf("%d", &n2);
	
	printf("大きいほうの数字は%dです。\n", max2(n1, n2));
		
	
	
	return 0;
}
