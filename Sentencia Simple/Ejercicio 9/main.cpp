/*
Escriba un programa que ingrese nombre y tiempo de nado de dos nadadoras. Luego determine y
muestre cuál de ellas llego primero.
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

using namespace std;

int main()
{
    char nombreNadadoora1[20], nombreNadadoora2[20];
    float tiempoNadadoora1, tiempoNadadoora2;

    setlocale(LC_ALL, "");

    cout << "EJERCICIO 9" << endl;

    printf("Ingrese el nombre de nadadora 1: ");
    scanf("%s",nombreNadadoora1);
    printf("Ingrese el tiempo de %s: ",nombreNadadoora1);
    cin >> tiempoNadadoora1;

    printf("Ingrese el nombre de nadadora 2: ");
    scanf("%s",nombreNadadoora2);
    printf("Ingrese el tiempo de %s: ",nombreNadadoora2);
    cin >> tiempoNadadoora2;

    if(tiempoNadadoora1<tiempoNadadoora2){
        printf("\n¡Nadadora %s fue más rápida!", nombreNadadoora1);
    }else{
        printf("\n¡Nadadora %s fue más ráida!", nombreNadadoora2);
    }

    return 0;
}
