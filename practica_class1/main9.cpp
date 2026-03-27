#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    double raiz;
    cout << "Programa para sacar la raiz cuadrada" << endl;
    cout << "Numero del cual desea conocer la raiz cuadrada" << endl;
    cin >> num;
    if (num < 0)
    {
        cout << "Error: No se puede calcular la raiz cuadrada de un numero negativo" << endl;
        return 1;
    }
    raiz = sqrt(num);
    cout << "la raiz cuadrada del numero " << num << " es: " << raiz << endl;
    return 0;
}