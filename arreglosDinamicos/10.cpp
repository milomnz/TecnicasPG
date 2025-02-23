#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros;
    int posicion, valor;
    char opcion;
    
    do {
        cout << "Ingrese una posicion y valor: ";
        cin >> posicion;
        cin >> valor;
        if (posicion > numeros.size()) {
            cout << "Posicion invalida" << endl;
        } else {
            numeros.insert(numeros.begin() + posicion, valor);
            for (int i : numeros) {
                cout << i << " ";
            }

            cout << "Desea salir S O N: "; 
            cin >> opcion;
        } 
    } while (opcion != 'S' && opcion != 's');

}