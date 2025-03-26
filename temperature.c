#include <stdio.h>
#include "temperature.h"

float celsius_to_fahrenheit(float c) { //convert celsius to fahrenheit
    return (c * 9.0 / 5.0) + 32.0;
}

float fahrenheit_to_celsius(float f) { //convert fahrenheit to celsius
    return (f - 32.0) * 5.0 / 9.0;
}

float celsius_to_kelvin(float c) { //convert celsius to kelvin
    return c + 273.15;
}

float kelvin_to_celsius(float k) { //convert kelvin to celsius
    return k - 273.15;
}

float fahrenheit_to_kelvin(float f) { //convert fahrenheit to kelvin
    return (f - 32.0) * 5.0 / 9.0 + 273.15;
}

float kelvin_to_fahrenheit(float k) { //convert kelvin to fahrenheit
    return (k - 273.15) * 9.0 / 5.0 + 32.0;
}

void categorize_temp(float celsius) { //categorize temperature in celsius and print advisory
    if (celsius < 0) {
        printf("Temperature category: Freezing\n");
        printf("Weather advisory: For sure wear a jacket and some gloves!\n");
    } else if (celsius <= 10) {
        printf("Temperature category: Cold\n");
        printf("Weather advisory: Wear a jacket!\n");
    } else if (celsius <= 25) {
        printf("Temperature category: Comfortable\n");
        printf("Weather advisory: You should feel comfortable.\n");
    } else if (celsius <= 35) {
        printf("Temperature category: Hot\n");
        printf("Weather advisory: Drink lots of water!\n");
    } else {
        printf("Temperature category: Extreme Heat\n");
        printf("Weather advisory: Avoid going outside for a long time.\n");
    }
}

