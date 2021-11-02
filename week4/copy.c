#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// A program that copies a string and makes its first letter uppercase
// Since a string is the address of the first character, in order to copy it successfully, we should
// make memory space using malloc, copy char-by-char and, finally convert to uppercase

int main(void)
{
    char *s = get_string("Enter a string to copy: ");
    // give me as many bytes of memory as there are chars in s + 1
    // additional one is for \0
    char *t = malloc(strlen(s + 1));

    // make sure t has a valid address
    if (t == NULL)
    {
        return 1;
    }
    
    // copy each char from s to t
    // there is also strcpy(destination, source) instead of looping
    for (int i = 0; i <= strlen(s); i++)
    {
        t[i] = s[i];
    }
    
    // error checking eg. if user hits simply "Enter"
    if (strlen(s) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // free up memory
    free(t);
}