#include <iostream>
#include <vector>
using namespace std;

//Ejercicio de clase 21/02
/*
Eliminar elementos de un vector dinamico con erase()

*/

int main(){

    vector<int> numeros; 
    numeros.push_back(20);
    numeros.push_back(25);
    numeros.push_back(40);

    int pos;
    char opcion;

    do{
        cout << "Ingrese una posicion";
        cin >> pos;
        

        if (pos >numeros.size()){
            cout << "No se puede eliminar el número, la posicion no existe";
            continue;
        } else{
            numeros.erase(numeros.begin()+pos);

            for (int i : numeros){
                cout << i << '\t';
            }
            cout << "Ingrese S para salir y N para continuar" << endl;
        }
    }while(opcion != 'S' && 's');





}