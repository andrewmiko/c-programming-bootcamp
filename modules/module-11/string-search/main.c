#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /**
     * String Search
     *
     * - The strstr() function searches for the first occurrence of the substring in the string.
     * - The function returns a pointer to the first occurrence of the substring in the string.
     * - The function returns NULL if the substring is not found in the string.
     *
     * - The strchr() function searches for the first occurrence of the character in the string.
     * - The function returns a pointer to the first occurrence of the character in the string.
     * - The function returns NULL if the character is not found in the string.
     *
     * - The strrchr() function searches for the last occurrence of the character in the string.
     * - The function returns a pointer to the last occurrence of the character in the string.
     * - The function returns NULL if the character is not found in the string.
     *
     * - The strpbrk() function searches for any character in the string that matches any character in the character set.
     * - The function returns a pointer to the first occurrence of the character in the string.
     * - The function returns NULL if no character in the character set is found in the string.
     *
     * - The strcspn() function searches for the first occurrence of any character in the character set in the string.
     */

    char str[] = "Hello, World!";
    char *result;

    // Search for the substring "World" in the string
    result = strstr(str, "World");
    printf("The substring \"World\" is found at: %ld\n", result - str);

    // Search for the character 'o' in the string
    result = strchr(str, 'o');
    printf("The character 'o' is found at: %ld\n", result - str);

    // Search for the last occurrence of the character 'o' in the string
    result = strrchr(str, 'o');
    printf("The last occurrence of the character 'o' is found at: %ld\n", result - str);

    // Search for any character in the character set "aeiou" in the string
    result = strpbrk(str, "aeiou");
    printf("The character in the character set \"aeiou\" is found at: %ld\n", result - str);

    // Search for the first occurrence of any character in the character set "aeiou" in the string
    size_t length = strcspn(str, "aeiou");
    printf("The first occurrence of any character in the character set \"aeiou\" is found at: %ld\n", length);

    return EXIT_SUCCESS;
}
