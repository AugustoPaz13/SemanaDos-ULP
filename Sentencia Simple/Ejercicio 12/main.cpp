/*
: Escriba un programa que calcule las soluciones de una ecuación de segundo grado de la forma ax^2
+ bx + c = 0, teniendo en cuenta que: f(a,b,c) =−𝑏+√(𝑏2−4𝑎𝑐)
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
#include <complex> // Para usar números complejos

using namespace std;

int main()
{
    float a, b ,c;

    setlocale(LC_ALL, "");

    cout << "EJERCICIO 12" << endl;
    printf("Ingrese los coeficientes de a,b,c: ");
    cin >> a >> b >> c;

    float discriminante = b * b - 4 * a * c;

    if(a==0){
        cout << "No es una ecuación cuadratica" << endl;
    }else{
        if(discriminante>0){
            //Dos soluciones reales distintas
            double x1 = (-b + sqrt(discriminante)) / (2 * a);
            double x2 = (-b - sqrt(discriminante)) / (2 * a);
            cout << "Las soluciones reales son: x1 = " << x1 << " y x2 = " << x2 << endl;
        }else if(discriminante==0){
            //Una solucion real(doble)
            double x = -b / (2 * a);
            cout << "La solución real doble es: x = " << x << endl;
        }else{
            // Dos soluciones complejas
            complex<double> x1(-b / (2 * a), sqrt(-discriminante) / (2 * a));
            complex<double> x2(-b / (2 * a), -sqrt(-discriminante) / (2 * a));
            cout << "Las soluciones complejas son: x1 = " << x1 << " y x2 = " << x2 << endl;
        }
    }
    return 0;
}
