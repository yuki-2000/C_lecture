
#include<stdio.h>

int main(void)
{
	int m;
	
	
	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B:");
	scanf("%d", &m);
	
	switch (m % 2){
	 case 0 : puts("‚»‚Ì”‚Í‹ô”‚Å‚·B"); break;
	 case 1 : puts("‚»‚Ì”‚ÍŠï”‚Å‚·B"); break;
	}
	
	
	
	return 0;
}
