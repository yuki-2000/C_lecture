
#include<stdio.h>

int main(void)
{
	int sum,a ,b, min, max, i;
	printf("��̐�������͂��Ă��������B\n");
	printf("����a:"); scanf("%d", &a);
	printf("����b:"); scanf("%d", &b);
	sum = 0;
	max = (a >= b) ? a : b;
	min = (a <= b) ? a : b;
	i = min;
	
	do {
		sum += i;
		i++;
	} while (i <= max);
	
	printf("%d�ȏ�%d�ȉ��̑S�����̘a��%d�ł��B",min, max, sum);
	
		
	
	
	return 0;
}
