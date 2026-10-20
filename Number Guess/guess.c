#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int number = rand() % 100 + 1;
    int guess;

    printf("==============================\n");
    printf("    ***** GUESSING GAME *****\n");
    printf("==============================\n");

    while (1) {
        printf("Guess a number (1-100): ");
        scanf("%d", &guess);

        if (guess < number)
            printf("Too Low!\n");
        else if (guess > number)
            printf("Too High!\n");
        else {
            printf("***** Correct! You Win! *****\n");
            break;
        }
    }

    return 0;
}