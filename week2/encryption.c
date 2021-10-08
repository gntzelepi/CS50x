#include <stdio.h>
#include <cs50.h>
#include <string.h>

// A program that converts plaintext to ciphertext. The algorithm converts each character to the following, according to ASCII codes.

int main(void)
{
    // Prompt user for a message
    string s = get_string("Insert text to encrypt: ");

    printf("Encrypted message: ");

    // Replace each character with the following one
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i] + 1);
    }
    printf("\n");
}