#include <iostream>
#include <vector>
using namespace std;

void EliminarImpares(vector<int>&);

int main(){
    vector<int> numeros;
    int digitos, numInsert;
    cout << "Cuantos elementos desea agregar al arreglo? ";
    cin >> digitos;
    for (int i = 0; i < digitos; i++)
    {
        cout << "Que numero desea ingresar en la posicion: " << i << endl;
        cin >> numInsert;
        numeros.push_back(numInsert);
    }
    
    
}