
#include<stdio.h>

void swap(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

void sort3(int *n1, int *n2, int *n3)
{
	int i;
	for (i=0; i<2; i++){
		if(*n1 > *n2)
		swap(n1, n2);
		if (*n2 > *n3)
		swap(n2, n3);
	}
}


int main(void)
{
	int n1,n2,n3;
	
	printf("n1:"); scanf("%d", &n1);
	printf("n2:"); scanf("%d", &n2);
	printf("n3:"); scanf("%d", &n3);
	sort3(&n1, &n2, &n3);
	
	printf("n1ÇÕ%dÇ≈Ç∑ÅB\n",n1);
	printf("n2ÇÕ%dÇ≈Ç∑ÅB\n",n2);
	printf("n3ÇÕ%dÇ≈Ç∑ÅB\n",n3);
	
		
	
	
	return 0;
}
