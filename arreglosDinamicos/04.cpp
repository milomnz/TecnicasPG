#include <iostream>
#include <vector>
using namespace std;

    /*
    04. Uso de la libreria vector
    Palabras clave: 
    .pushback -> Agrega un elemento al final del vector
    .size() -> Devuelve el tamaño del vector
    
    
    */
int main(){
    vector <int> edades;
    edades.push_back(23);
    edades.push_back(20);
    edades.push_back(23);

    for(size_t i=0;i<edades.size();i++){
        cout << "Edad" << i << ": " << edades[i] << endl;
    }

}