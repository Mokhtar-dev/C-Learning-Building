#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getcomputerschoice();
int getuserschoice();
void checkwinner(int userschoice, int computerschoice);

int main() {
    srand(time(NULL));
    int random_num = rand() % 3 + 1;

    printf("*** ROCK PAPER SICORSS GAME ***\n");

    int userschoice = getuserschoice();
    int computerchoice = getcomputerschoice();

    switch (userschoice) {
        case 1:
            printf("you chose rock\n");
            break;
        case 2:
            printf("you chose paper\n");
            break;
        case 3:
            printf("you chose sicorss\n");
            break;

        default:
            break;
    }
    switch (computerchoice) {
        case 1:
            printf("computer chose rock\n");
            break;
        case 2:
            printf("computer chose paper\n");
            break;
        case 3:
            printf("computer chose sicorss\n");
            break;

        default:
            break;
    }

    checkwinner(userschoice, computerchoice);

    return 0;
}

int getcomputerschoice() {
    return rand() % 3 + 1;
}
int getuserschoice() {
    int choice = 0;
    do {
        printf("Choose your option:\n");
        printf("Enter 1 for rock , 2 for paper , 3 for sicorss: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 3);
    return choice;
}
void checkwinner(int userschoice, int computerschoice) {
    if (userschoice == computerschoice) {
        printf("It's a tie!\n");
    } else if ((userschoice == 1 && computerschoice == 3) || (userschoice == 2 && computerschoice == 1) || (userschoice == 3 && computerschoice == 2)) {
        printf("You win!\n");
    }
    else {
        printf("Computer wins!\n");
    }
}