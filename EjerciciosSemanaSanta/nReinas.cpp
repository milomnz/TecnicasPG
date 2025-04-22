#include <iostream>
#include <vector>
#include <algorithm> 
#include <cmath> 
using namespace std;

bool esValida(vector<int>& permutacion) {
    int n = permutacion.size();
    
    // Verificar diagonales
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Si la diferencia entre columnas es igual a la diferencia entre filas,
            // entonces están en la misma diagonal
            if (abs(permutacion[i] - permutacion[j]) == j - i) {
                return false;
            }
        }
    }
    return true;
}

// Función para imprimir el tablero
void imprimirTablero(vector<int>& solucion) {
    int n = solucion.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (solucion[j] == i) {
                cout << "Q ";
            } else {
                cout << "_ ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

// Función principal para resolver el problema
void resolverNReinas(int n) {
    vector<int> permutacion(n);
    
    // Inicializar permutación con valores 0 a n-1
    for (int i = 0; i < n; i++) {
        permutacion[i] = i;
    }
    
    int contadorSoluciones = 0;
    
    // Generar permutaciones y verificar
    do {
        if (esValida(permutacion)) {
            cout << "Solucion " << ++contadorSoluciones << ":" << endl;
            imprimirTablero(permutacion);
        }
    } while (next_permutation(permutacion.begin(), permutacion.end()));
    
    cout << "Total de soluciones encontradas: " << contadorSoluciones << endl;
}

int main() {
    int n;
    cout << "Ingrese el tamano del tablero (N): ";
    cin >> n;
    
    resolverNReinas(n);
    
    return 0;
}