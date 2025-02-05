#include <iostream>
using namespace std;

int cantNumerosRepetidos(int[], int);
int* almacenarNumerosRepetidos(int[], int[], int);
void visualizar(int*,int);
int main(){
    int arreglo[5] = {12,22,11,15,5};
    int tam = sizeof(arreglo)/sizeof(arreglo[0]);
    int repetidos = cantNumerosRepetidos(arreglo, tam);
    int* arregloRepetidos = new int[repetidos];

    visualizar(arregloRepetidos,repetidos);

    return 0;


}
int almacenarNumerosRepetidos(int arreglo[], int* arregloRepetidos[], int tam){

}