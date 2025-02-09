/*
Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo rectángulo y escriba
en la salida estándar: A) perímetro y superficie y B) su hipotenusa.
*/

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <iomanip>
#include <locale>
#include <cmath> // Para sqrt

using namespace std;

int main()
{
    cout << "EJERCICIO 7" << endl;
    cout << "Ingrese el cateto adyacente del triangulo: " << endl;
    double catetoAd;
    cin >> catetoAd;

    cout << "Ingrese el cateto opuesto del triangulo: " << endl;
    double catetoOp;
    cin >> catetoOp;

    double hipotenusa = sqrt(pow(catetoAd,2)+pow(catetoOp,2));
    double perimetro = catetoAd + catetoOp + hipotenusa;
    double superficie = (catetoAd * catetoOp)/2;

    cout << fixed << setprecision(2);
    cout << "\nCARACTERISTICAS DEL TRIANGULO"
        << "\nCateto adyacente: " << catetoAd
        << "\nCateto opuesto: " << catetoOp
        << "\nHipotenusa: " << hipotenusa
        << "\nPerimetro: " << perimetro
        << "\nSuperficie: " << superficie
        << endl;
    return 0;
}
