#include <iostream>
using namespace std;

consteval int get_value(){
    return 3;
    
}
int main(){
    string sal;
    // 
   constexpr int value=get_value();
   cout << "value : " << value << endl;
   cout << "introdusca su nombre para el saludo"<<endl;
   //cin >> sal; entrana normal de una palabra.
   getline(cin,sal);// para entrada de mas de una palabra
   cout<< sal<<" ,Fue el saludo\n";
   return 0;
}

