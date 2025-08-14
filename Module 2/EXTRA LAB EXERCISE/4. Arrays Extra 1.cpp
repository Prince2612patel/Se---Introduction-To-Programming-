//// 4. Arrays 
////LAB EXERCISE 1: Maximum and Minimum in Array 
//   Write a C program that accepts 10 integers from the user and stores them in an array. The 
//    program should then find and print the maximum and minimum values in the array. 
//       Challenge: Extend the program to sort the array in ascending order. 


//#include<stdio.h>
//int main()
//{
//	int num;
//	int i;
//	int max , min;
//	int numbers[10];
//	
//	
//	for(i=0;i<10;i++)
//	{
//		printf("Enter the Number %d ",i);
//		scanf("%d", &numbers[i]);
//	}
//	
//	max = numbers[0];
//	min = numbers[0];
//												// 5 7 3 4 2 1 10 14 5 34  
//	for(i=1;i<10;i++)
//	{
//		if(numbers[i] > max)
//		{
//			max = numbers[i];
//		}
//		
//
//		if(numbers[i] < min)
//		{
//			min = numbers[i];
//		}
//	}
//	
//	printf("Maximum value = %d\n", max);
//    printf("Minimum value = %d\n", min);
//}



// Challenge: Extend the program to sort the array in ascending order. 

#include <stdio.h>

int main() {
    int i, j, temp;
    int max, min;
    int numbers[10];

    // Input 10 integers
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    // Initialize max and min
    max = numbers[0];
    min = numbers[0];

    // Find max and min
    for(i = 1; i < 10; i++) {
        if(numbers[i] > max) {
            max = numbers[i];
        }
        if(numbers[i] < min) {
            min = numbers[i];
        }
    }

    // Print max and min
    printf("Maximum value = %d\n", max);
    printf("Minimum value = %d\n", min);

    // Sort the array in ascending order using Bubble Sort
    for(i = 0; i < 10 - 1; i++) 
	{
        for(j = 0; j < 10 - 1 - i; j++) 
		{
            if(numbers[j] > numbers[j + 1]) 
			{
                // Swap numbers[j] and numbers[j+1]
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted array in ascending order:\n");
    for(i = 0; i < 10; i++) 
	{
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

