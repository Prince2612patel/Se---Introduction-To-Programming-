// Structure in C

// Write a C program that defines a structure to store a student's details (name, 
//roll number, and marks). Use an array of structures to store details of 3 
//students and print them.

#include<stdio.h>
struct student{
	int rollNo;
	char name[20];
	float marks;
};
int main()
{
	struct student CE[3];
	struct student IT[3];
	
	
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("Enter the CE Student Info\n");
		printf("Student Roll no: ");
		scanf("%d",&CE[i].rollNo);
		
		printf("Student Name: ");
		scanf("%s",&CE[i].name);
		
		printf("Student Marks: ");
		scanf("%f",&CE[i].marks);
		
		printf("\n");
	}
 
	printf("\n \n");
	for(i=0;i<3;i++)
	{
		printf("CE The Roll No is %d\n",CE[i].rollNo );
		printf("CE Student name  is %s\n",CE[i].name );
		printf("CE Student Marks %f\n",CE[i].marks );
		printf("\n");
	}
	
}
