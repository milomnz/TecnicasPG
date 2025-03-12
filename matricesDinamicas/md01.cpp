#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> matriz = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for(size_t filas = 0;filas< matriz.size();filas++){
        for(size_t columnas = 0; columnas < matriz[filas].size();columnas++){
            cout << matriz[filas][columnas] << '\t';
        }
        cout << endl;
    }
    return 0;
}