#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} WeekDays;

int main(int argc, char const *argv[])
{
    WeekDays day;

    printf("Enter a number between 1 (MONDAY) and 7 (SUNDAY): ");
    scanf("%u", &day);

    switch (day)
    {
    case MONDAY:
        printf("MONDAY\n");
        break;
    case TUESDAY:
        printf("TUESDAY\n");
        break;
    case WEDNESDAY:
        printf("WEDNESDAY\n");
        break;
    case THURSDAY:
        printf("THURSDAY\n");
        break;
    case FRIDAY:
        printf("FRIDAY\n");
        break;
    case SATURDAY:
        printf("SATURDAY\n");
        break;
    case SUNDAY:
        printf("SUNDAY\n");
        break;
    default:
        printf("Invalid day\n");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
