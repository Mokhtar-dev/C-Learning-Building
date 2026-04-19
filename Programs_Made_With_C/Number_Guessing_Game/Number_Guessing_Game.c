#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    printf("GUESS THE NUMBER\n");
    printf("Guess the number between 0 and 100: ");
    int Number_Guessed = 0;
    scanf("%d", &Number_Guessed);

    srand(time(NULL));  // making sure that number is going to be changing every time
    int random_number = rand() % 100 + 1;

    while (Number_Guessed != random_number) {
        if (Number_Guessed > random_number) {
            printf("the number u guessed should be lower:");
            scanf("%d", &Number_Guessed);
        }
        if (Number_Guessed < random_number) {
            printf("the number u guessed should be Higher: ");
            scanf("%d", &Number_Guessed);
        }
    }

    if (Number_Guessed == random_number) {
        printf("the number u guessed is correct it was: %d", random_number);
    }

    // took me 15 min without AI DONT USE AI
    // I am trying to not use AI U should too, ty ♥
    return 0;
}