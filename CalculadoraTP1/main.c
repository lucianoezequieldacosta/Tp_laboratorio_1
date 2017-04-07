#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
     int opcion;
     float a, b, resultado;

  while(opcion!=9)
    {
        system("cls");
        printf("*                     Calculadora Smart Luciano                            *\n");
        printf("*           1- Ingrese el 1er numero:      (A=%.2f)                        *\n", a);
        printf("*           2- Ingrese el 2do numero:    (B=%.2f)                         *\n", b);
        printf("*           3- Calcular la suma: (A+B)                                     *\n");
        printf("*           4- Calcular la resta: (A-B)                                    *\n");
        printf("*           5- Calcular la multiplicacion: (A*B)                           *\n");
        printf("*           6- Calcular la division: (A/B)                                 *\n");
        printf("*           7- Calcular el factorial: (A!)                                 *\n");
        printf("*           8- Calcular todas las operaciones                              *\n");
        printf("*           9- Salir                                                       *\n");
        printf("*                  ELIGE ALGUNA OPCION:                                    *\n");

        printf(" SU OPCION: ");
        scanf("%d",&opcion);


        switch(opcion)
        {
            case 1: printf("Ingrese el primer numero: ");
                    scanf("%f", &a);
                break;
            case 2: printf("Ingrese el segundo numero: ");
                    scanf("%f", &b);
                break;
            case 3: resultado=suma(a, b);
                    printf("La suma de los numeros es : %.2f\n", resultado);
                    system("pause");
                break;
            case 4: resultado=resta(a, b);
                printf("La resta de los numeros es : %.2f\n", resultado);
                system("pause");
                break;
            case 5: resultado=multiplicar(a, b);
                    printf("La multiplicacion de los numeros es : %.2f\n", resultado);
                    system("pause");
                break;
            case 6: if(a!=0 && b!=0)
                {
                    resultado=dividir(a, b);
                    printf("La division de los numeros es : %.2f\n", resultado);
                    system("pause");
                }
                else
                {
                    printf("Error! No se puede dividir si uno de los dos numeros es cero\n");
                    system("pause");
                }

            case 7: resultado=factorial(a);
                    printf("El factorial del numero es : %.2f\n", resultado);
                    system("pause");
                break;
            case 8: resultado=suma(a, b);
                    printf("La suma es : %.2f\n", resultado);
                    resultado=resta(a, b);
                    printf("La resta es : %.2f\n", resultado);
                    if(a!=0 && b!=0)
                {
                    resultado=dividir(a, b);
                    printf("La division de los numeros es : %.2f\n", resultado);

                }
                else
                {
                    printf("Error. No se puede dividir si uno de los dos numeros es cero\n");
                }
                    resultado=multiplicar(a, b);
                    printf("La multiplicacion es : %.2f\n", resultado);
                    resultado=factorial(a);
                    printf("El factorial es : %.2f\n", resultado);
                    system("pause");
                break;
            case 9:
                default:
			printf("\n Hasta luego! Calculadora Smart Luciano ;) ");
            }
      }
    return 0;
}

float suma(float a, float b) {
	return a+b;
}

float resta(float a, float b) {
	return a-b;
}

float multiplicar(float a, float b) {
	return a*b;
}

float dividir(float a, float b) {
	return a/b;
}

float factorial(float a) {

}







