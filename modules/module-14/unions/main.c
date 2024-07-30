#include <stdio.h>
#include <stdlib.h>

union Http
{
    int status_code;
    char *message;
    char *body;
};

int main(int argc, char const *argv[])
{
    /**
     * Unions are similar to structs, but they share the same memory space.
     * This means that only one member of the union can be used at a time.
     *
     * Unions are useful when you want to store different types of data in the same memory space.
     */

    union Http response;

    response.status_code = 200;
    printf("Status Code: %d\n", response.status_code);

    response.message = "OK";
    printf("Message: %s\n", response.message);

    response.body = "Hello, World!";
    printf("Body: %s\n", response.body);

    // write a new value to the status_code member
    response.status_code = 'A';
    printf("Status Code: %d\n", response.status_code);

    return EXIT_SUCCESS;
}
