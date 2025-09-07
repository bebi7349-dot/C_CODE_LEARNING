#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1;

    printf("Guess the number (1–100): ");
    do {
        scanf("%d", &guess);
        attempts++;
        if (guess > number) printf("Too high!\n");
        else if (guess < number) printf("Too low!\n");
        else printf("Correct! You guessed in %d tries.\n", attempts);
    } while (guess != number);

    return 0;
}
