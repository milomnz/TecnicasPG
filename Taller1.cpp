#include <iostream>
using namespace std;

int sumaArreglo(int [], int);
int main() {
    int arreglo[7] = {4,7,32,55,17,5,9};

    int tam = sizeof(arreglo)/sizeof(arreglo[0]);
    int resultado = sumaArreglo(arreglo, tam);
    cout << "La suma del arreglo es: " << resultado << endl;
}

int sumaArreglo(int arreglo[], int tam){
    int sumaTotal = 0;
    for (int i = 0; i<tam; i++){
        sumaTotal = sumaTotal + arreglo[i];
    }
    return sumaTotal;
}