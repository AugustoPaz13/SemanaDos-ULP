/*
Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero. En ese
momento el programa debe terminar y mostrar en la salida estándar el número de valores leídos mayores que cero.
Usar una estructura do-while.
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
    int numero, contador;

    setlocale(LC_ALL, "");

    do{
        system("cls");
        printf("Ingrese un número: ");
        cin >> numero;
        if(numero > 0){
            cout << "¡Número guardado correctamente!" << endl;
            contador++;
            system("pause");
        }else{
            cout << "Número cero detectado, finalizando programa..." << endl;
            system("pause");
        }
    }while(numero!=0);

    system("cls");
    cout << "Cantidad de números ingresados mayores que cero: " << contador << endl;

    return 0;
}
