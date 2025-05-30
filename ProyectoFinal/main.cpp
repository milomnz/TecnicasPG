#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

/*
Proyecto Final Tecnicas de Progamacion

Autor: Juan Camilo Henao Muñoz.

Tecnica: Recursividad, Divide y Venceras Y Fuerza Bruta.
Paso 1: Leer archivo de texto con las palabras a buscar.
Paso 2: Leer archivo de texto con la sopa de letras.
Paso 3: Buscar las palabras en la sopa de letras.
Paso 4: Generar archivo de texto con las palabras encontradas.
Paso 5: Mostrar en pantalla las palabras encontradas.

Archivo de Salida: Se debe generar un nuevo archivo de salida utilizando ofstream
en C++. Este archivo debe contener:
o Las entradas y salidas del problema.
o Las pre-condiciones y pos-condiciones.
o Una explicación de por qué se seleccionó una técnica específica vista en
clase para resolver el problema. Esta explicación debe identificar la técnica y
argumentar por qué se eligió para resolver el problema.
o La salida final del problema.
*/

using namespace std;

vector<string> palabrasABuscar(){
    vector<string> palabras;
    ifstream archivo("palabras_a_buscar.txt");
    string linea, palabra;
    
    while(getline(archivo, linea)){
        stringstream ss(linea);
        while(ss >> palabra){  // El operador >> automáticamente salta espacios
            palabras.push_back(palabra);
        }   
    }
    return palabras;
}

vector<vector<char>> leerSopa(){
    vector<vector<char>> sopa;
    ifstream archivo("sopa_de_letras.txt");
    string linea;
    while(getline(archivo, linea)){
        vector<char> fila;
        for(char c : linea){
            if(c != ' ')
                fila.push_back(c);
        }
        sopa.push_back(fila);
    }
    return sopa;
}

bool busquedaHorizontal(vector<vector<char>> sopa, string palabra, int& fila, int& columna){
    
    for(size_t i = 0; i<sopa.size(); ++i){
        for(size_t j = 0; j<=sopa[0].size() - palabra.size(); ++j){
            bool encontrada = true;
            for(size_t k = 0; k < palabra.size(); ++k){
                if(sopa[i][j+k] != palabra[k]){
                    encontrada = false;
                    break;
                }
            }
            if(encontrada){
                fila = i;
                columna = j;
                return true;
            }
        }
    }

    fila = -1;
    columna = -1;
    return false;    
}

bool busquedaHorizontalInvertida(vector<vector<char>>& sopa,string palabra, int& fila, int& columna) {
    for (size_t i = 0; i < sopa.size(); ++i) {
        for (size_t j = palabra.size() - 1; j < sopa[0].size(); ++j) {
            bool encontrada = true;
            for (size_t k = 0; k < palabra.size(); ++k) {
                if (sopa[i][j - k] != palabra[k]) {
                    encontrada = false;
                    break;
                }
            }
            if (encontrada) {
                fila = i;
                columna = j;
                return true;
            }
        }
    }

    fila = -1;
    columna = -1;
    return false;
}

bool busquedaVertical(vector<vector<char>>& sopa,string palabra, int& fila, int& columna){
    for(size_t i = 0; i<sopa[0].size(); ++i){
        for(size_t j = 0; j<=sopa.size() - palabra.size(); ++j){
            bool encontrada = true;
            for(size_t k = 0; k < palabra.size(); k++){
                if(sopa[j+k][i] != palabra[k]){
                    encontrada = false;
                    break;
                }
            }
            if(encontrada){
                fila = j;
                columna = i;
                return true;
            }
        }
    }

    fila = -1;
    columna = -1;
    return false;
}


bool busquedaVerticalInvertida(vector<vector<char>>& sopa,string palabra, int& fila, int& columna){
    for (size_t i = 0; i < sopa[0].size(); ++i) {
        for (size_t j = palabra.size() - 1; j < sopa.size(); ++j) {
            bool encontrada = true;
            for (size_t k = 0; k < palabra.size(); ++k) {
                if (sopa[j-k][i] != palabra[k]) {
                    encontrada = false;
                    break;
                }
            }
            if (encontrada) {
                fila = j - palabra.size()-1;
                columna = i;
                return true;
            }
        }
    }
    fila = -1;
    columna = -1;
    return false;
}

bool busquedaDiagonal(vector<vector<char>>& sopa,string palabra, int& fila, int& columna){
    for(size_t i = 0; i<=sopa.size() - palabra.size(); ++i){
        for(size_t j = 0; j<=sopa[0].size() - palabra.size(); ++j){
            bool encontrada = true;
            for(size_t k = 0; k < palabra.size(); ++k){
                if(sopa[i + k][j + k] != palabra[k]){
                    encontrada = false;
                    break;
                }
            }
            if(encontrada){
            fila = i;
            columna = j;
            return true;
            }   
        }    
    }
    fila = -1;
    columna = -1;
    return false;
}
bool busquedaDiagonalInvertida(vector<vector<char>>& sopa, string palabra, int& fila, int& columna) {
    for (int i = palabra.size() - 1; i < sopa.size(); ++i) {
        for (int j = 0; j <= sopa[0].size() - palabra.size(); ++j) {
            bool encontrada = true;
            for (int k = 0; k < palabra.size(); ++k) {
                if (sopa[i - k][j + k] != palabra[k]) {
                    encontrada = false;
                    break;
                }
            }
            if (encontrada) {
                fila = i;
                columna = j;
                return true;
            }
        }
    }
    fila = -1;
    columna = -1;
    return false;
}



void busqueda(ofstream& archivo, vector<vector<char>> sopa, vector<string> palabras, int& fila, int& columna ){

    for(string palabra : palabras){
        if (busquedaHorizontal(sopa, palabra, fila, columna) ||
            busquedaHorizontalInvertida(sopa, palabra, fila, columna) ||
            busquedaVertical(sopa, palabra, fila, columna) ||
            busquedaVerticalInvertida(sopa, palabra, fila, columna) ||
            busquedaDiagonal(sopa, palabra, fila, columna) ||
            busquedaDiagonalInvertida(sopa, palabra, fila, columna)) {
            
            archivo << "Palabra: " << palabra << " encontrada en la fila: " << fila 
                          << ", columna: " << columna << endl;
        } else {
            archivo << "Palabra: " << palabra << " no encontrada." << endl;
        }
    }
}



int main(){
    vector<string> palabras = palabrasABuscar();
    for(string palabra : palabras){
        cout << palabra << endl;
    }
    vector<vector<char>> sopa = leerSopa();
    for(vector<char> fila : sopa){
        for(char c : fila){
            cout << c << ' ';
        }
        cout << endl;
    }
    // Entradas y Salidas del problema

    ofstream archivoSalida("salida.txt");
    archivoSalida << "Entradas del problema:" << endl;
    archivoSalida << "1. Palabras a buscar:" << endl;
    for(const string& palabra : palabras){
        archivoSalida << palabra << endl;
    }
    archivoSalida << "2. Sopa de letras:" << endl;
    for(const vector<char>& fila : sopa){
        for(char c : fila){
            archivoSalida << c << ' ';
        }
        archivoSalida << endl;
    }

    // Salidas del problema
    archivoSalida << "Salidas del problema:" << endl;
    int fila, columna;
    busqueda(archivoSalida, sopa, palabras, fila, columna);
    

    // Explicacion de la tecnica seleccionada
    archivoSalida << "Explicación de la técnica seleccionada:" << endl;
    archivoSalida << "Se ha utilizado principalmente la tecnica de fuerza bruta para resolver el problema, con divide y venceras " << endl <<
    "Dividiendo los metodos de busqueda en metodos especificos que nos permiten abordar el proceso de una manera modular. " << endl <<
    "Esta no es la manera mas eficiente de resolver el problema, pero dado la naturaleza del problema y la cantidad de palabras a buscar, " << endl <<
    "se ha optado por esta tecnica para facilitar la comprension y el mantenimiento del codigo." << endl;
    archivoSalida << "Agradecimientos a sebastian por permitirnos las habilidades de c++ para la comprension de las diferentes tecnicas de progamacion." << endl;

}