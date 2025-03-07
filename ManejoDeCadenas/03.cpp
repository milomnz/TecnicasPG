#include <iostream>
// Libreria para el manejo de cadenas string
#include <cstring>

using namespace std;

int main(){
    char palabra[] = "Hola mundo";
    char palabra2[] = "Hola mundo";
    /*
    Strcmp, compara dos cadenas y retorna 1 si son diferentes y 0 si son iguales.
    */
    cout << strcmp(palabra, palabra2);
    cout << endl;
    if(strcmp(palabra, palabra2)){
        cout << "Las palabras son diferentes" << endl;
    }else{  // Si strcmp retorna 0
        cout << "Las palabras son iguales" << endl;
    }
}