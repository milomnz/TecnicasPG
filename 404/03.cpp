#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<char> arreglo = {'A','b','C'};
    do{
        for(size_t i = 0; i < arreglo.size(); i++){
            cout << arreglo[i] << '\t';
        }
        cout << endl;
    } while(next_permutation(arreglo.begin(), arreglo.end()));
    do{
        for(size_t i = 0; i < arreglo.size(); i++){
            cout << arreglo[i] << '\t';
        }
        cout << endl;
    } while(prev_permutation(arreglo.begin(), arreglo.end()));
}