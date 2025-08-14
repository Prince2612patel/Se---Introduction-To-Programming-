//Explain decision-making statements in C (if, else, nested if-else, switch). 
//Provide examples of each. 

#include <stdio.h>

int main()
{
	int num;
	int month;
	
	printf("Enter the Number: ");
	scanf("%d",&num);
	
	if (num % 2 == 0)
	{
		printf("The Number is Even\n");
	}
	
	else
	{
		printf("The number is odd\n");
	}
	
	
	
	printf("Enter  the Month (1-12): ");
	scanf("%d",&month);
	switch (month)
	{
		case 1 : printf("January");
		break;
	
		case 2 : printf("Fabuary");
		break;


		case 3 : printf("March");
		break;

		case 4 : printf("April");
		break;
	
		case 5 : printf("May");
		break;
	
	
	
		case 6 : printf("June");
		break;
	
	
	
		case 7 : printf("July");
		break;
	
	
	
		case 8 : printf("August");
		break;
	
	
	
		case 9 : printf("September");
		break;
	
	
	
		case 10 : printf("Octomber");
		break;
	
	
	
		case 11 : printf("November");
		break;
	
	
	
		case 12 : printf("December");
		break;
    
	
		default: printf("Please Enter the Valid Input From (1 to 12)");
	}
	
	return 0;
}   


