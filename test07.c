
#include<stdio.h>

int main(void)
{
	int x, y, z;
	int sum;
	double ave;
	
	puts("�O�̐�������͂��Ă��������B");	
	printf("����x:"); scanf("%d", &x);
	printf("����y:"); scanf("%d", &y);
	printf("����z:"); scanf("%d", &z);
	
	sum = x+y+z;
	ave = (double)sum/3;
	
	
	printf("�����̕��ς�%5.1f�ł��B\n", ave);	
	printf("�����̍��v��%5d�ł��B\n", sum);	
		
	return 0;
}
