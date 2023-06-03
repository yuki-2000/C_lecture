
#include<stdio.h>

int  sumup(int n)
{
	int sum = 0;
	int i;
	for(i = 1; i <= n; i++)
		sum += i;
	return sum;
}

int scan_print(void)
{
	int tmp;
	
	do{
	
	printf("正の整数を入力してください:");
	scanf("%d", &tmp);
	if(tmp <= 0)
		puts("正でない数を入力しないでください。");	
	}while(tmp <= 0);
	
	return tmp;

}

int main(void)
{
	int n, sum;
	
	puts("1からnまでの全整数を足します");
	n = scan_print();
	sum = sumup(n);
	printf("1から%dまでの全整数の和は%dです。", n, sum);
	
	
	return 0;
}
