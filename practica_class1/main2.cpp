#include <iostream>
using namespace std;
//Programa de operaciones matematicas basicas
int main()
{
    int sol, a, b, op;

    sol = 0;
    cout << "Indique un numero porfavor: ";
    cin >> a;
    cout << "indique el segundo Numero: ";
    cin >> b;
    cout << "indique tipo de operacion:\n Para suma: 1 \n Para resta: 2 \n Para multiplicacion: 3 \n Para division: 4\n";
    cin >> op;
    if (op == 1)
    {
        sol = a + b;
    }
    else if (op == 2)
    {
        sol = a - b;
    }
    else if (op == 3)
    {
        sol = a * b;
    }
    else if (op == 4)
    {
        if (b == 0)
        {
            cout << "ERROR, no se puede dividir por cero, intente de nuevo";
            return 0;
        }
        else
        {
            sol = a / b;
        }
    }
    else
    {
        cout << "Opcion no valida, Intentelo de nuevo";
        return 0;
    }
    cout << "el Resultado de la operacion es: " << sol << endl;
    return 0;
}
