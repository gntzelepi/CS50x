#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    // if num of arguments to my program is 2
    if (argc == 2)
    {
        // print out the second word
        printf("Hello, %s!\n", argv[1]);
    }
    else
    {
        printf("Hello, world!\n");
    }
}