#include <stdio.h>
#include <time.h>

int main()
{
    // Ponemos la semilla para el número aleatorio
    srand(time(NULL));

    // Inicializamos las variables
    int x[3][2] = {{0, 0}, {0, 0}, {0, 0}};

    // Ponemos números aleatorios a cada elemento de las matrices "x" y "y" y los sumamos en "z"
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            x[i][j] = rand();
        }
    }
}