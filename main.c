#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int j;
	printf("정수 하나를 입력하시오");
	scanf("%i",&j);
	if(j<0)
	{
		j=-j;
		printf("절대값은%i입니다.",j);
	
	}
	else
	{
		printf("절대값은%i입니다.",j);
	}
	
	return 0;
}
