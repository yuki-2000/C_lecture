
#include<stdio.h>

int main(void)
{
	int vx, vy;
	
	puts("二つの数整数を入力してください。");	
	printf("整数1:"); scanf("%d", &vx);
	printf("整数2:"); scanf("%d", &vy);
	
	printf("vx + vy = %d\n", vx + vy);
	printf("vx - vy = %d\n", vx - vy);
	printf("vx * vy = %d\n", vx * vy);
	printf("vx %% vy = %d\n", vx % vy);	/*余りを表示する*/
	printf("vx / vy = %d\n", vx / vy);	/*商を表示する*/
		
	return 0;
}
