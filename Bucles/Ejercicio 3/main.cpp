/*
Realice un programa que calcule y muestre en la salida est�ndar, la suma de los cuadrados de los 10
primeros enteros mayores que cero. Mostrar un mensaje de invalidez, si ingresa un negativo.
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

    int numero, contador, cuadrado;

    setlocale(LC_ALL, "");

    for(int i=1;i<11;i++){
        system("cls");
        printf("Ingrese un n�mero entero positivo: ");
        cin >> numero;
        if(numero > 0){
            cout << "�N�mero guardado correctamente!" << endl;
            cuadrado = pow(numero,2);
            contador += cuadrado;
            system("pause");
        }else{
            cout << "N�mero negativo no valido, intente de nuevo..." << endl;
            system("pause");
            i--;
        }
    }

    system("cls");
    cout << "La suma de los cuadrados de los n�meros ingresados es: " << contador << endl;

    return 0;
}
