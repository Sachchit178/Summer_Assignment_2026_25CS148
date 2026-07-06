#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, i;
    int maxAttempts = 5;

    srand(time(NULL));
    number = rand() % 100 + 1;

    printf("===== Number Guessing Game =====\n");
    printf("Guess a number between 1 and 100.\n");
    printf("You have only %d attempts.\n\n", maxAttempts);

    for(i = 1; i <= maxAttempts; i++)
    {
        printf("Attempt %d: ", i);
        scanf("%d", &guess);

        if(guess == number)
        {
            printf("\nCongratulations! You guessed the correct number.\n");
            printf("You guessed it in %d attempt(s).\n", i);
            return 0;
        }
        else if(guess < number)
        {
            printf("Too Low!\n");
        }
        else
        {
            printf("Too High!\n");
        }
    }

    printf("\nGame Over!\n");
    printf("You have used all %d attempts.\n", maxAttempts);
    printf("The correct number was %d.\n", number);

    return 0;
}