
#include<stdio.h>

int main(void)
{
	int x, y;
	
	puts("��̐�������͂��Ă��������B");	
	printf("����x:"); scanf("%d", &x);
	printf("����y:"); scanf("%d", &y);
	
	printf("x�̒l��y�̒l��%d%%�ł��B\n", (x * 100) / y);	/*x��y�Ŋ����Ă���100�{����Ɗ������Ƃ��ɏ����_�ȉ����؂�̂Ă��Ă��܂����ߐ�ɂ�����B*/
	
		
	return 0;
}
