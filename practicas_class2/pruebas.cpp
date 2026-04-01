#include <iostream>
using namespace std;
int main()
{
    int temperature; // La temperatura exterior @author hans-rafael
    // Leer e imprimir por eco la temperatura
    cout << "Introducir la temperatura exterior:" << endl;
    cin >> temperature;
    cout << "La temperatura actual es " << temperature << endl;
    // Imprimir actividad print_activity@hans-rafael
    cout << "La actividad recomendada es: ";
    if (temperature > 85)
        cout << "nadar." << endl;
    else if (temperature > 70)
        cout << "tenis." << endl;
    else if (temperature > 32)
        cout << "golf." << endl;
    else if (temperature > 0)
        cout << "esquiar." << endl;
    else
        cout << "bailar." << endl;

    // Usando switch
    int opcion = 2;

    switch (opcion)
    {
    case 1:
        cout << "Elegiste la opción 1";
        break;
    case 2:
        cout << "Elegiste la opción 2"; // Esto se ejecutará
        break;
    default:
        cout << "Opción no válida"; // Respuesta por default
        break;
    }
    return 0;
}