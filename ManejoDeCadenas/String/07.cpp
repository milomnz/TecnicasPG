#include <iostream>
#include <string>

/*
Concatenación de cadenas

*/
using namespace std;

int main(){
    string nombre;
    cout << "Ingrese su nombre";
    cin >> nombre;
    string saludo = "Bienvenido" + nombre + "!";
    cout << saludo;
}