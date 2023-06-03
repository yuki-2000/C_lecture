
#include<stdio.h>

void rev_intary(int v[], int n)
{
	int i;
	int x[n];
	for (i =0; i < n ; i++) 
		x[i] = v[i];
	for (i =0; i < n ; i++) 
		v[i] = x[n-i-1];
	
}

int main(void)
{
	int i;
	int v[4] = {1,2,3,4};
	
	for(i = 0; i < 4; i++) 
		printf("v[%d]=%d\n", i, v[i]);
	
	rev_intary(v, 4);
	puts("”½“]‚µ‚½”z—ñ");
	for(i = 0; i < 4; i++) 
		printf("v[%d]=%d\n", i, v[i]);

	
	return 0;
}
