
#include<stdio.h>

int main(void)
{
	int i,j;
	int test1[4][3] = {{91,63,78},{67,72,46},{89,34,53},{32,54,34}};
	int test2[4][3] = {{97,67,82},{73,43,46},{97,56,21},{85,46,35}};
	int sum[4][3];
	
	for(i=0; i < 4; i++){
		for(j = 0; j < 3; j++)
		 sum[i][j] = test1[i][j] + test2[i][j];
	}
	
	puts("���ڂ̓_��");
	for(i=0; i < 4; i++){
		for(j = 0; j < 3; j++)
		printf("%4d",test1[i][j]);
		putchar('\n');
	}
	
	puts("���ڂ̓_��");
	for(i=0; i < 4; i++){
		for(j = 0; j < 3; j++)
		printf("%4d",test2[i][j]);
		putchar('\n');
	}
	puts("���v�̓_��");
	for(i=0; i < 4; i++){
		for(j = 0; j < 3; j++)
		printf("%4d",sum[i][j]);
		putchar('\n');
	}
	
	
	
	return 0;
}
