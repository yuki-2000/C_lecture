
#include<stdio.h>

int main(void)
{
	int n1, n2, max, min;
	
	
	puts("2つの整数を入力してください。");
	
	printf("n1:"); scanf("%d", &n1);
	printf("n2:"); scanf("%d", &n2);
	
	if (n1 > n2){
		max = n1;
		min = n2;
	}else{
		max = n2;
		min = n1;
	}
	printf("大きいほうの値は%dです。\n", max);
	printf("小さいほうの値は%dです。\n", min);
	
	
	return 0;
}
