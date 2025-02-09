/*
 En una clase de 5 alumnos se han realizado 3 exámenes, y se requiere determinar según se elija una opción
el número de:
a) Alumnos que aprobaron todos los exámenes.
b) Alumnos que aprobaron al menos un examen.
c) Alumnos que aprobaron únicamente el último examen.
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
    srand(static_cast<unsigned>(time(0)));

    int alumno1Ex1,alumno1Ex2,alumno1Ex3;
    int alumno2Ex1,alumno2Ex2,alumno2Ex3;
    int alumno3Ex1,alumno3Ex2,alumno3Ex3;
    int op;
    bool hayAprobados;

    setlocale(LC_ALL, "");

    //ASIGNAR NOTAS
    for(int i=1;i<10;i++){
        switch(i){
            case 1:
                alumno1Ex1 = rand() % 10 + 1;
                break;
            case 2:
                alumno1Ex2 = rand() % 10 + 1;
                break;
            case 3:
                alumno1Ex3 = rand() % 10 + 1;
                break;
            case 4:
                alumno2Ex1 = rand() % 10 + 1;
                break;
            case 5:
                alumno2Ex2 = rand() % 10 + 1;
                break;
            case 6:
                alumno2Ex3 = rand() % 10 + 1;
                break;
            case 7:
                alumno3Ex1 = rand() % 10 + 1;
                break;
            case 8:
                alumno3Ex2 = rand() % 10 + 1;
                break;
            case 9:
                alumno3Ex3 = rand() % 10 + 1;
                break;
        }
    }

    do{
        system("cls");
        printf("1. Ver notas por alumno\n");
        printf("2. Alumnos que aprobaron todos los examenes\n");
        printf("3. Alumnos que aprobaron al menos un examen\n");
        printf("4. Alumnos que aprobaron unicamente el ultimo examen\n");
        printf("5. Salir\n");
        printf("Opción: ");
        cin>>op;
        while(op>5 || op<1){
            printf("Opción no valida, intente de nuevo...\n");
            printf("Opción: ");
            cin>>op;
        }
        switch(op){
            case 1:
                system("cls");
                for(int i=1;i<10;i++){
                    switch(i){
                        case 1:
                            cout << "Nota Alumno 1 Examen 1: " << alumno1Ex1 << endl;
                            break;
                        case 2:
                            cout << "Nota Alumno 1 Examen 2: " << alumno1Ex2 << endl;
                            break;
                        case 3:
                            cout << "Nota Alumno 1 Examen 3: " << alumno1Ex3 << endl;
                            break;
                        case 4:
                            cout << "Nota Alumno 2 Examen 1: " << alumno2Ex1 << endl;
                            break;
                        case 5:
                            cout << "Nota Alumno 2 Examen 2: " << alumno2Ex2 << endl;
                            break;
                        case 6:
                            cout << "Nota Alumno 2 Examen 3: " << alumno2Ex3 << endl;
                            break;
                        case 7:
                            cout << "Nota Alumno 3 Examen 1: " << alumno3Ex1 << endl;
                            break;
                        case 8:
                            cout << "Nota Alumno 3 Examen 2: " << alumno3Ex2 << endl;
                            break;
                        case 9:
                            cout << "Nota Alumno 3 Examen 3: " << alumno3Ex3 << endl;
                            break;
                    }
                }
                system("pause");
                break;
            case 2:
                system("cls");
                hayAprobados = false;
                if(alumno1Ex1>=7 && alumno1Ex2 >=7 && alumno1Ex3>=7){
                    cout << "¡Alumno 1 APROBÓ todos los examenes!" << endl;
                    hayAprobados = true;
                }
                if(alumno2Ex1>=7 && alumno2Ex2 >=7 && alumno2Ex3>=7){
                    cout << "¡Alumno 2 APROBÓ todos los examenes!" << endl;
                    hayAprobados = true;
                }
                if(alumno3Ex1>=7 && alumno3Ex2 >=7 && alumno3Ex3>=7){
                    cout << "¡Alumno 3 APROBÓ todos los examenes!" << endl;
                    hayAprobados = true;
                }
                if(!hayAprobados){
                    cout << "¡Ningun alumno APROBÓ todos los examenes!" << endl;
                }
                system("pause");
                break;
            case 3:
                system("cls");
                hayAprobados = false;
                if(alumno1Ex1>=7 || alumno1Ex2 >=7 || alumno1Ex3>=7){
                    cout << "¡Alumno 1 APROBÓ al menos examen!" << endl;
                    hayAprobados = true;
                }
                if(alumno2Ex1>=7 || alumno2Ex2 >=7 || alumno2Ex3>=7){
                    cout << "¡Alumno 2 APROBÓ al menos examen!" << endl;
                    hayAprobados = true;
                }
                if(alumno3Ex1>=7 || alumno3Ex2 >=7 || alumno3Ex3>=7){
                    cout << "¡Alumno 3 APROBÓ al menos un examen!" << endl;
                    hayAprobados = true;
                }
                if(!hayAprobados){
                    cout << "¡Ningun alumno APROBÓ al menos un examen!" << endl;
                }
                system("pause");
                break;
            case 4:
                system("cls");
                hayAprobados = false;
                if(alumno1Ex1<7 && alumno1Ex2 <7 && alumno1Ex3>=7){
                    cout << "¡Alumno 1 APROBÓ solamente el último examen!" << endl;
                    hayAprobados = true;
                }
                if(alumno2Ex1<7 && alumno2Ex2 <7 && alumno2Ex3>=7){
                    cout << "¡Alumno 2 APROBÓ solamente el último examen!" << endl;
                    hayAprobados = true;
                }
                if(alumno3Ex1<7 && alumno3Ex2 <7 && alumno3Ex3>=7){
                    cout << "¡Alumno 3 APROBÓ solamente el último examen!" << endl;
                    hayAprobados = true;
                }
                if(!hayAprobados){
                    cout << "¡Ningun alumno APROBÓ unicamente el ultimo examen!" << endl;
                }
                system("pause");
                break;
            case 5:
                system("cls");
                printf("Saliendo del programa...\n");
                system("pause");
                break;
        }
    }while(op!=5);

    return 0;
}
