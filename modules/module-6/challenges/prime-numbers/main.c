#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    const int MAX = 1000;

    // Find all prime numbers below upper limit
    int upperLimit;
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);

    if (upperLimit < 2 || upperLimit > MAX)
    {
        printf("There are no prime numbers below %d\n", upperLimit);
        printf("Upper limit should be less than or equal to %d\n", MAX);
        goto exit_program;
    }

    for (int i = 2; i < upperLimit; i++)
    {
        int isPrime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            printf("%d\n", i);
        }
    }

exit_program:
    printf("GOTO: Program exit\n");
    return EXIT_SUCCESS;
}
