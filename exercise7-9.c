
#include<stdio.h>
#include<math.h>

double side(double s)
{
	return sqrt(s);
}


int main(void)
{
	double s;
	printf("�����`�̖ʐς���͂��Ă��������B:");
	scanf("%lf", &s);
	
	printf("�����`�̈�ӂ̒�����%f�ł��B", side(s));
	
	
		
	
	
	return 0;
}
