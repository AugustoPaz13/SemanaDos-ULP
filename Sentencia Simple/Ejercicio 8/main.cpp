/*
La calificación final de un estudiante es la media ponderada de tres notas: la nota de prácticas que
cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota de participación que cuenta el 10% restante.
Escriba un programa que lea de la entrada estándar las tres notas de un alumno y escriba en la salida estándar su
nota final. Permita ingresar por teclado N, la cantidad de alumnos a calificar.
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
    int cantAlumnos;
    float notaPracticas, notaTeoria, notaParticipacion, notaFinal;
    setlocale(LC_ALL, "");

    cout << "EJERCICIO 8" << endl;

    printf("Ingrese la cantidad de alumnos a calificar: ");
    cin >> cantAlumnos;

    for(int i=0;i<cantAlumnos;i++){
        printf("Ingrese la nota de Alumno %d: ",i+1);
        cout << "\nIngrese la nota de prácticas (0-10): ";
        cin >> notaPracticas;
        cout << "Ingrese la nota teórica (0-10): ";
        cin >> notaTeoria;
        cout << "Ingrese la nota de participación (0-10): ";
        cin >> notaParticipacion;
        notaFinal = (notaPracticas * 0.3) + (notaTeoria * 0.6) + (notaParticipacion * 0.1);
        cout << "La nota final del alumno 1 es: " << notaFinal << "\n";
    }

    cout << "Hello world!" << endl;
    return 0;
}
