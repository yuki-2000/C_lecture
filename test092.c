
#include<stdio.h>

int main(void)
{
	int n1, n2;
	
	
	puts("二つの整数を入力してください。");
	printf("n1:"); scanf("%d", &n1);
	printf("n2:"); scanf("%d", &n2);
	if (n1 != n2)
		puts("それらの値は違います。");		
	else
		puts("それらの値は同じです。");
		
	
	
	return 0;
}
