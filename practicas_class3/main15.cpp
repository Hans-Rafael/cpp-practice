/*
.Número de dos cifras
Ingresar un número y verificar si tiene exactamente dos cifras
(entre 10 y 99 o entre -10 y -99). */
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "ingrese un numero entero:";
    cin >> num;
    if (num >= 10 || num <= 99 || num <= -10 || num >= -99)
    {
        cout << "es un numero de 2 digitos" << endl;
    }
    else
        cout << "diferente a dos digitos" << endl;
    return 0;
}