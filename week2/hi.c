#include <cs50.h>
#include <stdio.h>

// A string is an array of characters. You can access ASCII code of each char i by printing 'string[i]'

int main(void)
{
    string s = "HI!";

    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
    // s[3] represents character \0 which represents the end of string
}