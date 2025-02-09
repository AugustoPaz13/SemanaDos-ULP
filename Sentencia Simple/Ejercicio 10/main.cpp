/*
Escriba un programa que lea de la entrada estándar el nombre de una persona en un arreglo de
caracteres. Además, pide el año de nacimiento, y determina su edad en años complidos.
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
    char nombrePersona[20];
    int anioNacimiento;

    setlocale(LC_ALL, "");

    cout << "EJERCICIO 10" << endl;

    printf("Ingrese el nombre de la persona: ");
    scanf("%s", nombrePersona);

    printf("Ingrese el año de nacimiento de %s: ", nombrePersona);
    scanf("%d", &anioNacimiento);

    int cantAnios = 2025-anioNacimiento;

    printf("\n%s tiene/tendrá %d años", nombrePersona, cantAnios);
    return 0;
}
