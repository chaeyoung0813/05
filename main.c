#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int y;
	char op;
	int result;
	
	//�ΰ��� �Է� ����, �� ���� ������ ���� �Է� �ޱ� 
	printf("enter the calculation. :\n");
	scanf("%d %c %d", &x, &op, &y);
	
	//�����ڿ� ���� ������� �����(result�� ����)
	if(op=='+') //+�� ���
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
	//printf�� ���
	printf("=%i",result);
	
	
}
