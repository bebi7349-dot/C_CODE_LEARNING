#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char *choices[] = {"Rock", "Paper", "Scissors"};
    int user, computer;
    srand(time(0));

    printf("0 = Rock, 1 = Paper, 2 = Scissors\n");
    printf("Enter your choice: ");
    scanf("%d", &user);
    computer = rand() % 3;

    printf("You chose %s, Computer chose %s\n", choices[user], choices[computer]);

    if (user == computer) printf("It's a draw!\n");
    else if ((user==0 && computer==2) || (user==1 && computer==0) || (user==2 && computer==1))
        printf("You win!\n");
    else
        printf("Computer wins!\n");

    return 0;
}
