/*Ingresar usuario y contraseña.
Mostrar “Acceso concedido” solo si ambos coinciden con valores predefinidos. 
*/
#include <iostream>
using namespace std;

int main(){
    string name, name_pre_def;
    int seña, seña_pre_def;
    name_pre_def="pepe";
    seña_pre_def=2468;
    cout<<"ingrese nombre de usuario:";
    cin >> name;
    cout<<"contraseña:";
    cin>> seña;
    if (seña == seña_pre_def && name==name_pre_def){
        cout<< "Acceso Permitido"<<endl;
    }
    else{
        cout<< "Acceso Denegado!"<<endl;
    }


    return 0;
}