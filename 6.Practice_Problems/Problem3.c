/*
Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit)
*/

#include <stdio.h>

int main() {
    float celsius, fahr;
    
    // Prompt user for input
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
    
    // Convert Celsius to Fahrenheit
    fahr = ((9.0 / 5.0) * celsius) + 32;
    
    // Display the result with two decimal places
    printf("The equivalent temperature in Fahrenheit is: %.2f°F\n", fahr);

    return 0;
}

/*
#include <stdio.h>

int main(){
    float c = 37.0, f;

    f = ((9.0/5.0)*c) + 32;
    printf("The value in Fahrenheit is %f", f);

    return 0;
}
*/