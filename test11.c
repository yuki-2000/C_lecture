
#include<stdio.h>

int main(void)
{
	int n1, n2, max, min;
	
	
	puts("2�̐�������͂��Ă��������B");
	
	printf("n1:"); scanf("%d", &n1);
	printf("n2:"); scanf("%d", &n2);
	
	if (n1 > n2){
		max = n1;
		min = n2;
	}else{
		max = n2;
		min = n1;
	}
	printf("�傫���ق��̒l��%d�ł��B\n", max);
	printf("�������ق��̒l��%d�ł��B\n", min);
	
	
	return 0;
}
