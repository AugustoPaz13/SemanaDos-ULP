#include <iostream>
#include <string.h>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    printf("Ingrese su nombre: ");
    string nombre;
    cin>>nombre;
    printf("Ingrese su apellido: ");
    string apellido;
    cin>>apellido;

    //Creamos una nueva string con el nombre concatenado al apellido con un espacio entremedio
    string nombre_completo = nombre + " " + apellido;

    //Usamos para saltar una linea
    printf("\n");
    cout << "Nombre completo: " << nombre_completo << endl;
    return 0;
}
