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
    printf("Ingrese su edad: ");
    int edad;
    cin >> edad;

    printf("Ingrese su sexo (M/F): ");
    char sexo[1];
    cin >> sexo;

    printf("Ingrese su altura en (cm): ");
    double altura;
    cin >> altura;

    cout << "\nCaracteristicas de la persona: \n"
        << "Edad: " << edad
        << "\nSexo: " << sexo
        << "\nAltura: " << altura << endl;
    return 0;
}
