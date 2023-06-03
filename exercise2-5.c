
#include<stdio.h>

int main(void)
{
	double a, b;
	
	puts("二つ整数を入力してください。");	
	printf("整数a:"); scanf("%lf", &a);
	printf("整数b:"); scanf("%lf", &b);
	
	printf("aの値はbの値の%f%%です。\n", (a / b)*100);
	
		
	return 0;
}
