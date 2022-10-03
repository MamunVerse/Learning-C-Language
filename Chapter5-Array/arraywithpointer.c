# include <stdio.h>

int main(){
    
    int aadhar[5];

    // Input
    int *ptr = &aadhar[0];
    for(int i=0; i<5; i++){
        printf("%d index : ", i);
        scanf("%d", (ptr+i));
    }

    // Output
    for(int i=0; i<5; i++){
        printf("%d index = %d \n", i, *(ptr+i));
    }

    return 0;
} 

