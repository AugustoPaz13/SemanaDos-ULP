/*
Escriba un programa que calcule el valor de: 1 * 2 * 3 *...* n (factorial)
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
    int factorial;

    setlocale(LC_ALL, "");

    printf("Ingrese el N para calcular su factorial: ");
    cin >> factorial;

    int resultado = 1;

    for(int i=1;i<=factorial;i++){
        resultado *= i;
    }

    printf("--------------------------------------------\n");
    printf("El resultado de %d! es: %d\n",factorial,resultado);
    printf("--------------------------------------------\n");

    return 0;
}
