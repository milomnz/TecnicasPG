#include <iostream>
#include <vector>
#include <limits.h>
#include <cmath> // Para pow()

using namespace std;

int main() {
    int valorObjetivo = 0;
    int tamConjunto = 0;

    cout << "Ingrese el valor objetivo: ";
    cin >> valorObjetivo;
    cout << "Ingrese el tamaño del conjunto: ";
    cin >> tamConjunto;
    
    vector<int> numeros(tamConjunto);
    for(int i = 0; i < tamConjunto; i++) {
        cout << "Ingrese el numero " << (i+1) << ": ";
        cin >> numeros[i];
    }

    vector<int> mejorSubconjunto;
    int maxSuma = 0;
    int totalSubconjuntos = pow(2, tamConjunto);
    
    for(int i = 0; i < totalSubconjuntos; i++) {
        vector<int> subconjuntoActual;
        int sumaActual = 0;
        for(int j = 0; j < tamConjunto; j++) {
            // Si el j-ésimo bit está activado
            if(i & (1 << j)) {
                subconjuntoActual.push_back(numeros[j]);
                sumaActual += numeros[j];
            }
        }
        if(sumaActual <= valorObjetivo && sumaActual > maxSuma) {
            maxSuma = sumaActual;
            mejorSubconjunto = subconjuntoActual;
        }
    }
    
    cout << "El subconjunto con la suma mas grande es: ";
    for(int num : mejorSubconjunto) {
        cout << num << " ";
    }
    cout << endl << "Con una suma de: " << maxSuma << endl;

    return 0;
}