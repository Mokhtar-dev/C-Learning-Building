#include <stdio.h>
#include <string.h>
int main()
{
    char item[50] = "";
    float price = 0.0;
    int quantity = 0;
    char currency = '$';  // NOTE: when using char to store a singel character, you must use single quotes (' ') instead of double quotes (" ")
    float total_price = price * quantity;

    printf("what item do you want to add to the shopping cart ?\n");
    scanf("%s", item);
    printf("what is the price for each ?\n");
    scanf("%f", &price);
    printf("what is the quantity of the item you want to add to the shopping cart?\n");
    scanf("%d", &quantity);
    total_price = price * quantity;
    printf("your total price is: %c%.2f\n", currency, total_price); // added the currency symbol before the total price and formatted it to 2 decimal places using %.2f

    return 0;
}
