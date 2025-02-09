/*
Escribe un programa que lea de la entrada estándar el precio de un producto y muestre en la salida
estándar, el precio del producto al aplicarle el IVA.
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

    printf("Ingrese el precio standar del jamón: ");
    double precioStandar;
    cin >> precioStandar;

    double IVA= precioStandar * 0.21;
    double precioFinal = precioStandar + IVA;

    cout << "\nEl precio final del jamón es: $" << precioFinal << endl;
    return 0;
}
