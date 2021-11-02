#include <cs50.h>
#include <stdio.h>
#include <string.h>

// A program that prompts the user for a name and number
// and writes them to a csv file

int main(void)
{
    // pointer to a file
    // open it and append to it
    FILE *file = fopen("phonebook.csv", "a");

    if (file == NULL)
    {
        return 1;
    }

    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    fprintf(file, "%s,%s\n", name, number);

    fclose(file);
}