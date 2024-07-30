#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /**
     * Writing to a file is similar to writing to the console.
     */

    // open a file for writing
    FILE *file = fopen("file.txt", "w");

    if (!file)
    {
        fprintf(stderr, "Error opening file\n");
        return EXIT_FAILURE;
    }

    // write to the file
    fprintf(file, "Hello, World!\n");
    fclose(file);

    return EXIT_SUCCESS;
}
