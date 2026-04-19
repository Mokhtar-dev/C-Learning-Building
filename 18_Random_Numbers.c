#include <stdio.h>
#include <stdlib.h>  // For rand() and srand()
#include <time.h>    // For time()
int main() {
    // Pseudo-random = Appear random but are determined by a
    //             mathematical formula or algorithm that uses a seed value
    //             to generate a predictable sequence of numbers.
    //             Advanced: Mersenne Twister or /dev/random

    srand(time(NULL));  // Seed the random number generator with the current time
    printf("Random number between 1 and 2: %d\n", (rand()%2)+1); // Generate a random number between 0 and 99

    // Alternative
   int max = 10;
   int min = 1;
   int random_number = (rand() % (max - min + 1)) + min; // Generate a random number between min and max
   printf("Random number between %d and %d: %d\n", min, max, random_number);
    return 0;
}