/*
Escribe un programa que lea de la entrada est�ndar dos n�meros y muestre en la salida est�ndar su
suma, resta, multiplicaci�n y divisi�n.
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
    int num1, num2;

    cout << "EJERCICIO 11" << endl;

    cout << "Ingrese el primero n�mero: " << endl;
    double numero1;
    cin >> numero1;

    cout << "Ingrese el segundo n�mero: " << endl;
    double numero2;
    cin >> numero2;

    double suma = numero1 + numero2;
    double resta = numero1 - numero2;
    double multiplicacion = numero1 * numero2;
    double division = numero1 / numero2;

    cout << "Resultado de la suma: " << suma << "\n"
        << "Resultado de la resta: " << resta << "\n"
        << "Resultado de la multiplicaci�n: " << multiplicacion << "\n"
        << "Resultado de la divisi�n: " << division << endl;
    return 0;
}
