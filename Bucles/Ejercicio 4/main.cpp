/*
Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un período de 24
horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, la temperatura más alta y la más baja.

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

    float temperatura,promedio,MAX,MIN;

    for(int i=1;i<25;i++){
        if(i%4==0){
            temperatura = rand() % 40 + 1;
            printf("Temperatura a la hora %d: %.1f grados\n",i,temperatura);
            promedio += temperatura;
            if(i==4){
                MAX = temperatura;
                MIN = temperatura;
            }else if(temperatura>MAX){
                MAX = temperatura;
            }else if(temperatura<MIN){
                MIN = temperatura;
            }
        }
    }

    promedio = promedio / 6;
    cout << fixed << setprecision(1);
    cout << "\n\nLa temperatura media del dia fue: " << promedio << " grados"
        <<  "\nLa temperatura más alta fue: " << MAX << " grados"
        << "\nLa temperatura más baja fue: " << MIN << " grados"
        << endl;
    return 0;
}
