
#include<stdio.h>

int min2(int a, int b)
{
	if (a < b)
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
	
	printf("�������ق��̐�����%d�ł��B\n", min2(n1, n2));
		
	
	
	return 0;
}
