
#include<stdio.h>

int max2(int a, int b)
{
	if (a>b)
		return a;
	else
		return b;
}



int main(void)
{
	int n1, n2;
	
	puts("��̐�������͂��Ă�������");
	printf("����1:");	scanf("%d", &n1);
	printf("����2:");	scanf("%d", &n2);
	
	printf("�傫���ق��̐�����%d�ł��B\n", max2(n1, n2));
		
	
	
	return 0;
}
