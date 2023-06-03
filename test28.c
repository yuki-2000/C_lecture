
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
	printf("²“¡ŒN‚ÌL’·:%d\n", sato);
	printf("²’†ŒN‚ÌL’·:%d\n", sanaka);
	printf("^èŒN‚ÌL’·:%d\n", masaki);
	
	
		
	
	
	return 0;
}
