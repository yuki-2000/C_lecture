
#include<stdio.h>

int sqr(int x)
{
	return x * x;
}

int diff(int a, int b)
{
	return (a > b) ? a-b : b-a;
}


int main(void)
{
	int n1, n2;
	
	puts("��̐�������͂��Ă�������");
	printf("����x:");	scanf("%d", &n1);
	printf("����y:");	scanf("%d", &n2);
	
	printf("x��y�̓��̍���%d�ł��B\n", diff(sqr(n1), sqr(n2)));
		
	
	
	return 0;
}
