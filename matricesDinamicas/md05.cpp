#include <iostream>
#include <vector>

using namespace std;

void llenarMatriz(vector<vector<int>> &matriz);
int sumatoriaPares(vector<vector<int>>);

int main(){
    int filas = 3, col = 3, resultado ;
    vector<vector<int>> matriz(filas,vector<int>(col));
    llenarMatriz(matriz);
    resultado = sumatoriaPares(matriz);

    cout << "La sumatoria de los elementos pares de la matriz es : " << resultado << endl;

    return 0;
}

void llenarMatriz(vector<vector<int>>&matriz){
    int suma = 0;
    for(size_t i ; i<matriz.size(); i++){
        for(size_t j = 0 ;j< matriz[0].size();j++){
            cout << "Ingrese un valor";
            cin >> matriz[i][j];
        }
    }
}

int sumatoriaPares(vector<vector<int>> matriz){
    int suma = 0;
    for(vector<int> i : matriz){
        for(int j : i){
            if(j % 2 == 0){
                suma+=j;
            }
        }
    }
    return suma;
}