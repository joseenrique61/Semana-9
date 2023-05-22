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
    int **matriz = calloc(x, sizeof(int *));

    // Ponemos números aleatorios a cada elemento de las matrices "x" y "y" y los sumamos en "z"
    for (int i = 0; i < 3; i++)
    {
        matriz[i] = calloc(y, sizeof(int));
        for (int j = 0; j < 2; j++)
        {
            matriz[i][j] = rand();
        }
    }

    
}