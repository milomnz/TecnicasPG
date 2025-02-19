#include <iostream>
using namespace std;

int promedio(int[], int);
int main(){
    int arreglo[4] = {10,20,30,40};
    int tam = sizeof(arreglo)/sizeof(arreglo[0]);
    int prom = promedio(arreglo, tam);
    cout << "El promedio es: " << prom << endl;
}
int promedio(int arreglo[], int tam){
    int suma = 0;
    for(int i = 0; i < tam; i++){
        suma = suma + arreglo[i];
    }
    return suma/tam;
}
