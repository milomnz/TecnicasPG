#include <iostream>
#include <string>

using namespace std;

int main(){
    string cadena = "Hola mundo Progamacion";
    int inicio = 0;
    string cadenaPalabra = " ";
    for(size_t i=0; i<cadena.size(); i++){
        cout << cadena[i];
        if(cadena[i] == ' '){
            cout << "La palabra es: " << cadenaPalabra << endl;
            cadenaPalabra.clear();
        }else{
            cadenaPalabra += cadena[i];
            cout <<"Cadena actual es: " << cadenaPalabra ; 
            cout << "------------" << endl;
        }
    }

}