/*
Practice 1 : Make a program to input student information from a user & enter it to a file.
*/

# include <stdio.h>

int main(){

    FILE *fptr;

    fptr = fopen("student.txt", "w");

    char name[100];
    printf("Enter Name : \n");
    scanf("%s", name);

    int age;
    printf("Enter Age : \n");
    scanf("%d", &age);

    float cgpa;
    printf("Enter CGPA : \n");
    scanf("%f", &cgpa);

    fprintf(fptr, "Name : %s, Age : %d, CGPA : %f", name, age, cgpa);

    fclose(fptr);

    return 0;
}

