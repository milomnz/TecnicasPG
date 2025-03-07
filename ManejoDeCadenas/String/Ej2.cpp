#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string cadena = "Hola mundo Progamacion hola hola mundo ";
    int inicio = 0;
    vector<string> palabras;
    string cadenaPalabra = "";
    for(size_t i=0; i<cadena.size(); i++){
        cout << cadena[i];
        if(cadena[i] == ' '){
            cout << "La palabra es: " << cadenaPalabra << endl;
            palabras.push_back(cadenaPalabra);
            cadenaPalabra.clear();
        }else{
            cadenaPalabra += cadena[i];
            cout <<"Cadena actual es: " << cadenaPalabra ; 
            cout << "------------" << endl;
        }
    }

    for(string palabra: palabras){
       cout << palabra << '\t';
    }
//  Continuar, metodo para contar las palabras. 
    for(size_t i = 0; i<palabras.size(); i++){
        for(size_t j=i+1 ;j < palabras.size(); j++){

        }
    }
}