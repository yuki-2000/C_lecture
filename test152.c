
#include<stdio.h>

int main(void)
{
	int hand;
	
	do {
		printf("����񂯂�̎��I��ł��������B�y�O�[...0/�`���L...1/�p�[...2�z");
		scanf("%d",&hand);
	} while (hand < 0 || 2 < hand);
	
	printf("���Ȃ���");
	switch (hand) {
	 case 0 : printf("�O�["); break;
	 case 1 : printf("�`���L"); break;
	 case 2 : printf("�p�["); break;
	}
	printf("��I�т܂����B\n");
	
		
	
	
	return 0;
}
