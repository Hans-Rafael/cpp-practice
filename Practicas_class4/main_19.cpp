// Validacion de Fecha
#include <iostream>
using namespace std;

int dia, mes, año;

int main(int argc, char const *argv[])
{
    cout << "====== Validacion de Fecha ======" << endl;
    cout << "Dia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cout << "Año: ";
    cin>>año;

    if (año < 0)
    {
        cout << "Fecha invalida" << endl;
        cout << "No existe el año " << año << endl;
        return 1; // Aquí se detiene el programa
    }

    if (mes < 1 || mes > 12)
    {
        cout << "Fecha invalidad" << endl;
        cout << "no existe el mes " << mes << endl;
        return 1;
    }
    int dia_max = 31; // La mayoría tiene 31
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        dia_max = 30;
    }
    else
    {
        if (mes == 2)
        {
            // reviso año bisiesto
            bool es_bisiesto = (año % 4 == 0 && año % 100 != 0) || (año % 400 == 0);
            dia_max = es_bisiesto ? 29 : 28;
        }
    }
    if (dia < 1 || dia > dia_max)
    {
        cout << "Error: El dia " << dia << " no existe en el mes " << mes << endl;
        return 1;
    }
    // si paso toda las pruebas.
    cout << "Es una Fecha valida!" << endl;
    return 0;
}