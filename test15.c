
#include<stdio.h>

int main(void)
{
	int retry;
	do {
		int n;
		
		printf("��������͂��Ă��������B");
		scanf("%d", &n);
		
		if (n % 2)
			puts("���̐��͊�ł��B");
		else
			puts("���̐��͋����ł��B");
		puts("������x�H�yyes...0/no...9�z");
		scanf("%d", &retry );
	} while (retry == 0);
	
	return 0;
}
