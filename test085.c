
#include<stdio.h>

int main(void)
{
	int no;
	
	
	printf("整数を入力してください：");
	scanf("%d", &no);
	if (no)
		puts("その数は0ではありません。");
	else
	puts("その数は0です。");
	
	return 0;
}
