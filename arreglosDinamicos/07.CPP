#include <iostream>
#include <vector> 
using namespace std;

int main(){
    vector <int> edades;
    for (int i=0;i<5;i++){
        int edad = 0;
        cout << "Ingrese la edad del estudiante " << i+1 << ": ";
        cin >> edad;
        edades.push_back(edad);
    }
    vector <int>::iterator it;
    int sum = 0;
    /*
    for (it = edades.begin(); it != edades.end(); it++){
        sum += *it ;
        }
    */
    for(int valor : edades){
        sum +=valor;
    }
    int promedio = sum/edades.size();
    cout << "El promedio de las edades es: " << promedio;
    return 0;   
    
}