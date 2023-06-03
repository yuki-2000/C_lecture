
#include<stdio.h>
#include<math.h>

double side(double s)
{
	return sqrt(s);
}


int main(void)
{
	double s;
	printf("正方形の面積を入力してください。:");
	scanf("%lf", &s);
	
	printf("正方形の一辺の長さは%fです。", side(s));
	
	
		
	
	
	return 0;
}
