#include <iostream>
#include <vector>

using namespace std;

int suma(int);

int main(){
    int numero = 23456;
    int resultado = suma(numero);
}

int suma(int num){
    if (num == 0) return 0;
    return (num % 10) + suma(num / 10);
}