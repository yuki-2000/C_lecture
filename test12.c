
#include<stdio.h>

int main(void)
{
	int m;
	
	
	printf("������͂��Ă��������B:");
	scanf("%d", &m);
	
	if (m >= 3 && m <= 5)
		printf("%d���͏t�ł��B\n", m);
	else if (m >= 6 && m <= 8)
		printf("%d���͉Ăł��B\n", m);
	else if (m >= 9 && m <= 11)
		printf("%d���͏H�ł��B\n", m);
	else if (m == 12 || m == 1 || m == 2)
		printf("%d���͓~�ł��B\n", m);
	else
		printf("%d���͂���܂���B\n", m);
	
	
	
	return 0;
}
