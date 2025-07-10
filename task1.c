#include <stdio.h>
#include <conio.h>
float celsiusToFahrenheit(float c);
float celsiusToKelvin(float c);
float fahrenheitToCelsius(float f);
float fahrenheitToKelvin(float f);
float kelvinToCelsius(float k);
float kelvinToFahrenheit(float k);

int main() {
    float temperature;
    char unit[20];

    printf(" Temperature Converter \n");
    printf("Enter the temperature value: ");
    scanf("%f", &temperature);

    printf("Enter the unit (Celsius,Fahrenheit,Kelvin): ");
    scanf("%s", unit);

    for(int i = 0; unit[i]; i++) {
        unit[i] = tolower(unit[i]);
    }

    if(strcmp(unit, "celsius") == 0 || strcmp(unit, "c") == 0) {
        printf("\nInput: %.2f degree celsius\n", temperature);
        printf("Fahrenheit: %.2f degree fahrenheit\n", celsiusToFahrenheit(temperature));
        printf("Kelvin: %.2fkelvin\n", celsiusToKelvin(temperature));
    }
    else if(strcmp(unit, "fahrenheit") == 0 || strcmp(unit, "f") == 0) {
        printf("\nInput: %.2f degree fahrenheit\n", temperature);
        printf("Celsius: %.2f degree celsius\n", fahrenheitToCelsius(temperature));
        printf("Kelvin: %.2f kelvin\n", fahrenheitToKelvin(temperature));
    }
    else if(strcmp(unit, "kelvin") == 0 || strcmp(unit, "k") == 0) {
        printf("\nInput: %.2f kelvin\n", temperature);
        printf("Celsius: %.2f degree celsius\n", kelvinToCelsius(temperature));
        printf("Fahrenheit: %.2f degree fahrenheit\n", kelvinToFahrenheit(temperature));
    }
    else {
        printf("Invalid unit! Please use Celsius, Fahrenheit, or Kelvin.\n");
    }

    return 0;
}


float celsiusToFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32;
}

float celsiusToKelvin(float c) {
    return c + 273.15;
}

float fahrenheitToCelsius(float f) {
    return (f - 32) * 5.0 / 9.0;
}

float fahrenheitToKelvin(float f) {
    return (f - 32) * 5.0 / 9.0 + 273.15;
}

float kelvinToCelsius(float k) {
    return k - 273.15;
}

float kelvinToFahrenheit(float k) {
    return (k - 273.15) * 9.0 / 5.0 + 32;
}





