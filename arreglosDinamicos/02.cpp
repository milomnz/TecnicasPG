#include <iostream>
using namespace std;

/*
    02. Inicializacion de metodo para actualizar el tamaño de un arreglo
*/

int* push_back(int *arreglo, int tam, int num);

int main(){

    int tam = 4;
    int* arreglo = new int [4];
    for(int i=0; i<4;i++){
        arreglo[i] = i*2;
    }
    arreglo = push_back(arreglo, tam, 10);
    cout << arreglo[4];
    return 0;
    delete arreglo;
}
/*
    Procedimiento que permite agregar un nuevo espacio de memoria al arreglo
*/
int* push_back(int*arreglo,int tam,int num ){
    int* nuevoArreglo = new int[tam+1];
    for(int i=0;i<tam;i++){
        nuevoArreglo[i] = arreglo[i];
    }
    nuevoArreglo[tam] = num;
    delete nuevoArreglo;
    return nuevoArreglo;
}