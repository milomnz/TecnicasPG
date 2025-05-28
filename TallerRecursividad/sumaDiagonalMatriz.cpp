#include <iostream>
#include <vector>

using namespace std;

int sumaDiagonal(vector<vector<int>> matriz, int inicio, int final){
    if(inicio == final){
        return matriz[inicio][inicio];
    }

    return sumaDiagonal(matriz, inicio+1, final) + matriz[inicio][inicio];

}

int main(){
    vector<vector<int>> matriz = 
        {
            {2,7,8,9},
            {6,7,8,2},
            {3,5,7,2},
            {1,4,5,3}
        };

    int suma = sumaDiagonal(matriz, 0, matriz.size()-1);
    cout << "La sumatoria de la diagonal principal de la matriz es: " << suma;
}