//
// Created by Nor on 09/01/2025.
//

#include <stdio.h>
#include <string.h>

//Funciones
int isPalindromo(char* palabra){
    int inicio = 0;
    int fin = strlen(palabra) - 1;

    while (inicio < fin) {
        if (palabra[inicio] != palabra[fin]) {

            printf("La palabra: %s\n", palabra);
            printf("No es un palindromo.");
            return 0;
        }//Fin if

        inicio++;
        fin--;
    }//Fin whiñe

    printf("La palabra: %s\n", palabra);
    printf("Es un palindromo.");

    return 1;

}//Fin de isPalindromo

void getInput(char palabra[]){

      printf("Ingresa una palabra: ");
      scanf("%s", palabra);

}//Fin de getInput

int main(){

    char palabra[100];
    getInput(palabra);
    isPalindromo(palabra);

    return 0;

}//Fin de main