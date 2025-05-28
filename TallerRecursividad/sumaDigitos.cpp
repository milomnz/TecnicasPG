/*
Sumatoria de los dígitos de un número con recursividad
*/

#include <iostream>
#include <vector>

using namespace std;

int sumaDigitos(int num){
    if(num == 0){
        return 0;
    }
    
    return sumaDigitos(num/10) + num%10; 
}

int main(){
    int numero = 175;
    int resultado = sumaDigitos(numero);

    cout << "La sumatoria de los digitos del numero es " << resultado;
    return 0;
}