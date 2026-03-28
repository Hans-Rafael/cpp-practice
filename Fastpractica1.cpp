#include <iostream>
// #include <compare>
using namespace std;

int main()
{
    string var_1;
    string var_2;
    // comentario
    /*Bloque de comentarios*/
    cout << "Inserte un saludo\n";
    cin >> var_1;
    cin.ignore(); // para ignorar el intro y que no se salte el siguiente getline
    cout << "Inserte una pequeña frase\n";
    getline(cin, var_2);
    cout << "Hola usando C++" << endl;
    cout << var_1 << " usando C++\n";
    cout << "frase instertada:" << var_2 << endl;
    auto result = (10 <=> 20) > 0;
    cout << result << endl;

    return 0;
}
