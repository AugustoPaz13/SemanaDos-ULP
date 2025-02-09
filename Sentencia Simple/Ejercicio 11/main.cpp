/*
Escribe un programa que lea de la entrada estándar dos números y muestre en la salida estándar su
suma, resta, multiplicación y división.
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

    cout << "Ingrese el primero número: " << endl;
    double numero1;
    cin >> numero1;

    cout << "Ingrese el segundo número: " << endl;
    double numero2;
    cin >> numero2;

    double suma = numero1 + numero2;
    double resta = numero1 - numero2;
    double multiplicacion = numero1 * numero2;
    double division = numero1 / numero2;

    cout << "Resultado de la suma: " << suma << "\n"
        << "Resultado de la resta: " << resta << "\n"
        << "Resultado de la multiplicación: " << multiplicacion << "\n"
        << "Resultado de la división: " << division << endl;
    return 0;
}
