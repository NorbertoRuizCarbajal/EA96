/*
    Created by Nor on 08/01/2025.
    Programa: Hace una conversión de temperaturas

*/

#include <stdio.h>

// Prototipos de funciones
void displayMenu();
float celsiusToFahrenheit(float celsius);
float fahrenheitToCelsius(float fahrenheit);
float celsiusToKelvin(float celsius);

int main(void) {
    float fahrenheit, celsius, kelvin;
    int opcion = 0;

    printf("Elije una opcion\n");

    do {
        displayMenu();
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingresa la temperatura en Celsius: ");
                scanf("%f", &celsius);
                fahrenheit = celsiusToFahrenheit(celsius);
                printf("La conversion a Fahrenheit es: %.2f\n\n", fahrenheit);
                break;

            case 2:
                printf("Ingresa la temperatura en Fahrenheit: ");
                scanf("%f", &fahrenheit);
                celsius = fahrenheitToCelsius(fahrenheit);
                printf("La conversion a Celsius es: %.2f\n\n", celsius);
                break;

            case 3:
                printf("Ingresa la temperatura en Celsius: ");
                scanf("%f", &celsius);
                kelvin = celsiusToKelvin(celsius);
                printf("La conversion a Kelvin es: %.2f\n\n", kelvin);
                break;

            default:
                if (opcion != 0) {
                    printf("Opción invalida. Intenta de nuevo.\n\n");
                }
        }//Fin de Switch
    } while (opcion != 0);

    return 0;
}//Fin de la función Main

void displayMenu() {

    printf("1. Conversion de Celsius a Fahrenheit\n");
    printf("2. Conversion de Fahrenheit a Celsius\n");
    printf("3. Conversion de Celsius a Kelvin\n");
    printf("0. Finalizar programa\n");
    printf("Selecciona una opcion: ");
}//Fin de la función menú

float celsiusToFahrenheit(float celsius) {
    return (celsius * 1.8) + 32;
}//Fin de la función conversión celsius a fahren

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}//Fin de la función conversor fehrenheir a celsius

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}//Fin de la función conversor celsius a kelvin
