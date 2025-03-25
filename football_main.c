#include <stdio.h>

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

    printf("Exiting... \n");
    return 0;
}