#include <iostream>
#include <string>
using namespace std;
int main(){
    //Desborda la posicion de memoria
    char palabra[12];
    //cin >> palabra;
    cout << "Ingrese una palabra: ";
    // gets(palabra); //Funcion que permite ingresar una cadena de caracteres -- Eliminado por obsolencia en C++11.
    //cin.getline(palabra, 20); //Funcion que permite ingresar una cadena de caracteres con un limite de caracteres.
    cin.getline(palabra, 12, '\n');
    cout << "Primer caracter: "<< palabra << endl;

    return 0;
}
