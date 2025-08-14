// Pointers in C

// Write a C program to demonstrate pointer usage. 
//Use a pointer to modify the value of a variable and print the result.
#include<stdio.h>
int main()
{
	int num = 50;
	int *ptr = &num;
	// Before any modification in pointer 
	
	printf("The value of num = %d\n",num);
	printf("Address of num = %d\n",ptr);
	printf("Value stored in pointer variable= %d \n",*ptr);
	
	printf("\n \n");
	
	printf("After change the ptr address\n");
	*ptr = 40;

	printf("After Modification in pointer value of num  = %d\n",num);
	printf("After modification in pointer value of address of num = %d\n",ptr);
	printf("Ater the modification in pointeer variable = %d",*ptr);
}
