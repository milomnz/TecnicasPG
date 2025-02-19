#include <iostream>
using namespace std;

int sumaArreglo(int [], int );
int main(){
    int arreglo[5] = {20, 20, 4, 2, 1};

    //FORMULA PARA CALCULAR EL TAMAÑO DE ARREGLOS ESTATICOS!!
    int tam = sizeof(arreglo)/sizeof(arreglo[0]);
    int resultado = sumaArreglo(arreglo, tam);

    cout << "La suma del arreglo es: " << resultado;
    
}

int sumaArreglo(int arreglo[], int tam){
    int sumaT = 0;
    for(int i = 0; i < tam; i++){
        sumaT += arreglo[i];
    }
    return sumaT;

}
