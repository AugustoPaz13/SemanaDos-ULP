/*
Escriba un programa que calcule el valor de: 1! +2! + 3! + ... + n! (suma de factoriales).
*/

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <iomanip>
#include <locale>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    int factorial, resultado;
    int contador = 1, sumatoria = 0;

    setlocale(LC_ALL, "");

    printf("Ingrese N para calcular la suma de facotriales: ");
    cin >> factorial;

    do{
        resultado = 1;
        for(int i=1;i<=contador;i++){
            resultado *= i;
        }
        sumatoria += resultado;
        contador++;
    }while(contador<=factorial);


    printf("--------------------------------------------\n");
    printf("El resultado de la suma factorial de %d! es: %d\n",factorial,sumatoria);
    printf("--------------------------------------------\n");

    return 0;
}
