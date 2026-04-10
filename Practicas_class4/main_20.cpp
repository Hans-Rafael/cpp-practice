#include <iostream>

using namespace std;

int main()
{
    /* code */
    string enter_1, user = "pepe";
    string enter_2, seña = "246";
    int count_f = 3, cont_in = 3;
    
    for (int i = 0; i < count_f; i++)
    {
        cout << "ingrese su nombre de usuario: ";
        cin >> user;
        cout << "Su contraseña: ";
        cin >> seña;
        if (user == enter_1 && seña == enter_2)
        {
            cout << "acceso concedido" << endl;
            break;
        }
        else
        {
            cont_in = cont_in - 1;
            cout << "Entrada incorrecta. Intentos restantes: " << cont_in << " OR " << (i - 2) /**-1*/ << endl;
        }
    }

    return 0;
}
