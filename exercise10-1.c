
#include<stdio.h>

void adjust_point(int *n)
{
	if (*n < 0)
		*n = 0;
	else if (*n > 100)
		*n = 100;
}

int main(void)
{
	int n;
	
	printf("��������͂��Ă�������:");
	scanf("%d", &n);
	
	adjust_point(&n);
	printf("������%d�ɍX�V����܂����B", n);
		
	
	
	return 0;
}
