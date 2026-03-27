#include <iostream>

using namespace std;

int main()
{
    float hr, sec;

    cout << "¿Cual es la cantidad de horas que deseas ver a cuanto segundos equivale?: ";
    cin >> hr;
    sec = hr * 3600;
    cout << hr << " horas son " << sec << " segundos" << endl;

    return 0;
}
