#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> matriz;

    for(int i; i<3;i++){
        vector<int> fila;
        for(int j; j<3;j++){
            int num;
            cout << "Ingrese un valor";
            cin >> num;
            fila.push_back(num);
        }
        matriz.push_back(fila);
    }
    for(vector<int> i: matriz){
        for(int j: i){
            cout << j << '\t';
        }
    }

}