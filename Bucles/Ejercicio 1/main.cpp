/*
Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y muestre en la salida estándar
su tabla de multiplicar. Use un menú para elegir varias tablas diferentes a elección.
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
    int numero, resultado, op;

    setlocale(LC_ALL, "");

    do{
        system("cls");
        cout << "TABLAS DE MULTIPLICAR" << endl;
        cout << "1. Ver tabla" << endl;
        cout << "2. Salir" << endl;
        printf("Ingrese una opción: ");
        cin >> op;
        switch(op){
            case 1:
                system("cls");
                printf("Ingrese un número para imprimri su tabla: ");
                cin >> numero;

                system("cls");
                cout << "TABLA DEL " << numero << endl;
                for(int i=1;i<11;i++){
                    resultado = i * numero;
                    printf("%d x %d = %d\n",numero,i,resultado);
                }
                system("pause");
                break;
            case 2:
                system("cls");
                cout << "Saliendo del programa..." << endl;
        }
    }while(op!=2);




    return 0;
}
