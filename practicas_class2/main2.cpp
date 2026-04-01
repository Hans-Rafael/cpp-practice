#include <iostream>
using namespace std;

int main()
// Ficha de empleado creando
{
    string nombre, apellido;
    int edad;
    double sueldo, aumento, sueldoFin;
    cout << "Ingrese el nombre: ";
    cin >> nombre;
    cout << "Ingrese el apellido:";
    cin >> apellido;
    cout << "Ingrese la Edad: ";
    cin >> edad;
    cout << "Ingrese el Sueldo basico: ";
    cin >> sueldo;
    cout << " % porcentaje de aumento: ";
    cin >> aumento;
    sueldoFin = sueldo + sueldo * (aumento / 100);
    sueldoFin = (int)(sueldoFin * 100) / 100.0;
    cout << " " << endl;
    cout << "==========================================================================" << endl;
    cout << "                         FICHA DEL EMPLEADO                              " <<endl<<endl;
    cout << "--------------------------------------------------------------------------"<<endl;
    cout << "Nombre Completo        :  "<< nombre << "  "<< apellido <<endl;
    cout << "edad                   :  "<< edad <<" años" << endl;
    cout << "porcentaje de aumento  :  "<< aumento<<" %"<<endl;
    cout << "Sueldo final           :  "<<sueldoFin<<" $"<<endl;
    cout << "========================================================================="<<endl;
    return 0;
}
