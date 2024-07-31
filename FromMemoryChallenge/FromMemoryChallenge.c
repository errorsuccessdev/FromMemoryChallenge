// Need OBS to hide windows when they are not the top level window

// Next: random number guesser game.

#include <stdio.h>

#define MAXLEN      500
#define NUMELEMENTS 3

int main()
{
    // Research: Is this valid C syntax or is it a C++ thing?
    char myString[NUMELEMENTS][MAXLEN] = 
        { "Twitch", "Viewers", "lowluds" };
    for (int element = 0;
         element < NUMELEMENTS;
         element++)
    {
        printf("%s, %s!\n", "Hello", myString[element]);
    }

    char buffer[MAXLEN];

    printf("%s\n", "Say something to stdin! ");
    fgets(buffer, MAXLEN, stdin);

    // Research: Is there a better way to handle this?
    buffer[MAXLEN - 1] = 0;

    printf("%s\n", buffer);
}
