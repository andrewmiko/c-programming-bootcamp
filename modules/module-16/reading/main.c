#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    /**
     * File streams are used to read and write data to files.
     * The standard library provides three file streams:
     *
     * 1. stdin - standard input stream
     * 2. stdout - standard output stream
     * 3. stderr - standard error stream
     *
     */

    // open a file for reading
    FILE *file = fopen("file.txt", "r");

    if (!file)
    {
        fprintf(stderr, "Error opening file\n");
        return EXIT_FAILURE;
    }

    // read from the file
    int c;
    while ((c = fgetc(file)) != EOF)
    {
        putchar(c);
    }

    if (ferror(file))
    {
        fprintf(stderr, "Error reading from file\n");
        fclose(file);
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
