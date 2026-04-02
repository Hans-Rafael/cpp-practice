/*17.Calculadora simple
Ingresar dos números y una operación (+, -, *, /).
Resolver usando switch.*/
#include <iostream>
using namespace std;
double num1, num2, sol;
char opc;
int main()
{
    cout << "Calculadora" << endl
         << "indique el primer valor: ";
    cin >> num1;
    cout << "Cual es la operacion a realizar:" << endl
         << "suma use +; resta -; multiplicacion *; division /" << endl;
    cin >> opc;
    cout << "Indique el segundo valor a utilizar y presione enter: ";
    cin >> num2;
    switch (opc)
    {
    case '+':
        sol = num1 + num2;
        cout << "suma: " << sol << endl;
        break;
    case '-':
        sol = num1 - num2;
        cout << "resta: " << sol << endl;
        break;
    case '*':
        sol = num1 * num2;
        cout << "multiplicacion: " << sol << endl;
        break;
    case '/':
        if (num2 == 0)
            {cout << "no posible hacer divicion por 0" << endl;
            break;}
        else
        {
            sol = num1 / num2;
        }
        cout << "Division: " << sol << endl;
        break;
    default:
        cout << "Opción no válida \n"; // Respuesta por default
        break;
    }

    return 0;
}