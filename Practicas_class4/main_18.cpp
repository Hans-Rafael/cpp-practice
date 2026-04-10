// validar un menu d 4 entradas
#include <iostream>
using namespace std;

int main()
{
    int opc;
    int cont = 2;
    while (cont > 0)
    {
        cont = cont - 1;
        cout << "seleccione una opcion del 1 -4 : ";
        cin >> opc;
        switch (opc)
        {
        case 1:
            cout << "Exelente 🍾, opciones restantes: " << cont<<endl;
            break;
        case 2:
            cout << "Exelente 🍾, opciones restantes: " << cont<<endl;
            break;
        case 3:
            cout << "Exelente 🍾, opciones restantes: " << cont<<endl;
            break;
        case 4:
            cout << "Exelente 🍾, opciones restantes: " << cont<<endl;
            break;
        default:
            cout << "Error 🤌, opciones restantes: " << cont<<endl;
            break;
        }
    }
    return 0;
}
