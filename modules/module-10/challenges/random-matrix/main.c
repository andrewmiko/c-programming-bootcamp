#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_COLS 1
#define MAX_COLS 10
#define MIN_ROWS 1
#define MAX_ROWS 10
#define UPPER_LIMIT 1000

void generateRandomMatrix(const int rows, const int cols, int matrix[rows][cols])
{
    srand(time(NULL));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % UPPER_LIMIT;
        }
    }
}

int main(int argc, char const *argv[])
{
    int rows, cols, upperLimit;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    if (rows < MIN_ROWS || rows > MAX_ROWS)
    {
        printf("The number of rows must be between 1 and 10\n");
        return EXIT_FAILURE;
    }

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (cols < MIN_COLS || cols > MAX_COLS)
    {
        printf("The number of columns must be between 1 and 10\n");
        return EXIT_FAILURE;
    }

    int matrix[rows][cols];
    generateRandomMatrix(rows, cols, matrix);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
