#ifndef TEMPERATURE_H
#define TEMPERATURE_H

//declare all the functions used in temperature.c so they can be called and work correcly

float celsius_to_fahrenheit(float c);
float fahrenheit_to_celsius(float f);
float celsius_to_kelvin(float c);
float kelvin_to_celsius(float k);
float fahrenheit_to_kelvin(float f);
float kelvin_to_fahrenheit(float k);
void categorize_temp(float celsius);

#endif