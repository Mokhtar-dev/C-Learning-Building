#include <stdio.h>
#include <windows.h>
int main() {
    // break = Breaks out of a loop or switch statement
    // continue = Skips the current iteration of a loop and continues with the next iteration
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;  // Skip the rest of the loop body when i is 4
        }

        if (i == 8) {
            break;  // Exit the loop when i is 8
        }

        printf("%d ", i);
    }

    return 0;
}