/*
: Realice un programa que calcule el valor que toma la siguiente función para unos valores dados de x
e y: f(x,y)
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
    float x,y;

    setlocale(LC_ALL, "");

    printf("Ingrese el valor de X: ");
    cin>>x;
    printf("Ingrese el valor de Y: ");
    cin>>y;

    cout << "RESULTADOS" << endl;
    cout << "f(x,y) = "  << fixed << setprecision(2) << sqrt(x)/(pow(y,2)-1) <<endl;
    return 0;
}
