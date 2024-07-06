#include <stdio.h>
#include <stdlib.h>

int sum(const int *p, const int *length)
{
    int result = 0;
    for (int i = 0; i < *length; i++)
    {
        result += *(p + i);
    }
    return result;
}

int main(int argc, char const *argv[])
{
    const int listLength = 10;
    const int list[listLength] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int result = sum(list, &listLength);
    printf("The sum of the list is: %d\n", result);

    return EXIT_SUCCESS;
}
