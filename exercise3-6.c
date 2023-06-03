
#include<stdio.h>

int main(void)
{
	int n1, n2, min ;
	
	
	puts("三つの整数を入力してください。");
	printf("整数A:"); scanf("%d", &n1);
	printf("整数B:"); scanf("%d", &n2);
	printf("整数C:"); scanf("%d", &min);
	if (n1 < min)
		min = n1;
	if (n2 < min)
		min = n2;
	printf("最小値は%dです。", min);
		
	
	
	return 0;
}
