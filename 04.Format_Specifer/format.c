#include <stdio.h>

int main() {
    // Declare and initialize different types of variables
    int intVar = 10; // Integer variable
    float floatVar = 12.34; // Floating-point variable
    char charVar = 'A'; // Character variable
    double doubleVar = 123.456789; // Double precision floating-point variable
    char strVar[] = "Hello, World!"; // String variable

    // Print variables using different format specifiers
    printf("Integer (%%d): %d\n", intVar); // %d for integers
    printf("Float (%%f): %f\n", floatVar); // %f for floats
    printf("Character (%%c): %c\n", charVar); // %c for characters
    printf("Double (%%lf): %lf\n", doubleVar); // %lf for double precision floats
    printf("String (%%s): %s\n", strVar); // %s for strings
    printf("Hexadecimal (%%x): %x\n", intVar); // %x for hexadecimal representation
    printf("Octal (%%o): %o\n", intVar); // %o for octal representation
    printf("Scientific Notation (%%e): %e\n", doubleVar); // %e for scientific notation
    printf("Fixed-Point Notation (%%.2f): %.2f\n", floatVar); // %.2f to limit decimal places
    
    return 0;
}