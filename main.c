#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum=0;
	int x;
	int i;

	
	printf("정수를 입력하세요. : \n");
	scanf("%d",&x);
	
	//for문을 활용해서 1부터 x까지 sum에 더하는 코드
	for(i=0;i<=x;i++) //반복(초기식, 조건식, 증감식) 
		sum=sum+i;
		
	printf("더하기 결과는 %d입니다. \n",sum); //결과출 
	
}
