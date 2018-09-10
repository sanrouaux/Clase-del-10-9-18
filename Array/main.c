#include <stdio.h>
#include <stdlib.h>


void inicializaArray(int[], int, int);  //prototipo de la funcion con arrays: se declara el tipo de dato int[]
void mostrarArray(int[], int);
void inicializaYMuestra(int[], int, int);



int main()
{
    int cantidad;
    cantidad = 5;
    int vector [cantidad];
    int valorDeCarga;
    valorDeCarga = 7;
    inicializaYMuestra(vector, cantidad, valorDeCarga);
    return 0;
}


void inicializaArray(int vector[], int cantidad, int valorDeCarga) // Desarrollo de la funcion. Declaro un array. La funcion sera void
{
    cantidad--;
    for(; cantidad >= 0; cantidad--)
    {
        vector[cantidad] = valorDeCarga;
    }
 }

void mostrarArray(int vector[], int cantidad)
{
    cantidad--;
    for(; cantidad >= 0; cantidad--)
    {
        printf("%d\n", vector[cantidad]);
    }
}

void inicializaYMuestra(int vector[], int cantidad, int valorDeCarga)
{
    inicializaArray(vector, cantidad, valorDeCarga);
    mostrarArray(vector, cantidad);
}
