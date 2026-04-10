#include <iostream>
#include <fstream> // Librería para archivos

using namespace std;

int main()
{ /**** CAjero automatico basico *****/
    double fondos, retiro, deposito;
    int opc;
    int continuar = 1; // 1 para seguir, 0 para salir

    // 1. INTENTAR LEER EL SALDO GUARDADO
    ifstream archivoLectura("saldo.txt");
    if (archivoLectura.is_open())
    {
        archivoLectura >> fondos;
        archivoLectura.close();
    }
    else
    {
        fondos = 10; // Saldo inicial por defecto si el archivo no existe
    }

    while (continuar == 1)
    {
        cout << "\nSeleccione la opcion de lo que desea hacer" << endl;
        cout << "1.- Consula de saldo | 2.- Deposito | 3.- Retiro | 4.- Salir" << endl;
        cin >> opc;
        switch (opc)
        {
        case 1:
            cout << "su saldo actual es de $" << fondos << endl;
            break;
        case 2:
            cout << "Cuanto desea depositar: $";
            cin >> deposito;
            fondos = fondos + deposito;
            cout << "Su capital ahora es: $" << fondos << endl;
            break;
        case 3:
            cout << "cuanto desea retirar: $";
            cin >> retiro;
            while (retiro > fondos)
            {
                cout << "Fondos insuficiente, trate de nuevo." << endl;
                cin >> retiro;
            }
            fondos = fondos - retiro;
            cout << "No olvide tomar su tarjeta,al salir su dinero se entregara. gracias" << endl;
            break;
        case 4:
        { // 2. GUARDAR EL SALDO ANTES DE SALIR
            ofstream archivoEscritura("saldo.txt");
            archivoEscritura << fondos;
            archivoEscritura.close();

            cout << "No olvide tomar su tarjeta, Gracias por venir" << endl;
            continuar = 0;
        }
        break;
        default:
            cout << "Opcion no valida, intente de nuevo." << endl;
            break;
        }
    }

    return 0;
}