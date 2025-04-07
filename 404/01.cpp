#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> arreglo = {1,2,3,4};
    do{
        for(size_t i = 0; i < arreglo.size(); i++){
            cout << arreglo[i] << '\t';
        }
        cout << endl;
    } while(next_permutation(arreglo.begin(), arreglo.end()));
}