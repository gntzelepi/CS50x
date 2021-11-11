#include <stdio.h>
#include <stdlib.h>

// A program that "increases" the size of an array

int main(void)
{
    // dynamic allocation of 3 ints
    int *list = malloc(3 * sizeof(int));

    // error checking
    if (list == NULL)
    {
        return 1;
    }

    // add elements to array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // if I want to add an additional element, I have to
    // dynamically allocate memory for 4 ints
    int *tmp = malloc(4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        // copy elements from list to tmp
        tmp[i] = list[i];
    }

    // add element to array
    tmp[3] = 4;

    free(list);

    // remember the address of the new chunk of memory
    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list);
}