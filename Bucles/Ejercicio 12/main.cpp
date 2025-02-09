/*
Hacer un programa que calcule el resultado de la siguiente expresión: 1-2+3-4+5-6...n
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

    printf("Ingrese N para hacer la sumatoria alternada (1-2+3-4+...+n): ");
    cin >> N;

    int sumatoria = 0;

    for(int i=1;i<=N;i++){
        if (i % 2 == 0) {
            sumatoria -= i;
        } else {
            sumatoria += i;
        }
    }

    printf("--------------------------------------------\n");
    printf("La sumatoria alternada de %d es: %d\n",N,sumatoria);
    printf("--------------------------------------------\n");

    return 0;
}
