
#include<stdio.h>

void hiroko(int *hight)
{
	if(*hight < 180)
		*hight = 180;
}

int main(void)
{
	int sato = 178;
	int sanaka = 175;
	int masaki = 179;
	
	hiroko(&masaki);
	
	
	putchar('\n');
	printf("�����N�̐L��:%d\n", sato);
	printf("�����N�̐L��:%d\n", sanaka);
	printf("�^��N�̐L��:%d\n", masaki);
	
	
		
	
	
	return 0;
}
