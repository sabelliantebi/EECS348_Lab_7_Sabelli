#include <stdio.h>
#include "football.h" //include this to use print_combinations and count_combinations

// Function to count and return the number of combinations
int count_combinations(int score) {
    int count = 0;

    //loop over all possible numbers of each scoring play
    for (int touchd_2 = 0; touchd_2 <= score / 8; touchd_2++) {  //touchdown + 2 points --> 8 
        for (int touchd_1 = 0; touchd_1 <= score / 7; touchd_1++) {  //touchdown + 1point --> 7 
            for (int touchd_0 = 0; touchd_0 <= score / 6; touchd_0++) {  //normal touchdown --> 6 
                for (int fg = 0; fg <= score / 3; fg++) {  //field goal = 3 pts
                    for (int safety = 0; safety <= score / 2; safety++) {  //safety --> 2 pts 
                        int total = touchd_2 * 8 + touchd_1 * 7 + touchd_0 * 6 + fg * 3 + safety * 2; //calculate the total
                        if (total == score) {
                            count++; //if it matches, increment the counter
                        }
                    }
                }
            }
        }
    }
    return count; //return total number of combinations
}

//func to print all valid combinations
void print_combinations(int score) {
    printf("\nPossible combinations of scoring plays if a team's score is %d:\n", score);

    //we try every combination that adds up to the score
    //loop over all possible numbers of each scoring play
    for (int touchd_2 = 0; touchd_2 <= score / 8; touchd_2++) {  //touchdown + 2 points --> 8 
        for (int touchd_1 = 0; touchd_1 <= score / 7; touchd_1++) {  //touchdown + 1point --> 7 
            for (int touchd_0 = 0; touchd_0 <= score / 6; touchd_0++) {  //normal touchdown --> 6 
                for (int fg = 0; fg <= score / 3; fg++) {  //field goal = 3 pts
                    for (int safety = 0; safety <= score / 2; safety++) {  //safety --> 2 pts 
                        int total = touchd_2 * 8 + touchd_1 * 7 + touchd_0 * 6 + fg * 3 + safety * 2; //calculate the total

                        if (total == score) {
                            //if the total matches the score, print: 
                            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n",
                                touchd_2, touchd_1, touchd_0, fg, safety);
                        }
                    }
                }
            }
        }
    }

    printf("\n");  //spacing between entries
}