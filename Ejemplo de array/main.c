#include <stdio.h>
#include <stdlib.h>

int mostrarArray ( int miArray[], int cantidad );
int elMaximo(int miArray[], int cantidad);

int main()
{
    int listadoDeEdades[cantidadx];
    int maximo;
    InicializarArray(listadoDeEdades, cantidadx);
    CargarSecuenciaDelArray(listadoDeEdades, cantidadx);
    mostrarArray( listadoDeEdades, canitdadx);
    maximo = elMaximo(listadoDeEdades, cantidadx);




}

int mostrarArray (int miArray[], int cantidad)
{
    int i;
    for ( i = 0; i< 10; i++ )
    {
        printf("%d", miArray[i]);
    }
}

int elMaximo(int miArray[], int cantidad)
{
    int i;
    int maximo;
    for (i =0; i< cantidad; i++)
    {
        if ( miArray[i] > maximo || i == 0)
        {
            maximo = miArray [i];
        }
    }
return maximo;
}
/*int numero;
int listadoDeNumeros [3];
numero = 33;
listadoDeNumeros [0] = 66;

int i;
for ( i = 0; i < 3; i++)
{
    listadoDeNumeros[i]=0;
}


for ( i = 0; i < 3; i++)
{
    printf("%d\n", listadoDeNumeros[i]);
}*/

