#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){
    // Método para crear una matriz con filas y columnas. Las llena con 0 por defecto
    vector<vector<int>> matriz(3, vector<int>(4));
    vector<float> Vpromedio;

    //Método para llenar la matriz 
    for(size_t i = 0; i<matriz.size(); i++){
        for(size_t j = 0; j<matriz[0].size(); j++){
            cout << "Ingrese un valor";
            cin >> matriz[i][j];
        }
    }
    //Método para sumar las columnas
    for(size_t col = 0; col<matriz[0].size();col++){
        float suma = 0;
        for(size_t fil = 0;fil<matriz.size(); fil++){
            suma += matriz[fil][col];
        }
        float promedio = suma/matriz.size();
        Vpromedio.push_back(promedio);
    }
    //Método para imprimir el vector de promedio
    for(size_t i : Vpromedio){
        cout << i << '\t';
       
    }
    cout << "Fin de vector de promedios" << endl;
    // Método para imprimir la matriz.
    for(vector<int> i : matriz){
        for(int j : i){
            cout << j << '\t';
        }
        cout << endl;
    }
}