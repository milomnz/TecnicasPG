/*
Haga un merge sort de un arreglo dado que no tenga en cuenta el numero 8


*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeSort(vector<int> izq, vector<int> der);
vector<int> merge(vector<int> arr, int inicio, int final){
    if (inicio == final){
        vector<int> dato;
        if(arr[inicio] != 8 ){
            dato.push_back(arr[inicio]);
        }else{
            return dato;
        }
        return dato;
    }
    
    int mitad = (final+inicio)/2;

    vector<int> izq = merge(arr, inicio, mitad);
    vector<int> der = merge(arr, mitad+1, final);
    return mergeSort(izq, der);
}

vector<int> mergeSort(vector<int> izq, vector<int> der){
    int i = 0;
    int j = 0;

    vector<int> resul;

    while(i<izq.size() && j<der.size()){
        if(izq[i] < der[j]){
            resul.push_back(izq[i]);
            i++;
        }else{
            resul.push_back(der[j]);
            j++;
        }
    }

    while(i < izq.size()){
        resul.push_back(izq[i]);
        i++;
        
    }
    while(j < der.size()){
        resul.push_back(der[j]);
        j++;
    }

    return resul;
}

int main(){
    vector<int> numeros = {3,7,8,9,12,3,5,7,33,8,2};

    vector<int> resul = merge(numeros, 0, numeros.size()-1);
    
    for(int i : resul){
        cout << i << '\t';
    }
}