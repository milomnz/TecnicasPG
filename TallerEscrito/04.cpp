#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<vector<double>> matriz(3, vector<double>(3));
    
    for(size_t i = 0; i<matriz.size(); i++){
        for(size_t j =0; j<matriz[0].size(); j++){
            cout << "Digite la nota del estudiante";
            cin >> matriz[i][j];
        }
    }
    double maxValor = 0;
    
    for (size_t i =0;i<matriz.size();i++){
        for(size_t j = 0; j<matriz[0].size();j++){
            if(matriz[i][j] > maxValor){
                maxValor = matriz[i][j];
            }
        }
    }
    cout << "La nota mas alta del curso es " << maxValor;


}
