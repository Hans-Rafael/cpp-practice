
#include <iostream>
using namespace std;
int main()
/*
convertir un estrin a un entero
stoi(entrada) lo convierte a un numero
if (stoi(entrada) > 10) */
/*
#include <string>
#include <cctype> // Necesaria para tolower/toupper
Convertir a MINÚSCULAS
    for (char &c : texto) {
        c = tolower(c);
    }
*/

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
    /* Reglas a recordar
    Tipos permitidos: El switch funciona con tipos "integrales" ( int, char, bool, enum).
     No funciona con: float, double ni string.
     Char vs String:
     '+' es un carácter (un solo símbolo).
     "+" es un string (una cadena, aunque solo tenga un símbolo)
    */
    int opcion = 1;

    switch (opcion)
    {
    case 1:
        cout << "Elegiste la opción 1 \n y helado";
        break;
    case 2:
        cout << "Elegiste la opción 2 "; // Esto se ejecutará y recordar usaren line o salto linea ultima linea se puede quedar en el buffer si no
        break;
    default:
        cout << "Opción no válida \n"; // Respuesta por default
        break;
    }
    return 0;
}