/*
Modifique el programa que pida valores enteros para hora, otra para minutos, y otra para segundos, como
resultado lo transforma y muestra el total a cantidad de segundos.
*/

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    cout << "EJERCICIO 6" << endl;
    printf("\nIngrese una cantidad de horas para convertirlas: ");
    int horas;
    cin >> horas;

    printf("\nIngrese una cantidad de minutos para convertirlas: ");
    int minutos;
    cin >> minutos;

    printf("\nIngrese una cantidad de segundos: ");
    int segundos;
    cin >> segundos;

    double horasASegundos = horas*3600;
    double minutosASegundos = minutos*60;

    cout << "\nCantidad de horas: " << horas
        << "\nConvertidos a segundos: " << horasASegundos
        <<  "\nCantidad de minutos: " << minutos
        <<  "\nConvertidos a segundos: " << minutosASegundos
        <<  "\nCantidad de segundos: " << horas
        << endl;

    return 0;
}
