
#include<stdio.h>

int main(void)
{
	int m;
	
	
	printf("月を入力してください。:");
	scanf("%d", &m);
	
	if (m >= 3 && m <= 5)
		printf("%d月は春です。\n", m);
	else if (m >= 6 && m <= 8)
		printf("%d月は夏です。\n", m);
	else if (m >= 9 && m <= 11)
		printf("%d月は秋です。\n", m);
	else if (m == 12 || m == 1 || m == 2)
		printf("%d月は冬です。\n", m);
	else
		printf("%d月はありません。\n", m);
	
	
	
	return 0;
}
