/*
Escriba un fragmento de programa que intercambie (swap) los valores de 3 variables
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b ,c;

    cout << "EJERCICIO 5" << endl;
    printf("Ingrese el valor de a: ");
    cin >> a;

    printf("Ingrese el valor de a: ");
    cin >> b;

    printf("Ingrese el valor de a: ");
    cin >> c;

    cout << "\nValor a: " << a <<
            "\nValor b: " << b <<
            "\nValor c: " << c << endl;

    int aux = a;
    a = c;
    c = b;
    b = aux;

    cout << "\nValor a: " << a <<
            "\nValor b: " << b <<
            "\nValor c: " << c << endl;

    return 0;
}
