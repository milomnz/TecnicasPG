
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n;
    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    if(n < 0){
        cout << "Por favor, ingrese un número entero positivo." << endl;
        return 1;
    }

    cout << "El " << n << "° número de Fibonacci es: " << fibonacci(n) << endl;

    return 0;
}
