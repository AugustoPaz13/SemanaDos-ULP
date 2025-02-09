/*
Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n
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
#include <ctime>

using namespace std;

int main()
{
    int N;

    setlocale(LC_ALL, "");

    printf("Ingrese N para realizar la sumatoria de potencia cuadratica: ");
    cin >> N;

    int sumatoria;

    for(int i=1;i<=N;i++){
        sumatoria += pow(i,2);
    }

    printf("--------------------------------------------\n");
    printf("La sumatoria de potencia cuadratica de %d es: %d\n",N,sumatoria);
    printf("--------------------------------------------\n");
    return 0;
}
