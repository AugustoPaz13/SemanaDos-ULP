/*
Escriba un programa que calcule num^exp, donde tanto num como exp son enteros positivos, sin utilizar la
funci�n pow. Donde num ser� una base generada de forma aleatoria entre 2 y 42, y exp ser� ingresada por teclado no
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
        printf("Ingrese el n�mero exponencial (2-5): ");
        cin >> exp;

        if(exp>5){
            printf("N�mero no v�lido, intente de nuevo...\n");
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
