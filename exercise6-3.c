
#include<stdio.h>

int cube(int x)
{
	return x * x * x;
}

int main(void)
{
	int n1;
	
	puts("��������͂��Ă�������");
	scanf("%d", &n1);
	
	printf("�O��̒l��%d�ł��B\n", cube(n1));
		
	
	
	return 0;
}
