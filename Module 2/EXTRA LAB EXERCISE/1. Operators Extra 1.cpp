// Extra Lab Exercise
// 1. Operators 

// LAB EXERCISE 1: Simple Calculator 

#include<stdio.h>
int main()
{
	int num1;
	int num2;
	char Op;
	printf("Enter the Nuumber 1 ");
	scanf("%d",&num1);
	
	printf("Enter the Operateor + - * / %% ");
	scanf(" %c",&Op);
	
	printf("Enter the Nuumber 2 ");
	scanf("%d",&num2);
	switch(Op)
	{
		case '+': printf("Sum = %d \n", num1 + num2);
		break;
		
		case '-': printf("Sum = %d\n", num1 - num2);
		break;
		
		case '*': printf("Sum = %d \n", num1 * num2);
		break;

		case '/':
			if (num2 != 0 )
				printf("Division = %d \n",num1/num2);
			else
				printf("Invalid Input");
		break;
	
		case '%':
			if ((int)num2 != 0)
				printf("Modulo = %d", int(num1) % int(num2)); 
			else
			printf("Error: Modulus by zero is not allowed.\n"); 
		break;

		default:
			printf("Enter a valid Operator");
	}
}
