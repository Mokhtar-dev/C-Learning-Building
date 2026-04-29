#include <stdio.h>
int main() {
    int num = 0;
    int num_2 = 0;

    printf("Enter the first number:\n");
    scanf("%d", &num);

    printf("Enter the Second number\n");
    scanf("%d", &num_2);

    int num_sum = num + num_2;
    printf("the sum is: %d\n", num_sum);
    
    if (num_sum % 2 == 0) {
        printf("the sum is even");
    } else {
        printf("the sum is odd");
    }
}
