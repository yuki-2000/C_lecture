
#include<stdio.h>

int main(void)
{
	int vx, vy;
	
	puts("��̐���������͂��Ă��������B");	
	printf("����1:"); scanf("%d", &vx);
	printf("����2:"); scanf("%d", &vy);
	
	printf("vx + vy = %d\n", vx + vy);
	printf("vx - vy = %d\n", vx - vy);
	printf("vx * vy = %d\n", vx * vy);
	printf("vx %% vy = %d\n", vx % vy);	/*�]���\������*/
	printf("vx / vy = %d\n", vx / vy);	/*����\������*/
		
	return 0;
}
