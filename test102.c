
#include<stdio.h>

int main(void)
{
	int no;
	
	
	printf("整数を入力してください：");
	scanf("%d", &no);
	if (no >0)
		if (no % 2)
			puts("その数は奇数です。");
		else 
			puts("その数は偶数です");
	else
		puts("正しくない数字が入力されました。");
	return 0;
}
