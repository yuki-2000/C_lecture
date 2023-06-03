
#include<stdio.h>

int main(void)
{
	int retry;
	do {
		int n;
		
		printf("整数を入力してください。");
		scanf("%d", &n);
		
		if (n % 2)
			puts("その数は奇数です。");
		else
			puts("その数は偶数です。");
		puts("もう一度？【yes...0/no...9】");
		scanf("%d", &retry );
	} while (retry == 0);
	
	return 0;
}
