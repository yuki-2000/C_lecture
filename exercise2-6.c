
#include<stdio.h>

int main(void)
{
	
	double l,wei;
	
	puts("身長をcmで入力してください:"); scanf("%lf",&l);
	wei =(l-100)*0.9 ;
	printf("標準体重は%.1fkgです。",wei);
	
	
	
	return 0;
}
