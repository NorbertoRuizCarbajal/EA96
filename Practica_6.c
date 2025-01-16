//
// Created by Nor on 16/01/2025.
//
#include <stdio.h>

void GetInput(int *numVeces) {
    printf("Ingresa la cantidad de espacios a recorrer: ");
    scanf("%d", numVeces);
}//Fin de GetInput

void RecorrerEspacios(int cadena[], int numVeces, int tam) {
    numVeces %= tam;

    int temp[numVeces];

    for (int i = 0; i < numVeces; i++) {
        temp[i] = cadena[i];
    }

    for (int i = 0; i < tam - numVeces; i++) {
        cadena[i] = cadena[i + numVeces];
    }

    for (int i = 0; i < numVeces; i++) {
        cadena[tam - numVeces + i] = temp[i];
    }
}//Fin de RecorrerEspacios


void ImprimirArreglo(int cadena[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%d ", cadena[i]);
    }
    printf("\n");
}//Fin de ImprimirArreglo

int main() {
    int numVeces;
    int cadena[] = {1, 2, 3, 4, 5};
    int tam = 5;

    GetInput(&numVeces);
    RecorrerEspacios(cadena, numVeces, tam);
    printf("Arreglo modificado: ");
    ImprimirArreglo(cadena, tam);

    return 0;
}
