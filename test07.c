
#include<stdio.h>

int main(void)
{
	int x, y, z;
	int sum;
	double ave;
	
	puts("三つの整数を入力してください。");	
	printf("整数x:"); scanf("%d", &x);
	printf("整数y:"); scanf("%d", &y);
	printf("整数z:"); scanf("%d", &z);
	
	sum = x+y+z;
	ave = (double)sum/3;
	
	
	printf("それらの平均は%5.1fです。\n", ave);	
	printf("それらの合計は%5dです。\n", sum);	
		
	return 0;
}
