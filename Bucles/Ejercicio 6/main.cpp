/*
Escriba un programa que calcule num^exp, donde tanto num como exp son enteros positivos, sin utilizar la
función pow. Donde num será una base generada de forma aleatoria entre 2 y 42, y exp será ingresada por teclado no
mayor a 5
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
    setlocale(LC_ALL, "");

    srand(static_cast<unsigned>(time(0)));

    int num = rand() % 41 + 2;
    int exp,resultado;

    do{
        printf("Ingrese el número exponencial (2-5): ");
        cin >> exp;

        if(exp>5){
            printf("Número no válido, intente de nuevo...\n");
            system("pause");
        }
    }while(exp>5);

    switch(exp){
        case 1: resultado = num * 1;
                break;
        case 2: resultado = num * num;
                break;
        case 3: resultado = num * num * num;
                break;
        case 4: resultado = num * num * num * num;
                break;
        case 5: resultado = num * num * num * num * num;
                break;
    }

    printf("El resultado de %d^%d es: %d\n",num,exp,resultado);
    system("pause");
    return 0;
}
