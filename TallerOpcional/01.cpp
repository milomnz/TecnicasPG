#include <iostream>
using namespace std;

//Ejercicio Realizado Por Juan Camilo Henao Munoz ;)

// Declaracion De Metodos
int sumaParesMatrices(int [][4], int, int);
void imprimirMatriz(int [][4], int, int);

//Declaracion de Main
int main(){
    int matriz[4][4] = {{2,3,4,5},
                        {12,34,12,34},
                        {3,4,5,6},
                        {1,2,3,4}};
    int filas = 4, columnas = 4;
    // Imprimir matriz Original...
    imprimirMatriz(matriz,filas,columnas);
    int suma = sumaParesMatrices(matriz, filas, columnas);
    cout <<  "La suma de los indices pares de la matriz es: " << suma ;


    return 0;
}
/*
    Procedimiento que recibe una matriz y la imprime. Recibe parametros
    * la matriz
    * las Filas
    * Las Columnas
    * 
    * Imprime cada uno de los indices de la matriz
*/

void imprimirMatriz(int matriz[][4], int fil, int col){
    for (int i = 0; i<fil;i++ ){
        for (int j =0; j<col; j++){
            cout << matriz[i][j] << '\t';
        }
        cout << '\n';
    }
}
/*
Funcion que recibe Matriz, filas y columnas
Devuelve la sumatoria de la matriz en los indices pares como [0][0], [2][2]
*/

int sumaParesMatrices(int matriz[][4], int fila, int col){
    int suma = 0;
    for (int i = 0; i < fila; i += 2) {       // Recorre filas pares
        for (int j = 0; j < col; j += 2) { // Recorre columnas pares
            suma += matriz[i][j];
        }
    }
    return suma;
}


