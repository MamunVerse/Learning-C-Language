# include <stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main(){
    
    int x = 3;
    int y = 5;

    swap(x, y);
    printf("x = %d & y = %d \n", x, y); // Swap not working here

    _swap(&x, &y);
    printf("x = %d & y = %d \n", x, y); // Swap working here

    return 0;

}

// Call by value
void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
}


// Call by referance
void _swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
