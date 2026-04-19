#include <stdio.h>
int main() {
    // A loop inside another loop.

    for (int i = 1; i <= 5; i++) { // Outer loop
        for (int j = 1; j <= 3; j++) { // Inner loop
            printf("i: %d, j: %d\n", i, j);
        }
    }
    // Best practice to use a different variable name for the inner loop to avoid confusion and potential bugs.

    return 0;
}