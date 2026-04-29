#include <stdbool.h>
#include <stdio.h>

int main() {
    int status = 0;
    int green = 1;
    int yellow = 2;
    int red = 3;
    printf("enter the status:\n");
    scanf("%d", &status);

    if (green == status) {
        printf("Its green go");
    }
    if (yellow == status) {
        printf("Its Yellow get ready to move");
    }
    if (red == status) {
        printf("its red stop");
    }

    return 0;
}