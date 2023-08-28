#include <stdio.h> // header file library | allows work with input & output functions
// variable types | int, float, char
// format specifiers | %d, %f, %c 
int num = 12;
float floatNum = -5.99;
char charVal = 'X'; // must use single quotes

// function
int main() {
    // outputs text in terminal w/ escape sequences
    printf("I am learning how to \"C\"...\tfor the first time.\n");
    printf("%d\n", num);
    printf("%f\n", floatNum);
    printf("%c\n", charVal);
    // return ends the main() function
    return 0;
}