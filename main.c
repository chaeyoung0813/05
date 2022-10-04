#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int y;
	char op;
	int result;
	
	//두개의 입력 정수, 한 개의 연산자 문자 입력 받기 
	printf("enter the calculation. :\n");
	scanf("%d %c %d", &x, &op, &y);
	
	//연산자에 따라 결과값을 ㄱ계산(result에 저장)
	if(op=='+') //+인 경우
		result=x+y;
	else if(op=='-')
		result=x-y;
	else if(op=='*')
		result=x*y;
	else if(op=='/')
		result=x/y;
	/*
	switch(op)
	{
		case '+' :
			result=x+y;
			break
	}
	*/
	//printf로 출력
	printf("=%i",result);
	
	
}
