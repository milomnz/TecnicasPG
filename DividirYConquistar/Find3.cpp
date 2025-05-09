#include <iostream>
#include <vector>

using namespace std;

void encontrar(vector<int>, int, int, int, int&);

int main(){
    vector<int> arreglo = {3,4,10,3,2,1,7,3,2,3};
    int con = 0;
    encontrar(arreglo,0,arreglo.size()-1,3,con);
    cout << "Las veces que esta el numero 3 es" << con;
}

void encontrar(vector<int> arr, int inicio, int final, int num, int& con){
    if(inicio == final){
        if (arr[inicio] == num){
            con++;
        }
    return;
    }
    int mitad = (final + inicio)/2;
    encontrar(arr, inicio, mitad, 3, con);
    encontrar(arr, mitad+1, final, 3, con);
}