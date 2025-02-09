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
    float a,b,c,d,e,f;

    setlocale(LC_ALL, "");

    a = 10.0;
    b = 5.0;
    c = 2.0;
    d = 1.0;
    e = 4.0;
    f = 3.0;

    cout << "RESULTADOS" << endl;
    //A) f(a,b)= (a/b) + 1
    cout << "A) f(a,b) = " << fixed << setprecision(2) << (a/b)+1 << endl;
    //B) f(a,b)= (a+b)/(c+d)
    cout << "B) f(a,b) = " << fixed << setprecision(2) << (a+b)/(c+d) << endl;
    //C) f(a,b)= (a+(b/c))/(d+(e/f))
    cout << "C) f(a,b) = " << fixed << setprecision(2) << (a+(b/c))/(d+(e/f)) << endl;
    //D) f(a,b)= a + (b/(c-d))
    cout << "D) f(a,b) = " << fixed << setprecision(2) << a+ (b/(c-d)) << endl;

    return 0;
}
