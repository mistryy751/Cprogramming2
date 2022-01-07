/*WAP to implement the following operations in file:
a. Create a file.
b. Write some data in a file.
c. Read the file content and print on the console.
d. Append some data in the same file.*/
#include <stdio.h>
#include <stdlib.h>
int createfile();
int writedata();
int readdata();
int appenddata();
int main()
{
    int num;
    FILE *fptr;
    printf("a. Create a file.\n");
    printf("b. Write some data in a file.\n");
    printf("c. Read the file content and print on the console.");
    printf("\nd. Append some data in the same file.\n");

    // use appropriate location if you are using MacOS or Linux
    fptr = fopen("program.txt", "w");

    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("Enter num: ");
    scanf("%d", &num);

    fprintf(fptr, "%d", num);
    fclose(fptr);

    return 0;
}