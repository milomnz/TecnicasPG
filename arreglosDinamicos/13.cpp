#include <iostream>
#include <vector>
using namespace std;

/*
Clase 26/02

Uso de procedimientos con la libreria vector
*/

void visualizarArr(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
vector<int> agregarElemento(){
    int tam, num;
    vector<int> arr;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> tam;
    for(int i = 0; i < tam; i++){
        cout << "Ingrese el elemento " << i << ": ";
        cin >> num;
        arr.push_back(num);
    }
    return arr;
}

int main(){
    vector <int> arreglo = agregarElemento();
    visualizarArr(arreglo); 
}