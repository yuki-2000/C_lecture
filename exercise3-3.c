
#include<stdio.h>

int main(void)
{
	int no;
	
	
	printf("整数を入力してください：");
	scanf("%d", &no);
		printf("その数の絶対値は%dです。\n", (no >= 0) ? no : -no);
	return 0;
}
