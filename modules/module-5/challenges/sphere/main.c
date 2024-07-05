#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    // Calculate the surface area and volume of a sphere
    // Formula of the surface area of a sphere: 4 * π * r^2
    // Formula of the volume of a sphere: 4/3 * π * r^3

    float radius;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    printf("\n");
    printf("Radius of the sphere: %.2f\n", radius);

    float surface;
    surface = 4.0 * M_PI * pow(radius, 2);
    printf("Surface area of the sphere: %.2f\n", surface);

    float volume;
    volume = 4.0 / 3.0 * M_PI * pow(radius, 3);
    printf("Volume of the sphere: %.3E\n", volume);

    return EXIT_SUCCESS;
}
