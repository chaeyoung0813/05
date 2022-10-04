#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 59;
	int x;
	int num=0;
	
	do
	{
	printf("input number");	//입력하라 문구 출력
	scanf("%d", &x);//입력을 받음
    num++;
	if(x>answer)
		printf("low!\n");
	else if(x<answer)
		printf("high!\n");
	
		 	//입력 숫자가 정답보다 큰지 작은지 출력 
	}
	while(x!=answer);
	{
	printf("Congratulation!\n");
	printf("Number of trial =%i\n",num);//시도 횟수 출력 
	}

	return 0;
}
	

