// Write a C program to create a file, write a string into it, 
//close the file, then open the file again to read and display its contents.

// 12. File Handling in C

#include <stdio.h>

int main() {
    FILE *fptr;
    char str[100];

    // Step 1: Create and write to file
    fptr = fopen("myfile.txt", "w"); // open in write mode
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter a string to write to file: ");
    gets(str);

    fprintf(fptr, "%s", str); // write string to file
    fclose(fptr); // close file

    // Step 2: Read and display from file
    fptr = fopen("myfile.txt", "r"); // open in read mode
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nContents of the file:\n");
    while (fgets(str, sizeof(str), fptr)) {
        printf("%s", str); // read and print content
    }

    fclose(fptr); // close file
    return 0;
}



