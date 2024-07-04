#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    NONE = 0,
    LOW = 5,
    MEDIUM = 9,
    HIGH = 12,
    MAX = 20
} SpaceshipThrust;

int main(void)
{
    printf("\n");
    printf("--- Spaceship Thrust ---\n");

    SpaceshipThrust spacheshipThrust = NONE;
    printf("Ready to go: %d\n", spacheshipThrust);

    spacheshipThrust = MAX;
    printf("Take off: %d\n", spacheshipThrust);

    spacheshipThrust = MEDIUM;
    printf("Entering into ionosphere: %d\n", spacheshipThrust);

    spacheshipThrust = LOW;
    printf("Travelling to deep space: %d\n", spacheshipThrust);

    return EXIT_SUCCESS;
}