#include "common.h"

int **initialize(int rows, int columns)
{
    /*
     * Initialize a 2-dimension array
     * http://www.eskimo.com/~scs/cclass/int/sx9b.html
     */
    int i,j;
    int **tmp;
    tmp = malloc(sizeof(int *) * rows);
    if (tmp == NULL) panic ("Cannot allocate memory!");
    for (i=0; i<rows; i++) {
        tmp[i] = malloc (sizeof(int) * columns);
        if (tmp[i] == NULL) panic ("Cannot allocate memory!");
    }
    return tmp;
}

void print_matrix(int **matrix, int rows, int columns) {
    int i,j;
    if (matrix != NULL) {
        for (i = 0; i< rows; i++)
        {
            for (j = 0; j < columns; j++)
                printf("%d\t", *(*(matrix+i)+j));
            printf("\n");
        }
    }
}

int main(int argc, char **argv) {
    int **matrix_a, **matrix_b, **result;
    int rows, columns, i, j;

    printf("Please enter the 2 matrices' number of rows: ");
    scanf("%d", &rows);
    flush();

    printf("And the columns': ");
    scanf("%d", &columns);
    flush();

    printf("%d %d\n", rows, columns);

    matrix_a = initialize(rows, columns);
    matrix_b = initialize(rows, columns);
    result = initialize(rows, columns);

    printf("Please type in matrix A:");
    for (i=0; i<rows; i++)
        for (j=0; j<columns; j++) scanf("%d", &matrix_a[i][j]);

    printf("Please type in matrix B:");
    for (i=0; i<rows; i++)
        for (j=0; j<columns; j++)
        {
            scanf("%d", &matrix_b[i][j]);
            result[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }

    printf("Matrix A:\n");
    print_matrix(matrix_a, rows, columns);

    printf("Matrix B:\n");
    print_matrix(matrix_b, rows, columns);

    printf("The resulting matrix is:\n");

    print_matrix(result, rows, columns);

    getchar();
    return 0;
}
