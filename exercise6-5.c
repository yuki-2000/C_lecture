
#include<stdio.h>

int  sumup(int n)
{
	int sum = 0;
	int i;
	for(i = 1; i <= n; i++)
		sum += i;
	return sum;
}

int scan_print(void)
{
	int tmp;
	
	do{
	
	printf("���̐�������͂��Ă�������:");
	scanf("%d", &tmp);
	if(tmp <= 0)
		puts("���łȂ�������͂��Ȃ��ł��������B");	
	}while(tmp <= 0);
	
	return tmp;

}

int main(void)
{
	int n, sum;
	
	puts("1����n�܂ł̑S�����𑫂��܂�");
	n = scan_print();
	sum = sumup(n);
	printf("1����%d�܂ł̑S�����̘a��%d�ł��B", n, sum);
	
	
	return 0;
}
