/*
Métodos basicos de String

Length() -> Devuelve la longitud de la cadena

Size() -> Devuelve la longitud de la cadena

Empty() -> Devuelve true si la cadena esta vacia

Clear() -> Limpia la cadena

Substr(pos, len) -> Devuelve una subcadena de la cadena original

Find(str) -> Devuelve la primera ocurrencia de la cadena str en la cadena original

Replace() -> Reemplaza una cadena por otra

*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string cadena = "Pepito esta enamorado de Juanita";
    string subcadena = cadena.substr(0,11);

    cout << subcadena;
}