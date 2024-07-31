// Need OBS to hide windows when they are not the top level window

// Don't forget to look at research comments!

// Next: random number guesser game.

#include <stdio.h>

// Research: Is this the bad stdlib?
#include <stdlib.h>

#define NOT !

#define MAX_STRING_LEN  500
#define GAME_MIN_NUMBER 1
#define GAME_MAX_NUMBER 10

// Why no bools in C? :( Because I need to git gud.

int validateInput(char* input);

int main()
{
    char buffer[MAX_STRING_LEN];
    int guess = 0;
    int answer = 6;

    // TODO: Way to exit the game
    while (1)
    {
        printf(
            "Pick a number between %d and %d: ",
            GAME_MIN_NUMBER,
            GAME_MAX_NUMBER
        );
        fgets(
            buffer,
            MAX_STRING_LEN, 
            stdin
        );

        // Research: Is there a better way to handle this?
        buffer[MAX_STRING_LEN - 1] = 0;

        guess = validateInput(buffer);
        
        // If their guess is not valid, prompt them again immediately
        if (guess == 0)
        {
            continue;
        }
        printf(
            "You guessed %d. ", 
            guess
        );
        if (guess == answer)
        {
            printf("That's correct!\n");
            break;
        }
        else if (guess < answer)
        {
            printf("The answer is higher.\n");
        }
        else
        {
            printf("The answer is lower.\n");
        }
    }
}

int validateInput(char* input)
{
    int inputAsInt = atoi(input);

    if ((inputAsInt >= GAME_MIN_NUMBER) &&
        (inputAsInt <= GAME_MAX_NUMBER))
    {
        return inputAsInt;
    }
    else
    {
        return 0; // Not valid for our purposes
    }
}