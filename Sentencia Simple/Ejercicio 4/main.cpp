/*
Haga un programa que tenga como entrada una cantidad de dinero en pesos argentinos, y su salida
ser� el monto convertido a d�lares. Tome la cotizaci�n actual de d�lar blue, redondear a 2 cifras.
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

    printf("*** CONVERSOS PESOS-DOLAR ***");
    printf("\nIngrese su cantidad de pesos: ");
    double cantPesos;
    cin >> cantPesos;

    double convDolar = cantPesos / 1053.87;


    cout << fixed << setprecision(2);
    cout << "\nCantidad de pesos: $" << cantPesos
        << "\nCantidad de dolares: $" << convDolar << endl;
    return 0;
}
