#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> numeros;
    int posicion , valor, opcion;
    while (int i=1){
        try{
            cout << "Bienvenido. Pulse 1. Para agregar un valor, 2. Para salir";
            cin >> opcion;
            if (opcion = 1){
                cout << "Ingrese un valor: ";
                cin >> valor;
                cout << "Ingrese la posicion";
                cin >> posicion;
                if (posicion < numeros.size()+1){
                    numeros.insert(numeros.begin()+posicion,valor);
                }else{
                    cout << "Posicion no valida, Numero no insertado";
                    continue;
                }
            }else if(opcion == 2){
                i++;
            }
        }catch(exception){
            cout << ("Opcion no valida");
        }
    }
}