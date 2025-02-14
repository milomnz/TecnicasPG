#include <iostream>
using namespace std;

/*
    01. Creacion de arreglos dinamicos en c++

    Palabras claves:
    * new : permite crear el espacio de memoria del arreglo.
    * delete : permite eliminar el espacio de memoria del arreglo.


*/
int main(){
    int* arreglo = new int[3];
    arreglo[0] = 10;
    for(int i = 0; i<3; i++){

    }
    for(int i=0;i<3;i++){
        cout << arreglo[i] << '\t';

    }
    delete arreglo;   



}