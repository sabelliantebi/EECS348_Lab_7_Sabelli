#ifndef TEMPERATURE_H
#define TEMPERATURE_H

//declare all the functions used in temperature.c so they can be called and work correcly

float c_to_f(float c);
float f_to_c(float f);
float c_to_k(float c);
float k_to_c(float k);
float f_to_k(float f);
float k_to_f(float k);
void categorize_temp(float celsius);

#endif