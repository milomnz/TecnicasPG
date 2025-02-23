#include <iostream>
using namespace std;




//Funcion para calcular el numero mayor que el promedio

int main(){
    int arreglo[10]= {2,2,3,4,5,7,1,2,3,1};
    int numMayorRep = 0, mayorRep = 0;
    for(int i=0; i<10; i++){
        int rep = 0;
        for(int j=i+1; j<10; j++){
            if(arreglo[i] == arreglo[j]){
                rep++;
                }
            }
    if (rep > numMayorRep){
        mayorRep = rep;
        numMayorRep = arreglo[i];
        }
    } //For i 

    cout << numMayorRep;




}