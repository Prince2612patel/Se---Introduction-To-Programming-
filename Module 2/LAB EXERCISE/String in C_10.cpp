// 10. Strings in C
//  Write a C program that takes two strings from the user and concatenates them using strcat().
// Display the concatenated string and its length using strlen().


//#include<stdio.h>
//int main()
//{
//
//	char str1[100];
//	char str2[200];
//	
//	printf("Enter the Value Of Str1");
//	fgets(str1,);
//	
//	printf("Enter the Value of Ste2");
//	gets(str2);
//	
//	// Concatenate the string 2( str2 ) to string 1 (str1)
//	strcat(str1,str2);
//	printf("Concatenated String %s",str1);
//	
//	return 0;
//}





#include <stdio.h>
#include <string.h>   // Before Use Any String Library Function Used This Library;

int main() {
    char str1[100], str2[100];

    // Input two strings
    printf("Enter first string: ");
    gets(str1);  // Note: unsafe, better to use fgets() in real projects

    printf("Enter second string: ");
    gets(str2);

    // Concatenate str2 to str1
    strcat(str1, str2);

    // Display result
    printf("\nConcatenated String: %s", str1);
    printf("\nLength of Concatenated String1: %d\n", strlen(str1));
	
	// Length of str2

	printf("Length of the Concated String2: %d\n",strlen(str2));
    return 0;
}


