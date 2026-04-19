#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Number Guessing Game
    srand(time(NULL));  // Seed the random number generator with the current time

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = (rand() % (max - min + 1)) + min;  // Generate a random number between min and max

    printf("*** GUESS THE NUMBER ***\n");
    do {
        printf("Guess the number between %d and %d: ", min, max);
        scanf("%d", &guess);
        tries++;
        if (guess > answer) {
            printf("The number is lower try again\n");
        }
       else if (guess < answer) {
            printf("The number is Higher try again\n");
        }
        else{

        }

    } while (guess != answer);

    printf("the answer is %d\n", answer);
    printf("You took %d tries.\n", tries);
}