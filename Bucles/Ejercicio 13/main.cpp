/*
Hacer un programa que muestre la serie Fibonacci, mostrando sus elementos desde el 1..hasta n
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

    int fibonacci;

    setlocale(LC_ALL, "");

    printf("Ingrese un número se la serie fibonacci para mostrar sus elementos: ");
    cin >> fibonacci;

    printf("Los elementos de la serie de Fibonacci(%d) son: ",fibonacci);

    int sumatoria = 0;
    int anterior = 0;

    while(sumatoria<=fibonacci){
        if(sumatoria==0){
             printf("%d",sumatoria);
             sumatoria += 1;
        }else{
            printf(", %d",sumatoria);

            sumatoria = anterior + sumatoria;
            anterior = sumatoria-anterior;
        }
    }
    cout << "\n\n" << endl;
    return 0;
}
