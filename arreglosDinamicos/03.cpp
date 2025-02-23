#include <iostream>
using namespace std;

/*
    03. Procedimiento para eliminar una posicion del arreglo
*/

int* pow_back(int*arreglo, int& tam);

int main(){
    int tam = 4, num = 5;

    int* arreglo = new int [tam];
    for(int i; i<tam;i++){
        arreglo[i] = i*2;
    }

    arreglo = pow_back(arreglo, tam);
    cout <<arreglo[3];
    delete arreglo;
    return 0;

}

int* pow_back(int*arreglo, int& tam){
    int* arreglo2 = new int[tam-1];
    for(int i = 0; i<tam-1;i++){
       arreglo2[i] = arreglo[i];
    }
    tam = tam-1;
    delete arreglo;
    return arreglo2;
}