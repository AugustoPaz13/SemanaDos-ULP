/*
:A-Escriba un programa que calcule usando un while, el valor de: 1 + 2 + 3 +...+ n.
 B-Escriba un programa que calcule usando un for, el valor de: 1 + 3 + 5 +...+ 2n-1
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
    int i = 1,N,contadorNumeros = 0, contadorImpares = 0;

    setlocale(LC_ALL, "");

    printf("Ingrese el valor de N (tope): ");
    cin >> N;

    while(i<=N){
        contadorNumeros += i;
        i++;
    }

    for(int j=1;j<=N;j++){
        if(j%2!=0){
            contadorImpares += j;
        }
    }

    cout << "\nValor de la sumatoria de números: " << contadorNumeros
        << "\nValor de la sumatoria de impares: " << contadorImpares << endl;
    return 0;
}
