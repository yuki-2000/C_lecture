
#include<stdio.h>



int main(void)
{
	int sato = 178;
	int sanaka = 175;
	int masaki = 179;
	
	int *isako, *hiroko;
	
	isako = &sato;
	hiroko = &masaki;
	
	printf("�����q����̍D���Ȑl�̐L��:%d\n", *isako);
	printf("�Ђ�q����̍D���Ȑl�̐L��:%d\n", *hiroko);
	
	isako = &sanaka;
	
	*hiroko = 180;
	
	putchar('\n');
	printf("�����N�̐L��:%d\n", sato);
	printf("�����N�̐L��:%d\n", sanaka);
	printf("�^��N�̐L��:%d\n", masaki);
	printf("�����q����̍D���Ȑl�̐L��:%d\n", *isako);
	printf("�Ђ�q����̍D���Ȑl�̐L��:%d\n", *hiroko);
	
	
		
	
	
	return 0;
}
