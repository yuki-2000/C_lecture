
#include<stdio.h>

int main(void)
{
	int m;
	
	
	printf("整数を入力してください。:");
	scanf("%d", &m);
	
	switch (m % 3){
	 case 0 : puts("その数は3で割り切れます。"); break;
	 case 1 : puts("その数の余剰は1です。"); break;
	 case 2 : puts("その数の余剰は2です。"); break;
	}
	
	
	
	return 0;
}
