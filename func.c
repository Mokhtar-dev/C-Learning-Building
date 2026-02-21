#include <stdio.h>
#include <stdbool.h>
int main()
{
    // this is my first C program

    /*this is
    a multi-line comment*/

    printf("Hello, World!\n");

    printf("This is a simple C program.\n"); // the  \n is used to print a new line

    // varialbes in C
    int myNum = 5;             // Integer (whole number)                 (4 bytes)
    float myFloatNum = 5.99;   // Floating point number                  (4 bytes)
    double myDoubleNum = 9.98; // Double-precision floating point number (8 bytes)
    char myLetter = 'D';       // Character                              (1 byte)
    char myString[] = "Hello"; // String (array of characters)           (6 bytes, including the null terminator) can also take more than 6 bytes if the string is longer
    bool isTrue = true;        // Boolean (true or false)                (1 byte)

    // formatting output in C
    // format specifier = special token that begin with % symbol,
    //                   followed by a chracter that indicates the type of data to be printed
    //                   and optional modifiers that specify the width, precision, or other formatting options for the output
    //                   they control how the output is formatted and displayed on the screen

    printf("Integer: %d\n", myNum);       // the %d is used to print an integer value
    printf("Float: %f\n", myFloatNum);    // the %f is used to print a float value
    printf("Double: %lf\n", myDoubleNum); // the %lf is used to print a double value
    printf("Character: %c\n", myLetter);  // the %c is used to print a character
    printf("String: %s\n", myString);     // the %s is used to print a string
    printf("Boolean: %d\n", isTrue);      // the %d is used to print a boolean value (1 for true, 0 for false)

    // operators in C
    int a = 10;
    int b = 5; // ---> NOTE: U CAN NOT RETAIN THE DECIMAL WHEN DIVIDING TWO INTEGERS, IT WILL RETURN AN INTEGER VALUE, NOT A FLOATING POINT VALUE
    int c = 2;
    int sum = a + b;        // addition operator
    int difference = a - b; // subtraction operator
    int product = a * b;    // multiplication operator
    int quotient = a / b;   // division operator
    int modulus = a % b;    // modulus operator (returns the remainder of the division)
    int increment = a++;    // increment operator (increases the value of a by 1)
    int decrement = b--;    // decrement operator (decreases the value of b by 1)
    a += 2;             // addition assignment operator (adds c to a and assigns the result to a)
    b -= 4;             // subtraction assignment operator (subtracts c from b and assigns the result to b)

    // constants in C
    const int myConstNum = 10; // this is a constant variable, it cannot be changed after it is assigned a value
    const float pi = 3.14;     // this is a variable, it can be changed after it is assigned a value
    printf("Pi is: %f\n", pi);

    return 0;
}