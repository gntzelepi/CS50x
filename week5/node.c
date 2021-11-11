#include <stdio.h>
#include <stdlib.h>

// A linked list.

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    // empty linked list
    // should be NULL so as not to point to garbage values
    node *list = NULL;

    // allocate space for a node
    node *n = malloc(sizeof(node));

    if (n == NULL)
    {
        return 1;
    }

    // go into node n and assign these values
    n -> number = 1;
    n -> next = NULL;

    // list point to node n
    list = n;

    // add number 2 to list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free(list);
        return 1;
    }
    n -> number = 2;
    n -> next = NULL;

    list -> next = n;

    // add number 3 to list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free(list -> next);
        free(list);
        return 1;
    }
    n -> number = 3;
    n -> next = NULL;

    list->next->next = n;

    // give myself a pointer to the beginning of the list
    // do the following:
    // so long as tmp is not NULL (it's pointing at an actual node)
    // print out whatever value is in the number field of node
    for (node *tmp = list; tmp != NULL; tmp = tmp -> next)
    {
        printf("%i\n", tmp -> number);
    }

    // free list
    while (list != NULL)
    {
        node *tmp = list -> next;
        free(list);
        list = tmp;
    }
}