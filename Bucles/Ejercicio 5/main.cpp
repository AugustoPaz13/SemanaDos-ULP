/*
Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se
introduzca el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos.
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
    int numero, sumatoria;
    setlocale(LC_ALL, "");

    do{
        system("cls");
        printf("Ingrese un n�mero: ");
        cin >> numero;
        if((numero != 0) && (numero<=30 && numero >=20)){
            cout << "�N�mero guardado correctamente!" << endl;
            sumatoria += numero;
            system("pause");
        }else{
            cout << "N�mero invalido detectado, finalizando programa..." << endl;
            system("pause");
        }
    }while((numero!=0) && (numero<=30 && numero >=20));

    system("cls");
    cout << "La suma de los valores introducidos es: " << sumatoria << endl;
    return 0;
}
