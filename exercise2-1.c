
#include<stdio.h>

int main(void)
{
	int x, y;
	
	puts("二つの整数を入力してください。");	
	printf("整数x:"); scanf("%d", &x);
	printf("整数y:"); scanf("%d", &y);
	
	printf("xの値はyの値の%d%%です。\n", (x * 100) / y);	/*xをyで割ってから100倍すると割ったときに小数点以下が切り捨てられてしまうため先にかける。*/
	
		
	return 0;
}
