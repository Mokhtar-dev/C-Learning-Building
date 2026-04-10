#include <stdbool.h>
#include <stdio.h>

void hello(char name[], int age); //--> this is the function prototype for the hello function
// which is jut making the compiler aware of the function before its actual implementation in the code     

int main() {

    // Function prototype ---> provides the compiler w/ information about the function`s:
    //                          name , return type , and parameters before its actual implementation in the code.
    //                        This allows us to call the function before its definition in the code.
    //                         improves readability, organization, and helps prevent errors.


    return 0;

}

void hello(char name[], int age){ //--> this function is defined after the main function 
    //but we can call it in the main function because of the function prototype
    // if we dont do that we get an error
    printf("Hello %s, you are %d years old.\n", name, age);
}