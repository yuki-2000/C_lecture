
#include<stdio.h>

int main(void)
{
	int no;
	
	printf("整数を入力してください:");
	scanf("%d", &no);
	
	printf("%dに12を加えると%dです。\n", no, 12 + no);
		
	return 0;
}
