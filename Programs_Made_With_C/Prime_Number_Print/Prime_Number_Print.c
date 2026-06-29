#include <stdio.h>
int main() {
    /* local variable definition */
    int i, j;
    for (i = 2; i <= 100; i++) {
        for (j = 2; j <= (i / 2); j++) {
            if (i % j == 0) {
                printf("%d is not prime\n", i);
               break;
            }
        }
        if (j>(i/j))
        {
            printf("%d is prime\n", i);
        }
        
        
    }
    return 0;
}