#include <stdio.h>
// This program demonstrates variable scope in C.
// Variable scope refers to the region of the program where a variable is defined and can be accessed.

int add(int x , int y) {
    int result = x + y;  //--> this "result" cant be seen by the main function
    return result;
}

int main() {
    int result = add(10, 20); // So we can make a result variable again in the main function
    printf("The sum is: %d\n", result);
    return 0; // If u dont understand go find some one to tell u about it ??
}