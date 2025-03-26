#include <stdio.h>
#include "football.h" //include this to use print_combinations and count_combinations

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

        printf("\nPossible combinations of scoring plays if a team's score is %d:\n", score);
        print_combinations(score);  // Use the new function to print combinations
        printf("\n");  //spacing between entries
    }

    printf("Exiting... \n");
    return 0;
}