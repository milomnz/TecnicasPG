#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bubbleSort(vector<int>&);

int main(){
    vector <int> arreglo = {2,3,5,1,2};
    bubbleSort(arreglo);
    for(size_t i = 0; i< arreglo.size(); i++){
        cout << arreglo[i]<< '\t';
    }
}

void bubbleSort(vector<int>& arr){
    bool cambio = false;
    do{
        cambio = false;
        for(size_t i = 0; i< arr.size()-1; i++){
            if(arr[i] > arr[i+1]){
                int aux = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = aux;
                cambio = true;
            }
        }
    }while (cambio);
}