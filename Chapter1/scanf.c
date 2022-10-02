# include <stdio.h>

int main(){
    
    int a, b, sum; // declare all variable

    printf("Enter a \n");
    scanf("%d", &a);  // Get a variable data from user using scanf. 

    printf("Enter b \n");
    scanf("%d", &b); // Get b variable data from user using scanf.

    sum = a+b;   // Adding a & b variable data into sum variable.

    printf("The sum is : %d \n", sum); // Print sum of a+b.


    return 0;
}