#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    const char SYMBOL = 'X';
    const int BASE_WIDTH = 10;
    const int TIP_WIDTH = 5;

    for (int i = 0; i < BASE_WIDTH; i++)
    {
        printf("%c", SYMBOL);
    }
    printf("\n");

    for (int i = 1; i < TIP_WIDTH; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        printf("%c\n", SYMBOL);
    }

    for (int i = TIP_WIDTH; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        printf("%c\n", SYMBOL);
    }

    for (int i = 0; i < BASE_WIDTH; i++)
    {
        printf("%c", SYMBOL);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
