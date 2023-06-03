
#include<stdio.h>

int main(void)
{
	int m;
	
	
	printf("ŒŽ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B:");
	scanf("%d", &m);
	
	if (m >= 3 && m <= 5)
		printf("%dŒŽ‚Ít‚Å‚·B\n", m);
	else if (m >= 6 && m <= 8)
		printf("%dŒŽ‚Í‰Ä‚Å‚·B\n", m);
	else if (m >= 9 && m <= 11)
		printf("%dŒŽ‚ÍH‚Å‚·B\n", m);
	else if (m == 12 || m == 1 || m == 2)
		printf("%dŒŽ‚Í“~‚Å‚·B\n", m);
	else
		printf("%dŒŽ‚Í‚ ‚è‚Ü‚¹‚ñB\n", m);
	
	
	
	return 0;
}
