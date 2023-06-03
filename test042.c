
#include<stdio.h>

int main(void)
{
	int no;
	
	puts("整数を入力してください。");	
	scanf("%d", &no);
	printf("最も下の桁は%dです。\n", no % 10);	/*xをyで割ってから100倍すると割ったときに小数点以下が切り捨てられてしまうため先にかける。*/
	
		
	return 0;
}
