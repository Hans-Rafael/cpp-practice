#include <iostream>
using namespace std;

int main()
{
    double c,f;
    cout << "Programa que convierte grados centigrados a farenheit\n Digua cual es el valor de la temperatura a convertir: ";
    cin >> c;
    // formula seria f = c * (9 / 5) + 32; donde 9/5 = 1.8
    f = c*((double)9/5)+32; //Cast
    //f= c*(9.0/5.0)+32; // usando decimales
    cout << c << " ºC son " << f << " ºF" << endl;
    return 0;
}
