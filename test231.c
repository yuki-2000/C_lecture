
#include<stdio.h>

int max3(int a, int b, int c)
{
	int max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	return max;
}



int main(void)
{
	int n1, n2, n3;
	
	puts("�O�̐�������͂��Ă�������");
	printf("����1:");	scanf("%d", &n1);
	printf("����2:");	scanf("%d", &n2);
	printf("����3:");	scanf("%d", &n3);
	
	printf("�ő�l��%d�ł��B\n", max3(n1, n2, n3));
		
	
	
	return 0;
}
