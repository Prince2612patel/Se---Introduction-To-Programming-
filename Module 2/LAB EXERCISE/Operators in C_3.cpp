// Write a C program that accepts two integers from the user and performs arithmetic
// , relational, and logical operations on them. Display the results.

#include <stdio.h>
int main()
{
	int n1;
	int n2;
	
	printf("Enter thr Number 1: ");
	scanf("%d",&n1);
	
	printf("Enter the number 2: ");
	scanf("%d",&n2);
	
	
	printf("\n Arithmatic Operator\n"); 
	
	printf("%d + %d = %d \n", n1, n2, n1 + n2);
	printf("%d - %d = %d \n", n1, n2, n1 - n2);
	printf("%d * %d = %d \n", n1, n2, n1 * n2);
	printf("%d / %d = %d \n", n1, n2, n1 / n2);
	printf("%d % %d = %d \n", n1, n2, n1 % n2);
	
	printf("\n Relational  Operator \n");
	
	printf("%d == %d :  %d\n",n1, n2, n1 == n2 ); 
	printf("%d != %d :  %d\n",n1, n2, n1 != n2 );
	printf("%d > %d :  %d\n",n1, n2, n1 > n2 );
	printf("%d < %d :  %d\n",n1, n2, n1 < n2 );
	
	printf("LogicaL Operator\n");
	
	printf("(%d > 0) && (%d > 0) : %d\n", n1, n2, (n1 > 0) && (n2 > 0));
    printf("(%d > 0) || (%d > 0) : %d\n", n1, n2, (n1 > 0) || (n2 > 0));
    printf("! (%d > 0) : %d\n", n1, !(n1 > 0));

	return 0;


}


