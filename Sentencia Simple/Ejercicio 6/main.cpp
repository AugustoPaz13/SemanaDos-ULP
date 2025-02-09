/*
Haga un programa en donde se ingresará una cantidad X de segundos, para luego convertir a horas,
minutos y segundos.
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
    printf("\nIngrese una cantidad de segundos para convertirlos: ");
    int segundos;
    cin >> segundos;

    double horas = segundos/3600;
    double minutos = segundos/60;

    cout << "\nCantidad de segundos: " << segundos
        <<  "\nCantidad de minutos: " << minutos
        <<  "\nCantidad de horas: " << horas
        << endl;

    return 0;
}
