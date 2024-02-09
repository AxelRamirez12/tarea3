#include <stdio.h>
int main () {
    double num1, num2;

    printf("Ingrese el primer número: no un carácter ");
    scanf("%lf", &num1);

    printf("Ingrese el segundo número: no un carácter ");
    scanf("%lf", &num2);

    double suma = num1 + num2;
    double resta = num1 - num2;
    double multiplicación = num1 * num2;

    printf("\nResultados:\n");
    printf("Suma: %4lf\n", suma);
    printf("Resta: %4lf\n", resta);
    printf("Multiplicación: %4lf\n", multiplicación);

    if (num2 == 0){
        printf("Error: No se puede dividir entre cero.\n");
    }   else {      double división = num1 / num2;
                printf("División: %4lf\n", división);
                }
                
        return 0;

}