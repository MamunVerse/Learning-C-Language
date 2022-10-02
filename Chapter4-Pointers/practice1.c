# include <stdio.h>

int main(){
    
    int x;
    int *ptr;

    ptr = &x;

    *ptr = 0; // x = 0

    printf("X = %d\n", x); // x = 0
    printf("*ptr = %d\n", *ptr); // x = 0

    *ptr += 5;
    printf("X = %d\n", x); // x = 5
    printf("*ptr = %d\n", *ptr); // x = 5

    (*ptr)++;
    printf("X = %d\n", x); // x = 6
    printf("*ptr = %d\n", *ptr); // x = 6

    return 0;

}

