#include <stdio.h>
#include <stdlib.h>

struct Http
{
    int status_code;
    char *message;
    char *body;
};

int main(int argc, char const *argv[])
{
    struct Http response;

    response.status_code = 200;
    response.message = "OK";
    response.body = "Hello, World!";

    printf("Status Code: %d\n", response.status_code);
    printf("Message: %s\n", response.message);
    printf("Body: %s\n", response.body);

    return EXIT_SUCCESS;
}
