/*
Practice 3 : Write a function to reverse an array.
*/


# include <stdio.h>

int reverse(int arr[], int n);
void printArr(int arr[], int n);

int main(){
    int arr[] = {1,2,3,4,5};

    reverse(arr, 5);

    printArr(arr, 5);

    return 0;
} 
void printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    
}
int reverse(int arr[], int n){
    for (int i = 0; i < n/2; i++)  //  n/2 mins loop will work half of n value.
    {
        int firstVal = arr[i]; // In first loop arr[i] = 0;
        int secondVal = arr[n-i-1]; // In first loop arr[n-i-1] = arr[5-0-1] = 4;

        arr[i] = secondVal; // Now arr[0]  value =  arr[4] value;
        arr[n-i-1] = firstVal; // Now arr[4] value = arr[0] value;

    }
    
}

