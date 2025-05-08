#include <iostream>

using namespace std;

int potencia(int, int);

int main(){
    int numero = 4;
    int exponente = 3;

    int resultado = potencia(numero, exponente);
    cout << "La potencia " << exponente << "Del numero" << numero << "es" << resultado;
    return 0;
}

int potencia(int base, int exponente){
    if(exponente == 0){
        return 1;
    }
    return  base * potencia(base, exponente-1);
}