
#include<stdio.h>

int main(void)
{
	int i,j,k,x;
	int a[4][3];
	int b[3][4];
	int seki[4][4] = {0};
	
	puts("�s��a�ɂ���");
	for(i=0; i < 4; i++){
		for(j = 0; j < 3; j++){
		printf("%d�s%d��F",i+1,j+1 ); scanf("%d", &a[i][j]);
		}
	}
	
	puts("�s��b�ɂ���");
	for(i=0; i < 3; i++){
		for(j = 0; j < 4; j++){
		printf("%d�s%d��F",i+1,j+1 ); scanf("%d", &b[i][j]);
		}
	}
	
	for(i=0; i < 4; i++){
		for(j = 0; j < 4; j++){
			for(k=0; k<3; k++){
			x = a[i][k] * b[k][j];
			seki[i][j] += x;
			}
		}
	}
	
	puts("�s��a");
	for(i=0; i < 4; i++){
		for(j = 0; j < 3; j++)
		printf("%4d",a[i][j] );
		putchar('\n');
	}
	
	
	puts("�s��b");
	for(i=0; i < 3; i++){
		for(j = 0; j < 4; j++)
		printf("%4d", b[i][j] );
		putchar('\n');
	}
	
	puts("�s��a�ƍs��b�̐�");
	for(i=0; i < 4; i++){
		for(j = 0; j < 4; j++)
			printf("%4d",seki[i][j]);
		putchar('\n');
	}
	
	
	
	return 0;
}
