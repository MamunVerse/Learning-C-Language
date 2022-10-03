# include <stdio.h>

int main(){
    char name[] = {'M','A','M','U','N', '\0'}; // Null character '\0' for make it string array.
    char name2[] = "Mamunur Rashid"; // In here compailer will auto add '\0' at the end. ("") is must for string array.

    printf("%s \n", name);
    printf("%s \n", name2);

    return 0;
}