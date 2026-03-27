#include <iostream>
using namespace std;

int main()
{
    float base, h, area, p;
    cout << "Vamos a calcular el area y perimetro de un rectangulo\n";
    cout << "Diga cual es el valor de la base en centimetros \n";
    cin >> base;
    cout << "Diga cual es el valor de la altura: \n";
    cin >> h;
    area = base * h;
    p = base * 2 + h * 2;
    cout << "El valor del area es: " << area << " cm\n";
    cout << "El valor del perimetro es: " << p << " cm \n";
    return 0;
}