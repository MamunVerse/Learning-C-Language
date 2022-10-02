/*
Problem 1 : Write 2 functions thats print Assalamualaikum if user is Bangladeshi, print Namaste if user in Indian.  
And just print Hello for others.
*/

# include <stdio.h>

// Function declaration/prototype
void salam(); 
void namaste(); 

int main(){
    
    printf("Enter b for Bangladeshi & i for Indian : \n");

    char ch;
    scanf("%c", &ch);

    //  Conditionaly Function call

    if(ch == 'b'){
        salam();
    }else if(ch == 'i'){
        namaste();
    }else{
        printf("Hello \n");
    }

    return 0;
}

// Function defination
void salam(){
    printf("Assalamualaikum \n");
}
void namaste(){
    printf("Namaste \n");
}


