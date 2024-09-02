// Q.1 Temperature Converter
// Develop a program that converts temperature from degrees Celsius to Fahrenheit using the
// formula: °F = (9/5 × °C) + 32

#include <stdio.h>

float ctof(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    float celsius, fahrenheit;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = ctof(celsius);

    printf("The temperature in Fahrenheit: %.1f\n", fahrenheit);

    return 0;
}
