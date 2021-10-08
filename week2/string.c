#include <cs50.h>
#include <stdio.h>
#include <string.h>

// A program that takes string input and outputs chars and their ASCII code

int main(void)
{
    string s = get_string("Insert a word: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("ASCII code for '%c' is %i.\n", s[i], s[i]);
    }
}