#include <stdio.h>
#include <windows.h>

int main() {
    // for loop = Repeat some code a certain amount of times
    //             for (initialization; condition; update)
    int n = 0;
    printf("Enter a number:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        Sleep(1000); // Sleep for 1 second (Delay)
        printf("*\n");
    }

    return 0;
}
