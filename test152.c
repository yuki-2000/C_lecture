
#include<stdio.h>

int main(void)
{
	int hand;
	
	do {
		printf("じゃんけんの手を選んでください。【グー...0/チョキ...1/パー...2】");
		scanf("%d",&hand);
	} while (hand < 0 || 2 < hand);
	
	printf("あなたは");
	switch (hand) {
	 case 0 : printf("グー"); break;
	 case 1 : printf("チョキ"); break;
	 case 2 : printf("パー"); break;
	}
	printf("を選びました。\n");
	
		
	
	
	return 0;
}
