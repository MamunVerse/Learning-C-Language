# include <stdio.h>

int main(){
    
    int i = 1;
    int number;

    printf("Enter Number : \n");
    scanf("%d", &number);

    while(i <= number)
    {
        printf("%d \n", i);

        i++;
    }

    return 0;
}

