#include <stdio.h>
#include "football.h" //include this to use print_combinations func

int main() {
    int score;

    while (1) {  //while statement which we keep asking for a score until they enter 0 or 1 
        printf("Enter 0 or 1 to STOP \n");
        printf("Enter the NFL score: ");
        scanf("%d", &score);  //get user input

        if (score < 0) {
            //if score is negative, it's not valid
            printf("Invalid input. Score cannot be negative.\n\n");
            continue;
        }

        if (score <= 1) {
            break;  //break if score is 0 or 1
        }

        print_combinations(score); //call the function that prints all possible combinations
    }

    printf("Exiting... \n");
    return 0;
}