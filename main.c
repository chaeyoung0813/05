#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 59;
	int x;
	int num=0;
	
	do
	{
	printf("input number");	//�Է��϶� ���� ���
	scanf("%d", &x);//�Է��� ����
    num++;
	if(x>answer)
		printf("low!\n");
	else if(x<answer)
		printf("high!\n");
	
		 	//�Է� ���ڰ� ���亸�� ū�� ������ ��� 
	}
	while(x!=answer);
	{
	printf("Congratulation!\n");
	printf("Number of trial =%i\n",num);//�õ� Ƚ�� ��� 
	}

	return 0;
}
	

