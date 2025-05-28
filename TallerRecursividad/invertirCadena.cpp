#include <iostream>
#include <vector>
#include <string>

using namespace std;

string merge(string cadena, int inicio, int final){
    if(inicio == final){
        return string(1, cadena[inicio]);
    }
    int mitad = (inicio + final) / 2;
    string izq = merge(cadena, inicio, mitad);
    string der = merge(cadena, mitad + 1, final);
    return der+izq;
}



int main(){
    string cadena = "Hola";
    int tam = cadena.length();
    string resultado = merge(cadena, 0, tam - 1);

    cout << "Cadena original: " << cadena << endl;
    cout << "Cadena invertida: " << resultado << endl;  
}