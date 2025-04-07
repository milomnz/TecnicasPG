#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> arreglo = {2,3,5,1};
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