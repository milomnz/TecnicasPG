#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int> arr, int inicio, int final){
    if (inicio == final){
        return arr[inicio];
    }

    int mitad = (final+inicio)/2;

    int minimoIzq = findMin(arr, inicio, mitad);
    int minimoDer = findMin(arr, mitad+1, final);

    return min(minimoIzq, minimoDer); 
}

int findMax(vector<int> arr, int inicio, int final){
    if (inicio == final){
        return arr[inicio];
    }

    int mitad = (final+inicio)/2;

    int minimoIzq = findMax(arr, inicio, mitad);
    int minimoDer = findMax(arr, mitad+1, final);

    return max(minimoIzq, minimoDer);
}

int main(){
    vector<int> arreglo = {5, 7, 6, 7 , 8 ,32 ,12, 31, 4};

    int maximo = findMax(arreglo, 0, arreglo.size()-1);
    int minimo = findMin(arreglo, 0, arreglo.size()-1);
    
    cout << "El valor maximo del arreglo es " << maximo << endl;
    cout << "El valor minimo del arreglo es " << minimo << endl;
    
    return 0;
}



