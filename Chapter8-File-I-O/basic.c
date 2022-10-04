#include <stdio.h>


int main()
{

    /*
    # File Opening Models
        "r" oprn to read
        "rb" open to read in binary
        "w" open to write
        "wb" open to write in binary
        "a" open to append

    # Reading from a file
        char ch;
        fscanf(fptr, "%c", &ch);

    # Write to a file.
        char ch = 'A';
        printf(fptr, "%c", ch);

    # Read & Write a char
        fgetc(fptr);
        fputc('A',fptr);

    */
    

    FILE *fptr;

    fptr = fopen("test.txt", "r");

    // if(fptr == NULL){
    //     printf("File doesn't exist\n");
    // }else{
    //     fclose(fptr);
    // }

    char ch;

    fscanf(fptr, "%c", &ch);

    printf("Character = %c\n", ch);

    fclose(fptr);

    return 0;
}

