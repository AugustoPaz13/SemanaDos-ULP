/*
Realice un programa que lea de la entrada est�ndar n�meros hasta que se introduzca un cero. En ese
momento el programa debe terminar y mostrar en la salida est�ndar el n�mero de valores le�dos mayores que cero.
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
        printf("Ingrese un n�mero: ");
        cin >> numero;
        if(numero > 0){
            cout << "�N�mero guardado correctamente!" << endl;
            contador++;
            system("pause");
        }else{
            cout << "N�mero cero detectado, finalizando programa..." << endl;
            system("pause");
        }
    }while(numero!=0);

    system("cls");
    cout << "Cantidad de n�meros ingresados mayores que cero: " << contador << endl;

    return 0;
}
