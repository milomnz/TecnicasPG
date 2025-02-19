
#include <iostream>
using namespace std;

int mayorYMenor(int[], int,int*, int*){
}
int main(){
    int arreglo [5] = {3,17,55,32,-4};
    int tam = sizeof(arreglo)/sizeof(arreglo[0]);
    int menor, mayor;
    int resultado = mayorYMenor(arreglo, tam, &menor,&mayor);
    cout << "El menor valor es: " << menor << endl;
    cout << "El mayor valor es: " << mayor << endl;

    return 0;
}
int mayorYMenor(int arreglo[], int tam, int* menor, int* mayor){
    *menor = arreglo[0];
    *mayor = arreglo[0]; 

    for(int i=0; i<tam; i++){
        if(arreglo[i] < *menor){
            *menor = arreglo[i];
        }
        if(arreglo[i] > *mayor){
            *mayor = arreglo[i];
        }
    }
    return 0;   
}


