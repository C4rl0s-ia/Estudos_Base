#include <stdio.h>
#include <math.h>

int main () {
    float tempCelsius, tempFahrenheit;
    
    printf("Digite sua temperatura em Celsius\n");
    scanf(" %f", &tempCelsius);
    
    tempFahrenheit = tempCelsius * 1.8 + 35;
    
    printf("Sua temperatura em Fahrenheit e %.2f°F", tempFahrenheit);
    
    return 0;

}