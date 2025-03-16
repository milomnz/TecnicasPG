#include <iostream>
#include <vector>
using namespace std;

/*
Promedio y filtrado: Pide al usuario ingresar n números en un
vector<int>. Calcula el promedio y muestra solo los números que sean
mayores que este valor.
*/
void llenarArreglo(vector<int>&);
void mayoresQuePromedio(vector<int>&, double);

int main(){

    vector<int> numeros;
    llenarArreglo(numeros);
    int sum = 0;
    for(int num : numeros){
        sum+=num;
    }
    double prom = sum/numeros.size();

    // Procedimiento que imprime los numeros que sean mayores que el promedio
    mayoresQuePromedio(numeros, prom);
    
    return 0;

}

void llenarArreglo(vector<int>& arr){
    int num, numInsert;
    cout << "Cuantos numeros desea agregar al arreglo? ";
    cin >> num;
    for (int i = 0; i<num; i++){
        cout << "Que numero desea ingresar en la posicion: " << i << endl;
        cin >> numInsert;
        arr.push_back(numInsert);
    }
}

void mayoresQuePromedio(vector<int>& arr, double prom){
    cout << "Numeros mayores que el promedio: ";
    vector<int>:: iterator it;
    for(it = arr.begin(); it<arr.end();it++){
      if(*it > prom){
        cout << *it << '\n';
      }
    }
}