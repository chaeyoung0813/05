#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int j;
	printf("���� �ϳ��� �Է��Ͻÿ�");
	scanf("%i",&j);
	if(j<0)
	{
		j=-j;
		printf("���밪��%i�Դϴ�.",j);
	
	}
	else
	{
		printf("���밪��%i�Դϴ�.",j);
	}
	
	return 0;
}
