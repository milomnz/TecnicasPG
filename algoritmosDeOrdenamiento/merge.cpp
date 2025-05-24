/*
Implementa la función mergeSort para ordenar un vector de números
enteros. Luego, crea un programa que lea un conjunto de números
desde un archivo, aplique merge sort y guarde el resultado ordenado
en otro archivo.


*/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

vector<int> mergeSort(vector<int> izq, vector<int> der);
vector<int> merge(vector<int> arr, int inicio, int final){
    if (inicio==final){
        vector<int> dato;
        dato.push_back(arr[inicio]);
        return dato;
    }

    int mitad = (final+inicio)/2;
    vector<int> izq = merge(arr,inicio, mitad);
    vector<int> der = merge(arr, mitad+1, final);
    return mergeSort(izq, der);
}

vector<int> mergeSort(vector<int> izq, vector<int> der){
    int i = 0;
    int j = 0;

    vector<int> resul;

    while(i < izq.size() && j < der.size()){
        if(izq[i] < der[j]){
            resul.push_back(izq[i]);
            i++;
        }else{
            resul.push_back(der[j]);
            j++;
        }
    }

    while (i<izq.size()){
        resul.push_back(izq[i]);
        i++;
    }
    while (j<der.size()){
        resul.push_back(der[j]);
        j++;
    }

    return resul;
}

int main(){
    ifstream archivoEntrada("entrada.txt");

    string linea;

    vector<int> numerosArchivo;
    while (getline(archivoEntrada, linea)){
        stringstream ss(linea);

        int valor;
        while (ss >> valor ){
            numerosArchivo.push_back(valor);
            if(ss.peek() == ','){
                ss.ignore();
            }
        }
    }
    /*
    cout << "Numeros recibidos del archivo";
    for(int i : numerosArchivo){
         cout << i << ' ';
    }
    cout << endl;
    */
    vector<int> resultado = merge(numerosArchivo, 0, numerosArchivo.size()-1);
    //cout << "Numeros despues del merge: ";

    
    for(int i : resultado){
        cout << i << '\t';
    }
    ofstream archivoSalida("salida.txt");

    for(int i : resultado){
        archivoSalida << i << ' ';
    }
    archivoSalida << "Codigo Realizado Por Juan Camilo Henao...";
    

}