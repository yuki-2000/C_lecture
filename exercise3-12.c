
#include<stdio.h>

int main(void)
{
	int m;
	
	
	printf("整数を入力してください。:");
	scanf("%d", &m);
	
	switch (m % 2){
	 case 0 : puts("その数は偶数です。"); break;
	 case 1 : puts("その数は奇数です。"); break;
	}
	
	
	
	return 0;
}
