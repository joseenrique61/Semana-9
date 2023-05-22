#include <stdio.h>
#include <time.h>

int main()
{
    // Ponemos la semilla para el número aleatorio
    srand(time(NULL));

    int x, y = 0;
    printf("Ingrese la cantidad de filas: ");
    scanf("%i", &x);
    printf("Ingrese la cantidad de columnas: ");
    scanf("%i", &y);

    // Inicializamos las variables
    int **matrizOriginal = calloc(x, sizeof(int *));

    // Ponemos números aleatorios a cada elemento de la matriz "matrizOriginal".
    printf("Matriz original: \n\n");
    for (int i = 0; i < x; i++)
    {
        matrizOriginal[i] = calloc(y, sizeof(int));
        for (int j = 0; j < y; j++)
        {
            matrizOriginal[i][j] = rand() % 101;
            printf("%i ", matrizOriginal[i][j]);
        }
        printf("\n");
    }

    // Definimos la matriz matrizTranspuesta
    int **matrizTranspuesta = calloc(y, sizeof(int *));
    for (int i = 0; i < y; i++)
    {
        matrizTranspuesta[i] = calloc(x, sizeof(int));
    }

    // Asignamos los valores de la matrizOriginal con columnas y filas invertidas a la matrizTranspuesta, para que se transponga.
    printf("\nMatriz transpuesta: \n\n");
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            matrizTranspuesta[i][j] = matrizOriginal[j][i];
            printf("%i ", matrizTranspuesta[i][j]);
        }
        printf("\n");
    }

    free(matrizOriginal);
    free(matrizTranspuesta);
}