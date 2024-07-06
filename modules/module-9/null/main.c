#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *p = NULL;

    // Works only when p is not NULL
    if (p) // p != NULL
    {
        printf("p = %d\n", *p);
    }

    int defaultInt = 0;
    if (!p)
    {
        p = &defaultInt;
        printf("p = %p | %c | %d |\n", p, *p, *p);
    }

    return EXIT_SUCCESS;
}
