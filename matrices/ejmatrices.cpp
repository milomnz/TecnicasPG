#include <iostream>
using namespace std;

int sumaMatrices(int [2][3]);
int main(){
    int matriz[2][3] = {{2,1,7},{5,6,7}};
    int resultado = sumaMatrices(matriz);
    cout << "La suma de la matriz es: " << resultado;
}

int sumaMatrices(int matriz[2][3]){
    int suma = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            suma += matriz[i][j];
        }
    }
    return suma;
}