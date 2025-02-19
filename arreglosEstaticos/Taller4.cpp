#include <iostream>
using namespace std;

int buscarNumero(int[], int, int*);

int main(){
    int numeros[4] = {1, 2, 3, 4,};
    int tam = sizeof(numeros)/sizeof(numeros[0]);
    int x = 3;
    int* NumeroABuscar = &x;

    int resultado = buscarNumero(numeros, tam, NumeroABuscar);
    if (resultado != -1) {
        cout << "El numero buscado esta en el indice: " << resultado << endl;
    } else {
        cout << "El numero no se encontro en el arreglo." << endl;
    }

}
int buscarNumero(int numeros[], int tam, int *numeroABuscar){
    for(int i = 0; i<tam; i++){
        if(numeros[i] == *numeroABuscar){
           return numeros[i];
        }
    }
    return -1;
}