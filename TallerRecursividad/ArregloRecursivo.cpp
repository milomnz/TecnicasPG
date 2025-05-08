#include <iostream>
#include <vector>
using namespace std;

int sumaRecursiva(vector<int>, int);

int main(){
    vector<int> numeros = {2,4,6,7};
    int con = 0;
    int resultado = sumaRecursiva(numeros, con);
    cout << "La sumatoria de los elementos del arreglo es: " << resultado;
}
int sumaRecursiva(vector<int> arreglo, int con){
    if(con == arreglo.size()-1){
        return arreglo[con];
    }
    return sumaRecursiva(arreglo, con + 1) + arreglo[con];
}
