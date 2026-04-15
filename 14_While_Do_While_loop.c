#include <stdbool.h>
#include <stdio.h>
#include <windows.h>  //--> this is just to use the Sleep function to slow down the loop so we can see the output clearly "DELAY"

int main() {
    // while loop ---> Continuously executes a block of code as long as a specified condition is true.
    //               Condotion must be true to enter the loop.

    int X = 0;        //--> this is the initialization of the loop condition
    while (X < 10) {  //--> this is the condition of the loop

        printf("%d\n", X);  //--> this is the body of the loop
        Sleep(1000);        //--> this is just to slow down the loop so we can see the output clearly "DELAY"
        X++;                //--> this is the increment of the loop variable
    }
    printf("Loop ended.\n");

    do {  //--> this is the do while loop,
        printf("that is the DO while loop");
    } while (X < 15);  // it will execute the body of the loop at least once
                       // even if the condition is false
                       // because the condition is checked after the body of the loop is executed

    return 0;
}