#include <stdio.h>
#include "temperature.h" //import the functions we defined earlier

int main() {
    float input_temp;
    char from, to;

    printf("Enter the temperature value: "); //ask user for input
    scanf("%f", &input_temp); //get the actual temp

    printf("Enter the original scale (C, F, or K): ");
    scanf(" %c", &from); //get the original scale

    printf("Enter the scale to convert to (C, F, or K): ");
    scanf(" %c", &to); //get the target scale

    if ((from == 'K' && input_temp < 0) ||  //check that kelvin cant be negatice and correct scales are used 
        (from != 'C' && from != 'F' && from != 'K') || 
        (to != 'C' && to != 'F' && to != 'K')) {

        printf("\nInvalid input.\n"); //let the user know is an invalid innput, and then let the, now whhat is the error 

        if (from == 'K' && input_temp < 0) {
            printf("Temperature can't be negative in Kelvin \n");
        }

        if (from != 'C' && from != 'F' && from != 'K') {
            printf("Invalid scale. Use C F or K\n");
        }

        if (to != 'C' && to != 'F' && to != 'K') {
            printf("Invalid scale. Use C, F, or K\n");
        }

        return 1; //exit the program with error
    }

    if (from == to) { //check that same scale conversions cant be made, return error when this is done 
        printf("\nInvalid conversion: Cannot convert to the same scale.\n");
        return 1;
    }

    float result;
    float in_celsius;

    if (from == 'C' && to == 'F') { //handle all possible conversions
        result = c_to_f(input_temp); //call func c_to_f to perform the cnversion from celsius to farenheit 
        in_celsius = input_temp; //already in celsius no need to convert
    } else if (from == 'C' && to == 'K') {
        result = c_to_k(input_temp); //call func c_to_k to perform the cnversion from celsius to kevin
        in_celsius = input_temp; //still inn celsius 
    } else if (from == 'F' && to == 'C') {
        result = f_to_c(input_temp); //call func f_to_c to perform the cnversion from farenheit to celsius 
        in_celsius = result; //store the result 
    } else if (from == 'F' && to == 'K') {
        result = f_to_k(input_temp);  //call func f_to_k to perform the cnversion from farenheit to kelvin
        in_celsius = f_to_c(input_temp); //get val in celsius
    } else if (from == 'K' && to == 'C') {
        result = k_to_c(input_temp); //call func k_to_c to perform the cnversion from kelvn to celsius
        in_celsius = result;
    } else if (from == 'K' && to == 'F') {
        result = k_to_f(input_temp); //call func k_to_f to perform the cnversion from kelvn to farenheit
        in_celsius = k_to_c(input_temp); //convert to celsius 
    } else {
        printf("Invalid input. Use C, F, or K for temperature scales.\n");
        return 1; //exit the prgo with the error 
    }

    printf("\nConverted temperature: %.2f %c\n", result, to); //print result

    categorize_temp(in_celsius);//categorize and print weather advice by calling the func

    return 0;
}