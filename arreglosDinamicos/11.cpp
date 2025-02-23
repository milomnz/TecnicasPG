/*



    11. Método erase
*/


#include <iostream>
#include <vector>
using namespace std;

int main() {

    /* EJEMPLO COPILOT
    vector<int> vec = {1, 2, 3, 4, 5};

    // Imprimir el vector original
    cout << "Vector original: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    // Eliminar el tercer elemento (índice 2)
    vec.erase(vec.begin() + 2);

    // Imprimir el vector después de eliminar el elemento
    cout << "Vector después de erase: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
    */
    
    /*
    Explicacion de clase
    */


    /*
    Proceso de agregacion de elementos. Añade un elemento desde la primera posicion y un numero correspondiente a a la pos +2
    */
    vector<int> edades;
    for (int i = 0; i<3;i++){
        edades.insert(edades.begin()+i, i+2);
    }

    cout << "Elementos del arreglo" << edades.size() << endl;
    // Iterator. Puntero especifico de la libreria vector para usar en ciclos for.
    vector<int>:: iterator it;

    for(it=edades.begin(); it<edades.end(); it++){
        cout << "Edad en la posicion it: " << *it << endl;
    }
    // Metodo erase para eliminar un elemento en la posicion que se deseee
    edades.erase(edades.begin()+1);
    cout << "Elementos en el arreglo " << edades.size() << endl;
    for (it = edades.begin() ; it<edades.end(); it++){
        cout << "Edad en la posicion it: " << *it << endl; 
    }
    return 0;
}